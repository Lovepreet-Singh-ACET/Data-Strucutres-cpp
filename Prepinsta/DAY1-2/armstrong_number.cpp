// armstrong number is that number where the sum of cubes of individual digits of a number is equal to the original number   153 = 1^3 + 5^3 + 3^3

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;

    int temp = n;

    int s = 0;
    while (temp > 0){
        int t = temp%10;
        s = s + t*t*t;
        temp = (int) temp/10;
    }

    if(n == s) cout<<"Armstrong";
    else cout<<"Not Armstrong";
}