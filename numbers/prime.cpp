#include<iostream>
#include<cmath>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    int flag = 0;
    cin>>n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"Non-Prime";
            flag =1;
            break;
        }
    }

    if(flag == 0){
        cout<<"Prime";
    }

    return 0;
}