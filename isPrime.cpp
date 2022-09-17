#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, i = 2, flag = 1;
    bool ans = false;
    cin >> n;
    while (i <= sqrt(n)){
        if (n % i == 0){
            flag = 0;
            break;
        }
        i++;
    }
    if (flag)
    ans = true;
    if (n<2)
    ans = false;
    if(ans){
        cout << "Prime" << endl;
    }else{
        cout << "Not a prime" << endl;
    }
    return 0;
}