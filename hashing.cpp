// insert search and delete in O(1) time comp

// in set it uses binary tree therefore the tiime comp is O(log n) 
// but in unordered set the time comp is O(1)

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     unordered_set<int> u;
//     for(int i=0;i<5;i++){
//         int p;
//         cin>>p;
//         u.insert(p);
//     }
//     cout<<u.size()<<endl;
//     cout<<u.count(1)<<endl;
//     u.erase(5);
//     cout<<u.count(5)<<endl;
//     for(auto i=u.begin();i!=u.end();i++){ cout<<*i<<" ";}
//     u.clear();
//     cout<<u.size()<<endl;
//     return 0;
// }

//  fint  distant elements

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={1,2,2,2,2};
//     unordered_set<int> u;
//     for(int i=0;i<5;i++) u.insert(a[i]);
//     cout<<u.size()<<endl;
//     return 0;
// }

// find subarray with given sum

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={10,10,15,-15,20};
//     int cur=0;
//     int sum=5;
//     map<int,int> m;
//     for(int i=0;i<5;i++){
//         cur+=a[i];
//         if(cur==sum) {cout<<0<<" "<<i; break;}       
//         if(m.find(cur-sum)!=m.end()){
//             cout<<m.find(cur-sum)->second+1<<" "<<i<<endl;
//             break;
//         }
//         m.insert({cur,i});
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={1,2,3,4,5};
//     map<int,int> m;
//     int sum=7;
//     int cur=0;
//     for(int i=0;i<5;i++){
//         cur+=a[i];
//         if(cur==sum) {cout<<0<<" "<<i<<endl; break;}        
//         if(m.find(cur-sum)!=m.end()) {cout<<m.find(cur-sum)->second+1<<" "<<i<<endl; break;}
//         m.insert({cur,i});
//     }   
//     return 0;
// }



// element and its frequency

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     unordered_map<int,int>m ;
//     int a[]={1,1,1,1,2,2,2,3};
//     for(int i=0;i<8;i++){
//         m[a[i]]++;       
//     }
//     for(auto i=m.begin();i!=m.end();i++){cout<<i->first<<" "<<i->second<<endl;}
//     return 0;
// }

// sumber of subarrays with sum 0;

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={-1,-1,1,1,1,1};
//     int sum=0;
//     map<int,int> m;
//     int cur=0;
//     int ans=0;
//     for(int i=0;i<6;i++){
//         cur+=a[i];
//         if(cur==sum) ans++;
//         if(m.find(cur-sum)!=m.end()) {ans++; }
//         m.insert({cur,i});
//     }    
//     for(auto i=m.begin();i!=m.end();i++){cout<<i->first<<" "<<i->second<<endl;}
//     cout<<ans<<endl;
//     return 0;
// }

// minimum sum of subarray of length k

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int ar[]={1,-5,4,7,-3,7,8,2,-11,20};
//     // map<int,int> m;
//     int k=4;
//     int mn=INT_MAX;
//     for(int i=0;i<10;i++){
//         int sum=0;
//         for(int j=i;j<=i+k;j++){
//             sum+=ar[j];
//         }
//         mn=min(mn,sum);
//     }
//     cout<<mn<<endl;
//     return 0;
// }


// sudoku solver

// #include<bits/stdc++.h>
// using namespace std;
// void solve(int s[9][9]){
//     map<pair<int,int>,map<int,int>> mp;
//     vector<map<int,int>> row(9);
//     vector<map<int,int>> col(9);
     
// }
// int main(){
//     int s[9][9]={{ 3, 0, 6, 5, 0, 8, 4, 0, 0 },
//     { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
//     { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
//     { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
//     { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
//     { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
//     { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
//     { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
//     { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
//     solve(s);
//     return 0;
// }


// find distinct elements in a window of k elements 

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={1,2,1,3,1,1,3,3,2,2,2};
//     int k=4;
//     for(int i=0;i<10;i++){
//         set<int> s;
//         for(int j=i;j<i+k;j++){ if(j>10) break; else s.insert(a[j]);}
//         cout<<s.size()<<endl;
//         s.clear();
//     }   
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     vector<int> v={2,2,2,3,2,1,2,1,23};
//     int k=4;
//     map<int,int> m;
//     for(int i=0;i<k;i++) m[v[i]]++;
//         cout<<m.size()<<endl;
//     for(int i=k;i<v.size();i++){
//         m[v[i-k]]--;
//         m[v[i]]++;
//         if(m[v[i-k]]==0) m.erase(v[i-k]);
//         cout<<m.size()<<endl;
//     }
//     return 0;
// }


// internal working of hashmap

// all the keys are will be unique - if a new value is applied to an existing key then the value of that key will eb updated - but noe new key will be generated
// insert -> search-> delete-> O(n) in hashmap
// it uses hash functions :-
// > map larger value to a small value
// > should be in O(1) or O(len) in strings
// > shoul =d uniformly destribute large keys into hash tables

