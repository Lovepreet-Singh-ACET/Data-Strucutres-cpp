#include<iostream>
using namespace std;

// Pattern
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int rows;
    cin>>rows;

   for(int i=1; i<=rows; i++){
       for(int j=1; j<=i; j++){
           cout << i << " ";
       }
       cout<<endl;
   }
    return 0;
}