#include <iostream>

using namespace std;

int main(){
    // int a = 2, b = a+1;
    // if((a==2) == b){
    //     cout<<a;
    // }else{
    //     cout<<a+1;
    // }
    // int i=3;
    // while (i--)
    // {
    //     int j = i;
    //     cout<<&j<<endl;
    // }
    // for(int i=0; i<5; i++){
    //     for(int j=1; j<=i+1; j++){
    //         cout<<i+j;
    //     }
    //     cout<<"\n";
    // }
    // char c = 'a';
    // cout<<(char)(c+1);
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b;
    cout << a;
}