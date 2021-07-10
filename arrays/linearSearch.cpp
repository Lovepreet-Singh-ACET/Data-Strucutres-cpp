#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i=0; i< size; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

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

    int key = 100;
    cout << linearSearch(array, n, key);

    return 0;
}