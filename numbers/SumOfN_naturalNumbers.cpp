#include<iostream>
using namespace std;

int sum(int n){
    return (n * (n+1))/2;
}

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int s = sum(n);
    cout <<s;

    return 0;
}