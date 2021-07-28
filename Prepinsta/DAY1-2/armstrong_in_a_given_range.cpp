#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >>a>> b;

    for(int i = a; i <b+1; i++){
        int s = 0;
        int temp = i;
        while (temp > 0){
            int t = temp%10;
            s = s + t*t*t;
            temp = (int) temp/10;
        }
        if (i == s) cout<< i << " ";
    } 
}