#include<iostream>
using namespace std;

bool PyTriplet(int x, int y, int z){
    int a, b, c;
    a = max(x, max(y,z));
    if(a == x ){
        b = y;
        c = z;
    }else if(a == y){
        b = x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    if(a*a == b*b + c*c) return true;
    else return false;
}

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b, c;
    cin >> a >> b >> c;
    bool ans = PyTriplet(a,b,c);
    cout<< ans;
    

    return 0;
}