#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*back;
    public:
    node(int data1,node*next1,node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;                                                
    }
};
node*convertarry(vector<int>&arr){
    node*head=new node(arr[0]);
    node*prev=head;
    for(int i=1;i<arr.size();i++){
        node*temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node *delfirst(node *head){
    if (head == NULL|| head->next==NULL){
        return NULL;
    }
    node*pre=head;
    head=head->next;
    head->back=nullptr;
    pre->next=nullptr;
    delete pre;return head;

}
node *deltail(node*head){
     if (head == NULL|| head->next==NULL){
        return NULL;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
       
    }
     node*newtail=tail->back;
     newtail->next=NULL;
     tail->next=NULL;
     delete tail;
     return head;

    
}
node* removeele(node*head,int k){
    if (head==NULL){
        return NULL;
    }
    int cnt=0;
    node*temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    node*prev=temp->back;
    node*front=temp->next;
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if (front==NULL){}
    {
        return deltail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete (temp);
    return head;
    
}
void deletenode(node*temp){
    node*prev=temp->back;
    node*front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back==nullptr;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    free(temp);
   
   
}
node* reversedll(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*prev= NULL;
    node*cur=head;
    while(cur!=NULL){
        prev=cur->back;
        cur->back=cur->next;
        cur->next=prev;
        cur=cur->back;
    }
    return prev->back;
}
node *additiondll(node *num1,node *num2)
{
    node* dummyhead=new node(-1);
    node*cur=dummyhead;
    node*temp1=num1;
    node*temp2=num2;
    int carry=0;
    while(temp1!=NULL || temp2!=NULL){
        int sum=carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;
        node* newnode=new node(sum%10);
        carry=sum/10;
        cur->next=newnode;
        cur=cur->next;
        if (temp1) temp1=temp1->next;
        if (temp2) temp2=temp2->next;

    }
    if(carry){
        node*newnode=new node(carry);
        cur->next=newnode;
    }
    return dummyhead->next;
}
node* burte(node* head){
    vector<int>arr;
    
    node* temp=head;
    
    while( temp!=NULL && temp->next!=NULL){
        arr.push_back(temp->data);
        temp=temp->next->next;
     }
     if(temp) arr.push_back(temp->data);
     temp=head->next;
     while( temp!=NULL && temp->next!=NULL){
         arr.push_back(temp->data);
        temp=temp->next->next;

     }
     if(temp) arr.push_back(temp->data);
     int i=0;
     temp=head;
     while(temp!=NULL ){
        temp->data=arr[i];
        i++;
        temp=temp->next;

     }
     return head;
}

// node *oddenevenindex(node* head){
//     node *oddh=head;
//     node* evenh=head->next;
//     while(
int main(){
    vector<int>num1={12,3,6,8,4,7,9};
    node*head=convertarry(num1);
    // vector<int>num2={12,3,6,8,1,7,9};
    // node*head1=convertarry(num2);
    // print(head);
    // head=delfirst(head);
    // print(head);
    // head=deltail(head);
    // print(head);
    // head=removeele(head,6);
    // print(head);
    // deletenode(head->next);
    // print(head);
    // 
    // node*head3= additiondll(head,head1);
    // print(head3);
    head=burte(head);
    print(head);
    return 0;
    
}