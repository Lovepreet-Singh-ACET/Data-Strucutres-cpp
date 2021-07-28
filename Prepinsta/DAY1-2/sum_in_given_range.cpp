#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >>b;

    int sum=0;
    for(int i =a; i < b+1; i++){
        sum += i;
    }
    cout << sum;

    sum = (b*(b+1))/2 - (a*(a-1))/2;
    cout<<endl<<sum;

    return 0;
}