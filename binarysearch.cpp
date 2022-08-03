// used in sorted array
// log(n)
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={1,2,3,4,5,6,7};
//     int n=2;
//     int c=0;
//     int b=6;
//     while(c<=b){
//       int mid=(c+b)/2;
//       if(a[mid]==n){cout<<mid<<"\n"; break;}
//       else if(n>a[mid]){c=mid+1;}
//       else {b=mid-1;}
//     }
//     if(c>b) cout<<"-1"<<endl;
//     return 0;
// }

// recursively

// #include<bits/stdc++.h>
// using namespace std;
// int binary(int a[],int n,int i,int j){
//     if(i>=j) return -1;
//     int mid=(i+j)/2;
//     if(a[mid]==n) return mid;
//     if(n>a[mid]) return binary(a,n,mid+1,j);
//     else return binary(a,n,i,mid-1);
// }
// int main(){
//     int a[]={1,2,3,4,5,6,7,8};
//     cout<<binary(a,7,0,7);
//     return 0;
// }


// searching element in an infinitely sorted array
// time compl = O(log n);

// #include<bits/stdc++.h>
// using namespace std;
// void binary(int a,int b,int n,int arr[]){
//     while(a<=b){
//         int mid=(a+b)/2;
//         if(arr[mid]==n) {cout<<"found \n"; break;}
//         else if(arr[mid]>n){b=mid-1;}
//         else a=mid+1;
//     }
//     if(a>b) cout<<"-1 \n";
// }
// int main(){
//     int arr[10]={1,2,3,4,5,7,8,9,10};
//     int n=6;
//     int a=0;
//     int b=1;
//     while(arr[b]<=n){
//         a=b;
//         b*=2;
//     }
//     binary(a,b,n,arr);
//     return 0;
// }


// find an element in a sorted and rotated array

// #include<bits/stdc++.h>
// using namespace std;
// int modbin(int n,int ar[]){
//     int a=0,b=6;
//     while(a<=b){
//         int mid=(a+b)/2;
//         if(ar[mid]==n) return mid;
//         if(ar[mid]>ar[a]){
//             if(n<ar[mid] && n>=ar[a]) b=mid-1;
//             else a=mid+1;
//         }
//         else {
//             if(n>ar[mid] && n<=ar[b]) a=mid+1;
//             else b=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int a[]={5,6,7,1,2,3,4};
//     int n=4;
//     cout<<modbin(n,a);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int find(int ar[],int n){
//     int i=0,j=5;
//     while(j>=i){
//         int mid=(i+j)/2;
//         if(n==ar[mid]) return mid;
//         if(ar[mid]>ar[i]){
//             if(ar[mid]>n && ar[i]<=n) j=mid-1;
//             else i=mid+1;
//         }
//         else{
//             if(ar[mid]<n && ar[j]>=n) i=mid+1;
//             else j=mid-1;
//         }
//     } return -1;
// }
// int main(){
//     int ar[]={5,6,7,1,2,3};
//     cout<<find(ar,7);
//     return 0;
// }

// allocate minimum pages -- advanced binary search
// brute force = 2 ^ n ; binary search = n log(n)
#include<bits/stdc++.h>
using namespace std;
 
int main(){

    return 0;
}