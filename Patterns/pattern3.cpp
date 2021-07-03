#include<iostream>
using namespace std;

// Pattern
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int rows;
    cin>>rows;

   for(int i=rows; i>0; i--){
       for(int j=1; j<=i; j++){
           cout<<"* ";
       }
       cout<<endl;
   }
    return 0;
}