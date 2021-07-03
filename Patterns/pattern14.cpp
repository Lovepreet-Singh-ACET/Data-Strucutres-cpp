#include<iostream>
using namespace std;

// Pattern


int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

   for(int i=1; i<=3; i++){
       for(int j=1; j<=n; j++){
           if((i+j)%4==0 || (i==2 && j%4==0)){
               cout<<"* ";
           }
           else{
               cout<<"  ";
           }
        }
       
       cout<<endl;
   }
    return 0;
}