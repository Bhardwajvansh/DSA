// bubble sort 
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={2,1,3,4,2,3};
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5-i;j++){
//             if(a[j]>a[j+1]){ int temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;}
//         }
//     }
//     for(int i=0;i<6;i++) cout<<a[i]<<" ";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={2,43,1,1,3,4,2,2,1};
//     for(int i=0;i<8;i++){
//        for(int j=0;j<8-i;j++){
//            if(a[j+1]<a[j]) {
//                int temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//        }
//     }
//     for(int i=0;i<9;i++) cout<<a[i]<<" ";
//     return 0;
// }


// insertion sort
// taking each element from the unsorted part and putting it in the sorted area using 2 loops
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={3,2,5,7,4,3,5,3};
//     for(int i=1;i<8;i++){
//         int temp=a[i];
//         for(int j=i-1;j>=0;j--){
//             if(a[j]>temp){ a[j+1]=a[j]; a[j]=temp;}
//             else break;
//         }
//     }
//     for(int i=0;i<8;i++) cout<<a[i]<<" ";
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={3,4,2,2,4,6,6,6,78,0};
//     for(int i=1;i<10;i++){
//         int t=a[i];
//         for(int j=i-1;j>=0;j--){
//             if(a[j]>t){a[j+1]=a[j]; a[j]=t;}
//             else break;
//         }
//     }
//     for(int i=0;i<10;i++) cout<<a[i]<<" ";
//     return 0;
// }


// selection sort
// select the minimum element from the unsorted side and put in the front of the array
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={2,4,6,3,7,1,0};
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<7;j++){
//             int* x=min_element(a+i+1,a+10); 
//             int temp=a[j-1];
//             a[j-1]=*x;
//             *x=temp;
//         }
//     }
//     for(int i=0;i<7;i++) cout<<a[i]<<" ";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={2,34,1,5,7,5,5,3};
//     for(int i=0;i<8;i++){
//         int mn=i;
//         for(int j=i;j<8;j++){
//             if(a[j]<a[i]) mn=j;
//         }       
//         if(i!=mn){
//             int temp=a[i];
//             a[i]=a[mn];
//             a[mn]=temp;
//         }
//     }
//     for(int i=0;i<8;i++) cout<<a[i]<<" ";
//     return 0;
// }

// quick sort
// partition method 
// best case n * log(n)
// worst case n * n

// #include<bits/stdc++.h>
// using namespace std;
// int part(int l,int h,int a[]){
//     int pi=a[l];
//     int x=l;
//     while(l<h){
//         while(pi>=a[l]) l++;
//         while(pi<a[h]) h--;
//         if(l<h){
//             int temp=a[l];
//             a[l]=a[h];
//             a[h]=temp;
//         }
//     }
//     int temp=a[x];
//     a[x]=a[h];
//     a[h]=temp;
//     return h;
// }
// void quick(int i,int j,int a[]){
//     if(i<j){
//         int pi=part(i,j,a);
//         quick(i,pi-1,a);
//         quick(pi+1,j,a);
//     }
//     else return;
// }
// int main(){
//     int a[]={5,4,6,7,3,2,5};
//     quick(0,6,a);
//     for(int i=0;i<7;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int part(int i,int j,int a[]){
//     int pi=a[i];
//     int x=i;
//     while(i<j){
//         while(pi>=a[i]) i++;
//         while(pi<a[j]) j--;
//         if(i<j){
//             int temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//         }
//     }
//     int temp=a[x];
//     a[x]=a[j];
//     a[j]=temp;
//     return j;
// }
// void quick(int i,int j,int a[]){
//     if(i<j){
//         int pi=part(i,j,a);
//         quick(i,pi-1,a);
//         quick(pi+1,j,a);
//     }
// }
// int main(){
//     int a[]={2,5,3,4,7,8,6};
//     quick(0,7,a);
//     for(int i=0;i<7;i++){
//         cout<<a[i]<<" ";
//     }   
//     return 0;
// }



// merge sort
// devide and concure

// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr[],int l,int mid,int r){
//     int i=l;
//     int k=l;
//     int j=mid+1;
//     int temp[100];
//     while(i<=mid && j<=r){
//         if(arr[i]<arr[j]){temp[k]=arr[i]; i++;}
//         else {temp[k]=arr[j]; j++;}
//         k++;
//     }
//     while(i<=mid){
//         temp[k]=arr[i];
//         i++; k++;
//     }
//     while(j<=r){
//         temp[k]=arr[j];
//         j++; k++;
//     }
//     for(k=l;k<=r;k++){
//         arr[k]=temp[k];
//     }
// }
// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
        
//         merge(arr,l,mid,r);
//     }
// }
// int main(){
//     int arr[]={3,2,5,4,6,8,7,6};
//     mergesort(arr,0,8);
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// merge sort

// #include<bits/stdc++.h>
// using namespace std;
// void merge(int i,int j,int mid,int a[]){
//     int b=i;
//     int c=mid+1;
//     int d=i;
//     int temp[1000];
//     while(b<=mid && c<=j){
//         if(a[b]<a[c]){temp[d]=a[b]; b++;}
//         if(a[b]>a[c]){temp[d]=a[c]; c++;}
//         d++;
//     }
//     while(b<=mid){
//         temp[d]=a[b];
//         b++; d++;
//     }
//     while(c<=j){
//         temp[d]=a[c];
//         c++; d++;
//     }
//     for(d=i;d<=j;d++) a[d]=temp[d];
// }
// void mergesort(int i,int j,int a[]){
//     if(i<j){
//         int mid=(i+j)/2;
//         mergesort(i,mid,a);
//         mergesort(mid+1,j,a);
//         merge(i,j,mid,a);
//     }
// }
// int main(){
//     int a[]={6,5,4,3,2,1};
//     mergesort(0,6,a);
//     for(int i=0;i<6;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
