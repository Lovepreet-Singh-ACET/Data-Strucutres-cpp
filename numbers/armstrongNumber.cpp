#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int num;
    int original = n;
    while (n>0){
        int digit = n%10;
        num += digit*digit*digit;
        n = n/10;
    }

    if (num == original){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }

    return 0;
}