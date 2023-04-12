// trailing 0s in factorial

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     cout<<n/5+n/25+n/625;
//     return 0;
// }

// seive of erotosthenies

// prime numbers in a range
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a=10;
//     bool ans[a+1]={true};
//     for(int i=2;i*i<=a;i++){
//         for(int j=2*i;j<a;j+=i){
//             if(ans[j]==true) ans[j]=false;
//         }
//     }
//     for(int i=2;i<a;i++){
//         cout<<ans[i]<<endl;
//     }
//     return 0;
// }

// GCD of a and b = GCD(b,a%b)

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b){
//     if(a%b==0) return b;
//     return gcd(b,a%b);
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b);
//     return 0;
// }

// representing polinomial

#include<bits/stdc++.h>
using namespace std;
struct term{
    int coef;
    int exp;
};
struct poly{
    int n;
    struct term *t;
};
int main(){
    struct poly p;
    p.n=5;
    p.t=new term[p.n];
    for(int i=0;i<p.n;i++){
        cin>>p.t[i].coef;
        cin>>p.t[i].exp;
    }
    return 0;
}