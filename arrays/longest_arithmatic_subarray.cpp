#include<bits/stdc++.h>
using namespace std;
/*
       
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
    
    int ans =2;
    int curr = 2;
    int pd = arr[1] - arr[0];
    int j = 2;

    while(j<n){
        if (pd == arr[j] - arr[j-1]){
            curr++;
        }else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(curr, ans);

        j++;
    }
    cout<< ans;
    return 0;
}