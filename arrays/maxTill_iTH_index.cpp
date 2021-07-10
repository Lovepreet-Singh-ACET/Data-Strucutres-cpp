#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int array[n];
    
    for(int i =0; i < n; i++){
        cin>>array[i];
    }

    int maximum = INT_MIN;
    for (int i=0; i< n; i++){
        maximum = max(array[i], maximum);
        cout<<maximum<< " ";
    }

    // for(int i =0; i < n; i++){
    //     cout<<array[i]<< " ";
    // }

    return 0;
}