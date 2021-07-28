#include<bits/stdc++.h>
using namespace std;
/*
        Number of subarrays = (n*(n+1))/2
*/
int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}