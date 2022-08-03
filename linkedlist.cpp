// linear data structure
// advantages over arrays :-
// size dosent have to be defined beforehand
// insertion and deletion takes O 1 time 

// #include<bits/stdc++.h>
// using namespace std;
// class   node{
//     public:
//     int data;
//     node* next;
//     node(int n){
//         data = n;
//         next=NULL;
//     }
// }; 
// void insert(node* &head,int val){
//     node * n=new node(val);
//     node* temp=head;
//     while(temp->next!=NULL) temp=temp->next;
//     temp->next=n;
// }
// void insertstart(node* &head,int val,int pos){
//     node * n=new node(val);
//     node * temp=head;
//     if(pos==0){
//         n->next=head;
//         head=n;
//         return;
//     }
//     for(int i=0;i<pos-1;i++){
//         temp=temp->next;
//     }
//     n->next=temp->next;
//     temp->next=n;
//     return;
// }
// void del(node* &head,int pos){
//     node * t=head;
//     if(pos==0){
//         head=head->next;
//         return;
//     }
//     for(int i=0;i<pos-1;i++) t=t->next;
//     t->next=t->next->next;
// }
// void display(node * head){
//     node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }   
// }
// int main(){
//     node* head=new node(10);
//     insert(head,20);
//     insert(head,30);
//     insert(head,40);
//     insertstart(head,15,1);
//     insertstart(head,1,0);
//     insertstart(head,0,3);
//     del(head,2);
//     display(head);
//     return 0;
// }   

