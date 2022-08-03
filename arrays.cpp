// element which is present more than N/2 times
// specific algorith .... moors majority algorithm
// to keep a count of the frequency of each element and increase and decrease it
// the element remaining in the last is the majority element 

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[8]={1,2,2,1,3,1,1,2};
//     int f(1),n(0);
//     for(int i=1;i<8;i++){
//         n=a[i-1];
//         if(n==a[i]) f++;
//         else f--;
//     }
//     if(f) cout<<n;
//     else cout<<"no element";
//     return 0;
// }


// kaden's algorithm
// maximum sum sub array
// calculate the cursum and maxsum and if cursum>maxsum make maxsum=cursum and if cursum<0 cursum will become 0; 
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[6]={-5,-4,-2,-6,-1};
//     int cs(0),ms(0);
//     for(int i=0;i<6;i++){
//         cs+=a[i];
//         if(cs>ms) ms=cs;
//         else if(cs<0) cs=0;
//     }
//     cout<<ms;
//     return 0;
// }


// stock buy and sell - 1
// the most optimised way is to traverse on each element and get the most profit by subtracting it with the minimum price behind the element

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[7]={3,1,4,8,7,2,5};
//     int mp=a[0];
//     int maxp=-1;
//     for(int i=0;i<6;i++){
//         if(mp>a[i]) mp=a[i];
//         maxp=max(maxp,a[i]-mp);
//         cout<<maxp<<endl;
//     }
//     cout<<maxp;
//     return 0;
// }


// stock buy and sell - 2
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
    
//     return 0;
// }

// water trapping problkem

// make left and right array for maximum element and then cout the minimum element of each iteration
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[8]={3,1,2,4,0,1,3,2};
//     int ans[8];
//     int l=a[0];
//     for(int i=1;i<8;i++){
//         if(a[i]>l) l=a[i];
//         else{

//         }
//     }
//     for(int i=0;i<8;i++) cout<<a[i]<<" ";
//     return 0;
// }

