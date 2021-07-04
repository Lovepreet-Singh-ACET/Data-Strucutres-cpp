#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    if(n == 1){
        cout << 0;
    }
    if(n == 2){
        cout<<1;
    }
    if (n>2){
        int n1=0, n2=1, n3=0;
        cout << n1 << " "<< n2 << " ";
        for( int i=3; i<=n; i++){
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
    }

    return 0;
}