# backend/app.py
from flask import Flask, request, jsonify
from flask_cors import CORS
import sqlite3

app = Flask(__name__)
CORS(app)

def get_db():
    conn = sqlite3.connect('db.sqlite3')
    conn.row_factory = sqlite3.Row
    return conn

@app.route('/')
def home():
    return {"message": "Uber for Tractors API running 🚜"}

@app.route('/register', methods=['POST'])
def register():
    data = request.json
    conn = get_db()
    conn.execute("INSERT INTO users (name, role, phone) VALUES (?, ?, ?)",
                 (data['name'], data['role'], data['phone']))
    conn.commit()
    return jsonify({"status": "success"})

@app.route('/book_tractor', methods=['POST'])
def book_tractor():
    data = request.json
    conn = get_db()
    conn.execute("INSERT INTO bookings (farmer_name, location, time, status) VALUES (?, ?, ?, 'pending')",
                 (data['farmer_name'], data['location'], data['time']))
    conn.commit()
    return jsonify({"status": "booking_created"})

@app.route('/view_requests', methods=['GET'])
def view_requests():
    conn = get_db()
    rows = conn.execute("SELECT * FROM bookings WHERE status='pending'").fetchall()
    return jsonify([dict(row) for row in rows])

@app.route('/accept_booking/<int:id>', methods=['POST'])
def accept_booking(id):
    conn = get_db()
    conn.execute("UPDATE bookings SET status='accepted' WHERE id=?", (id,))
    conn.commit()
    return jsonify({"status": "accepted"})

if __name__ == '__main__':
    conn = get_db()
    conn.execute("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY, name TEXT, role TEXT, phone TEXT)")
    conn.execute("CREATE TABLE IF NOT EXISTS bookings (id INTEGER PRIMARY KEY, farmer_name TEXT, location TEXT, time TEXT, status TEXT)")
    conn.close()
    app.run(debug=True)
