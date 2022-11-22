// LIFI

// #include<bits/stdc++.h>
// using namespace std;
// #define n 100
// class Stack{
//     int* arr;
//     int top;
//     public:
//     Stack(){
//         arr=new int[n];
//         top=-1;
//     }
//     void push(int x){
//         if(top==n-1) {cout<<"stack overflow"<<endl; return;}
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){cout<<"no element to pop"<<endl; return;}
//         top--;
//     }
//     int Top(){
//         if(top==-1){cout<<"no element to pop"<<endl; return -1;}
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };
// int main(){
//     Stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top();
//     return 0;
// }


// reversing a sentence using stack

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     stack<string> s;
//     string s1="vansh is good";
//     string x="";
//     for(int i=0;i<s1.size();i++){
//         if(i==s1.size()-1) x+=s1[i];
//         if(s1[i]==' ' || i==s1.size()-1) {s.push(x); x="";}
//         else x+=s1[i];   
//     }
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }


// reversing a stack using recursion

// #include<bits/stdc++.h>
// using namespace std;
// void bottom(int t,stack<int> &s){
//     if(s.empty()) {
//         s.push(t);
//         return; 
//     }
//     int ele=s.top();
//     s.pop();
//     bottom(t,s);
//     s.push(ele);
// }
// void removetop(stack<int> &s){
//     if(s.empty()) return;
//     int t=s.top();
//     s.pop();
//     removetop(s);
//     bottom(t,s);
// }
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     removetop(s);
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//     return 0;
// }