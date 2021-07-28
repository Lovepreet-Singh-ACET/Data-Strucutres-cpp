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
    int arr[n+1];
    arr[n] = -1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n == 1){
        cout<<"1";
        return 0;
    }
    
    int ans  = 0;
    int mx = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] > mx && arr[i]> arr[i+1]){
            ans++;
        }
        mx = max(arr[i], mx);
    }
    cout<< ans;
    
    return 0;
}