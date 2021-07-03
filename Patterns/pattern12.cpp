#include<iostream>
using namespace std;

// Pattern
//     1
//    212
//   32123
//  4321234
// 543212345

// patter is not complete will do in future


int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

   for(int i=1; i<=n; i++){
       for(int j=1; j<=n-i ; j++){
           cout<< " ";
       }
       for(int j=i; j>=1; j--){
           cout<< j;
       }
       
       cout<<endl;
   }
    return 0;
}