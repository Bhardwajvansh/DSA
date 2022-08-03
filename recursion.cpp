// fint a rais to b

// #include<bits/stdc++.h>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     int a=2;
//     int b=8;
//     cout<<power(a,b);
//     return 0;
// }

// number of ways to go from one corner of a mXn matrix to the other corner by only moving right nd bottom

// #include<bits/stdc++.h>
// using namespace std;
// int way(int n,int m){
//     if(n==1 || m==1) return 1;
//     return way(n,m-1) + way(n-1,m);
// }
// int main(){
//     cout<<way(3,3);
//     return 0;
// }

// josephus problem

// #include<bits/stdc++.h>
// using namespace std;
// int jos(int n,int k){
//     if(n==1) return 0;
//     return (jos(n-1,k)+k)%n;
// }
// int main(){
//     cout<<jos(6,3);
//     return 0;
// }


// palindrom or not
// #include<bits/stdc++.h>
// using namespace std;
// int func(string s){
//     if(s.size()==0 || s.size()==1) return 1;
//     if(s[0]==s[s.size()-1]){
//         return func(s.substr(1,s.size()-2));
//     }
//     else return 0;
// }
// int main(){
//     string s="raecar";
//     cout<<func(s);
//     return 0;
// }


// print all substr

// #include<bits/stdc++.h>
// using namespace std;
// void sub(string s,int i,string cur){
//     if(i==s.size()) {cout<<cur<<endl; return;}
//     sub(s,i+1,cur+s[i]);
//     sub(s,i+1,cur);
// }
// int main(){
//     string s="abc";
//     sub(s,0,"");   
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<string> ans;
// void sub(string s,int i,string cur){
//     if(i==s.size()){ans.push_back(cur); return;}
//     sub(s,i+1,cur+s[i]);
//     sub(s,i+1,cur);
// } 
// int main(){ 
//     string s="van";
//     sub(s,0,"");
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<endl;
//     }
//     return 0;
// }


// all permutations of a string

// uses backtracking

// #include<bits/stdc++.h>
// using namespace std;
// string swap(string s,int a,int b){
//     char temp=s[b];
//     s.erase(b,1);
//     s[b]=s[a];
//     s.erase(a,1);
//     s[a]=temp;
//     return s;
// }
// void per(string s,int a,int b){
//     if(a==b) {cout<<s; return;}
//     for(int i=0;i<=b;i++){
//         s=swap(s,a,i);
//         per(s,a+1,b);
//         s=swap(s,a,i);
//     }
// }
// int main(){
//     string s="abc";
//     // per(s,0,2);
//     cout<<swap(s,0,1);
//     return 0;
// }


// 

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    return 0;
}