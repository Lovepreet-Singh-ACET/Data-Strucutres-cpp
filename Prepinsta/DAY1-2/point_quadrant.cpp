#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int x,y;
    cin>>x>>y;

    if(x>0 && y>0)  cout<<"first quadrant";
    else if (x < 0 && y > 0)    cout<<"Second Quadrant";
    else if (x < 0 && y < 0)    cout<< "Third Quadrant";
    else    cout<<"forth quadrant";
}