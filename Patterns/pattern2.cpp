#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JDUGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int rows, cols;
    cin>>rows>>cols;

//    for(int i=1; i<=rows; i++){
//        for(int j=1; j<=cols; j++){
//            if(i == 1 || i == rows){
//                cout<<"* ";
//            }
//            else{
//                if (j == 1 || j == cols){
//                    cout << "* ";
//                }else
//                {
//                    cout<< "  ";
//                }
//            }

//        }
//        cout<<endl;
//    }


    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if(i == 1 || j==1 || i ==rows || j== cols){
                cout<< "* ";
            }else{
                cout << "  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}