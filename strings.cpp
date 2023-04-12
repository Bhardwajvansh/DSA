// duplicates in string using bit operations

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    long long a,b=0;
    map<char,int> mp;
    for(int i=0;i<s.length();i++){
        a=1;
        a=a<<(s[i]-97);
        if(a&b>0) cout<<s[i]<<endl;
        else b=a|b;
    }   
    for(auto i=mp.begin();i!=mp.end();i++){
        cout<<i->first<<endl;
    }
    return 0;
}