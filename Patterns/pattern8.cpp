#include<iostream>
using namespace std;

// Pattern
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 


int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

   for(int i=1; i<=n; i++){
       for(int j=1; j<= n-i+1; j++){
           cout << j << " ";
       }
       cout<<endl;
   }
    return 0;
}