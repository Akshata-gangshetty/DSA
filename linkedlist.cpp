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
//searching whether the element exist or not
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
// Reverse Linked list
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
//  bool palindrom(node *head){
//     node *temp=head;
//     stack<int>st;
//     while(temp!=NULL){
//         st.push(temp->data);
//         temp=temp->next;;

//     }
//     temp=head;
//     while(temp!=NULL){
        
//         if(temp->data!= st.top()){
//             return false;
//         }
//         st.pop();

//         temp=temp->next;
    
//     }
//     return true;
// }
// bool oppalindrom(node *head){
//     node *slow=head;
//     node *fast =head;
//     while(fast->next!=NULL  && fast->next->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//    node* newhead=reverll(slow->next);
//    node *first=head;
//     node *sec=newhead;
//     while(sec!=NULL){
//         if(first->data!=sec->data){
//             reverll(newhead);
//             return false;
//         }
//         first=first->next;
//         sec=sec->next;
//     }
//     reverll(newhead);
//     return true;

// }
// int addhhelper(node *temp){

//     if(temp==NULL){
//         return  1;
//     }

//     int carry=addhhelper(temp->next);
//     temp->data+=carry;
//     if (temp->data < 10)
//     {
//        return 0; /* code */
//     }
//     temp->data=0;
//     return  1;
    
// }
// node *addone(node *head){
//     int carry=addhhelper(head);
//     if(carry==1){
//         node *newhead=new node(1);
//         newhead->next=head;
//         head=newhead;
//     }
//     return head;
// }
// node *findintersection(node *head1,node *head2){
//     if(head1==NULL || head2 ==NULL){
//         return NULL;
//     }
//     node *temp1=head1;
//     node *temp2=head2;
//     while(temp1!=temp2){
//         temp1=temp1->next;
//         temp2=temp2->next;
//         // if(temp1==temp2) return temp1;
//         if(temp1==NULL) temp1=head2;
//         if(temp2==NULL) temp2=head1;

//     }
//     return temp1;
// }


// int main()
// {
//     vector<int>arr={9,10,11};
//     node*head1= convarrlink(arr);
//     node*temp1=head1;
//     while(temp1){
//             cout<<temp1->data<<" ";
//             temp1=temp1->next;
//         }
//     cout<<endl<<" ";
//      vector<int>arr2={1,2,3,9,10,11};
//     node*head2= convarrlink(arr2);
//     node*temp=head2;
//     while(temp){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     cout<<endl<<" ";
//     cout<<findintersection(head1,head2)<<" ";

//     // temp=addone(head);
//     //  while(temp){
//     //         cout<<temp->data<<" ";
//     //         temp=temp->next;
//     //     }

    

 
// }
// node *midddlenode(node *head){// for odd linked list and eve linked list also as we have to findout second mid
//     node *temp=head;
//     int cnt=0;
//     while(temp!=NULL){   //O(n)
//         cnt++;
//         temp=temp->next;
//     }
//     int mid=(cnt/2)+1;
//     temp=head;
//     while (temp!=NULL)
//     {
//        mid=mid-1;
//        if (mid==0)
//        {
//          break;/* O(n/2) */
//        }
//        temp=temp->next;
       
//     }
//     return temp;
    
// }//tortise and hare concept
// node *middlenode(node *head){ //  Time complexity =O(n) and spacecomplexity=O(1)
//     node *slow=head;
//     node *fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;

//     }
//     return slow;
// }
//tortise and hare concept
int findlen(node *slow,node *fast){
    int  cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}
int looplen(node * head){
    node *slow=head;
    node *fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)return findlen(slow,fast);

    }
    return 0;
}

int main(){

    vector<int>arr={1,2,3,4,5,6};
    node *head=convarrlink(arr);
    node*temp=head;
    while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    // node *mid=middlenode(head);
        // node *llen=looplen(head);
        cout<<looplen(head)<<" ";

}




