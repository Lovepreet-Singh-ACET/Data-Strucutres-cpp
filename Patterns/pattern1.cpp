#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int rows, cols;
    cin>>rows>>cols;

   for(int i=0; i<rows; i++){
       for(int j=0; j<cols; j++){
           cout<<"* ";
       }
       cout<<endl;
   }
    return 0;
}