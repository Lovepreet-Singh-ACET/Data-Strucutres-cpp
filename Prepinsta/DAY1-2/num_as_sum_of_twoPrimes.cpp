#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    int flag = 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0) return true;
    return false;
}

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >>n;
    int flag=0;
    for(int i = 0; i<=n/2; i++){
        if(is_prime(i)){
            if(is_prime(n-i)){
                cout<< i << " "<< n-i<<endl;
                flag = 1;
            }
        }
    }
    if(flag==0) cout << "can't display as sum of two primes";
    return 0;
}