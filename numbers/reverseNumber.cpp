#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    int flag = 0;
    cin>>n;
    int reversed = 0;

    while (n>0){
        int digit = n%10;
        reversed = reversed*10 + digit;
        n = n/10;
    }

    cout << reversed;


    return 0;
}