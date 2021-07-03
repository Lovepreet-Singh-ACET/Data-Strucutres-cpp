#include<iostream>
using namespace std;

// Pattern
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int rows;
    cin>>rows;

   for(int i=1; i<=rows; i++){
       for(int j=1; j<=rows; j++){
           if(j <= rows-i){
               cout<<"  ";
           }
           else{
               cout<< "* ";
           }
       }
       cout<<endl;
   }
    return 0;
}