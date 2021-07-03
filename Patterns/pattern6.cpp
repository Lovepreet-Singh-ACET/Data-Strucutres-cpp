#include<iostream>
using namespace std;

// Pattern
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int rows;
    cin>>rows;

    int value = 1;
   for(int i=1; i<=rows; i++){
       for(int j=1; j<=i; j++){
           cout << value << " ";
           value++;
       }
       cout<<endl;
   }
    return 0;
}