// reversing linked list

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int n){
//         data=n;
//         next=NULL;
//     }
// };
// void insert(node* &head,int val,int pos){
//     node * n=new node(val);
//     node * temp=head;
//     if(pos==0){
//         n->next=head;
//         head=n;
//         return;
//     }
//     for(int i=0;i<pos-1;i++){
//         temp=temp->next;
//     }
//     n->next=temp->next;
//     temp->next=n;
//     return;
// }
// void display(node * head){
//     node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }   
// }
// void reverse(node* &head){
//     node * p=NULL;
//     node * c=head;
//     while(c!=NULL){
//         node* t=c->next;
//         c->next=p;
//         p=c;
//         c=t;
//     }
//     head=p;
// }
// node * reverseREC(node * &head){
//     if(head==NULL|| head->next==NULL) return head;
//     node * newh=reverseREC(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newh;
// }
// int main(){
//     node* head=new node(10);
//     insert(head,9,1);
//     insert(head,8,1);
//     insert(head,5,1);
//     // reverse(head);
//     display(head); cout<<endl;
//     node * nh=reverseREC(head);
//     display(nh);
//     return 0;
// }

// pallindrome linked list

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     char data;
//     node * next;
//     node(char n){
//         data=n;
//         next=NULL;
//     }
// };
// void insert(node* &head,char n){
//     node * nw=new node(n);
//     node * t=head;
//     while(t->next!=NULL) t=t->next;
//     t->next=nw;
// }
// void display(node * head){
//     node * t=head;
//     while (t!=NULL)
//     {   
//         cout<<t->data<<" ";
//         t=t->next;
//     }
    
// }
// node * middle(node * head){
//     node * sl=head;
//     node * fa=head;
//     while(fa!=NULL && fa->next!=NULL){
//         sl=sl->next;
//         fa=fa->next->next;
//     }
//     return sl;
// }
// node * rev(node * head){
//     node * prv=NULL;
//     node * cur=head;
//     while(cur!=NULL){
//         node * t=cur->next;
//         cur->next=prv;
//         prv=cur;
//         cur=t;
//     }
//     return prv;
// }
// int pall(node * head){
//     if(head==NULL) return 1;
//     node * mid=middle(head);
//     node * last=rev(mid->next);
//     node * cur=head;
//     while(last!=NULL){
//         if(last->data!=cur->data) return -1;
//         last=last->next;
//         cur=cur->next;
//     }
//     return 1;
// }
// // to get to the middle of the list we will use slow and fast pointer
// int main(){
//     node * h=new node('r');
//     insert(h,'a');
//     insert(h,'c');
//     insert(h,'e');
//     insert(h,'c');
//     insert(h,'a');
//     insert(h,'r');
//     display(h);
//     cout<<pall(h);   
//     return 0;
// }

// detect a cycle in ll

// #include<bits/stdc++.h>
// using namespace std;
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int n){
//         data=n;
//         next=NULL;
//     }
// };
// void insert(node* &head,int n){
//     node * nw=new node(n);
//     node * t=head;
//     while(t->next!=NULL) t=t->next;
//     t->next=nw;
// }
// void crecyc(node * &head,int pos){
//     node * poss=head;
//     node * t=head;
//     for(int i=0;i<pos;i++){
//         poss=poss->next;
//     }
//     while(t->next!=NULL){
//         t=t->next;
//     }
//     t->next=poss;
// }
// void display(node * head){
//     node * t=head;
//     while (t!=NULL)
//     {   
//         cout<<t->data<<" ";
//         t=t->next;
//     }
// }
// int detect(node * &head){
//     node * sl=head;
//     node * fa=head;
//     while(fa!=NULL && fa->next!=NULL){
//         sl=sl->next;
//         fa=fa->next->next;
//         if(sl==fa) return 1;    
//     }
//     return -1;
// }
// int nodedet(node * &head){
//     node * sl=head;
//     node * fa=head;
//     node * z;
//     node * t=head;
//     while(fa!=NULL && fa->next!=NULL){
//         sl=sl->next;
//         fa=fa->next->next;
//         if(sl==fa) {z=sl; break;}    
//     } 
//     while(t!=z){t=t->next; z=z->next;}
//     return t->data;
// }
// // floyd's cycle detection algo
// int main(){
//     node * h=new node(10);
//     insert(h,20);
//     insert(h,30);
//     insert(h,40);
//     insert(h,50);
//     crecyc(h,2);
//     // display(h);
//     cout<<detect(h)<<endl;
//     cout<<nodedet(h)<<endl;
//     return 0;
// }

// duplicate a LL with random pointer

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node * ran;
//     node(int n){
//         data=n;
//         next=NULL;
//         ran=NULL;
//     }
// };
// node * duplicate(node*head){
//     node * cur=head;
//     while(cur!=NULL){
//         node * t=cur->next;
//         cur->next=new node(cur->data);
//         cur->next->next=t;
//         cur=t;
//     }
//     cur=head;
//     while(cur!=NULL){
//         if(cur->next!=NULL){
//             cur->next->ran=(cur->ran!=NULL)? cur->ran->next:NULL;
//         }
//         cur=cur->next->next;
//     }
//     node * og=head;
//     node * cpy=head->next;
//     node * t=cpy;
//     while(og!=NULL){
//         og->next=og->next->next;
//         cpy->next=cpy->next->next;
//         og=og->next;
//         cpy=cpy->next;
//     }
//     return t;
// }
// int main(){
    // node * head=new node(210);
    // return 0;
// }



#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node * ran;
    node(int n){
        data=n;
        next=NULL;
        ran=NULL;
    }
};
void insert(node* &head,int val){
    node * n=new node(val);
    node* temp=head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=n;
}
void display(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }   
}
node * rem(node * head,int n){
    while(head->data!=n){
        head=head->next;
    }
    node * nw=head;
    while (nw!=NULL){
        if(nw->next->data==n) {nw->next=nw->next->next; nw=nw->next;}
        else nw=nw->next;
    }
    return head;
}
int main(){
    node * head=new node(1);
    insert(head,2);
    // insert(head,3);
    cout<<head->next->next->data<<endl;
    // insert(head,2);
    // insert(head,4);
    // display(rem(head,2));
    return 0;
}