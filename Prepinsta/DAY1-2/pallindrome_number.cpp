#include<bits/stdc++.h>
using namespace std;

int rev(int n){
    int re =0;

    while(n>0){
        int temp = n%10;
        re = re*10 + temp;
        n = (int)n/10;
    }
    return re;
}

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int rev_n = rev(n);
    if(n == rev_n){
        cout<< "palindrome number";
    }
    else    cout << "Not pallindrome";
}