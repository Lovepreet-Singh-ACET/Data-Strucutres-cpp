#include<bits/stdc++.h>
using namespace std;

int sum_factors(int n){
    int f_sum = 1;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            f_sum = f_sum + i;
        }
    }
    return f_sum;
}
int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int first, second;
    cin>>first>>second;

    int sum1 = sum_factors(first);
    int sum2 = sum_factors(second);
    if ((sum1==second) && (sum2 == first)) cout <<"Friendly pair";
    else cout << "Not Friendly";
    return 0;

}