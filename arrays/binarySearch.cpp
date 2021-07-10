#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size;
    while (s <= e)
    {
        int mid = (s+e)/2;
        if (arr[mid] == key){
            return mid;
        }else if (arr[mid] < key){
            s = mid +1;
        }else{
            e = mid -1;
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

    int key = 10;
    cout << binarySearch(array, n, key);

    return 0;
}