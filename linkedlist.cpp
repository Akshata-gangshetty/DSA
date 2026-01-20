#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

    public:
    node (int data1,node* next1){
    data=data1;
    next =next1;}
    public:
    node(int data1){
        data=data1;
        next=nullptr;
    }


};
// conversion of array into singly linked list
node* convarrlink(vector<int>&arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;//mover=mover->next;

    }
    return head;

}
//Length of linkedlist
// /*int lenl(node* head){              
//     int cnt=0;
//     node*temp=head;

//     while(temp){
//         //temp->data<<" ";
//         temp=temp->next;
//         cnt++;
//     }
//     return cnt;
// }
// int checkval(node*head,int val){
//     node*temp=head;
//      while(temp){
//         //temp->data<<" ";
//         if(temp->data==val)return 1;
//         temp=temp->next;
        
//     }

// }
// node* deletehead(node*head){
//     if(head==NULL)return head;
//     node*temp=head;
//     head=head->next;
//     delete temp;
//     return head;

// }
// int main(){
//     vector<int>arr={2,4,6,8};
//     //node*y=new node(arr[0],nullptr);
//     //cout<<y->data<<" "<<y->next<<" ";
    
//     node*head= convarrlink(arr);
//     node*temp=head;
//  while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     //cout<<"length of link list"<<lenl(head)<<" ";
//     //cout<<endl<<checkval(head,4)<<" ";
//     head=deletehead(head);
//      while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }*/
// class node{
//     public:
//     int data;
//     node*next;

//     public:
//     node (int data1,node* next1){
//     data=data1;
//     next =next1;}
//     public:
//     node(int data1){
//         data=data1;
//         next=nullptr;
//     }
// };
// node* convarrlink(vector<int>&arr){
//     node* head=new node(arr[0]);
//     node* mover=head;
//     for(int i=1;i<arr.size();i++){
//         node*temp=new node(arr[i]);
//         mover->next=temp;
//         mover=temp;//mover=mover->next;

//     }
//     return head;

// }

// node* deletetail(node* head){
//     if(head==NULL || head->next==NULL) return NULL;
//     node*temp=head;
//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//     free(temp->next);
//     temp->next=NULL;
//     return head;


// }
// node* kthdel(node*head,int k){
//     node*temp=head;
//     node*ptr;
//     while(temp->data!=k){
//         ptr=temp;
//         temp=temp->next;
//     }ptr->next=temp->next;
//     free(temp);
//     return head;

// }

// int main(){
//     vector<int>arr={1,2,3,4,5,6};
//     node*head=convarrlink(arr);
//     int k=2;
//    deletetail( head);
//     kthdel(head, k);
//    node*temp=head;
//    while (temp)
//    {
//     cout<<temp->data<<" ";
//         temp=temp->next;
    
//    }
   
// }
//find n-2 and delete
// node delendn(node *head,int k){
//     node *fast=head;
//     node *slow=head;
//     for (int i = 0; i < k; i++)
//     {
//         fast=fast->next;
//     }
//     if(fast==NULL) return head->next;
//     while(fast->next!=NULL){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     node *delnode=slow->next;
//     slow->next=slow->next->next;
//     free(delnode);   

// }
//Reverse Linked list
// node * reverll( node *head){
//     node *temp=head;
//     node *prev=NULL;
//     while(temp!=NULL){
//         node *front=temp->next;
//         temp->next=prev;
//         prev=temp;
//         temp=front;


//     }
//     return prev;
// }
 bool palindrom(node *head){
    node *temp=head;
    stack<int>st;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;;

    }
    temp=head;
    while(temp!=NULL){
        
        if(temp->data!= st.top()){
            return false;
        }
        st.pop();

        temp=temp->next;
    
    }
    return true;
}
int main()
{
    vector<int>arr={1,2,3,1,1};
    node*head= convarrlink(arr);
    node*temp=head;
    // while(temp){
    //         cout<<temp->data<<" ";
    //         temp=temp->next;
    //     }
    // temp
    // head=reverll(head);
    // temp=head;
    //  while(temp){
    //         cout<<temp->data<<" ";
    //         temp=temp->next;
    //     }
    cout<<palindrom(head)<<" ";

 
}




