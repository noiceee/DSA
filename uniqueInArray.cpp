#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<"Enter size"<<endl;
    int n; cin>>n;
    int* arr = new int[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int* ans = new int[n];
    int current = arr[0], currFrequency = 0;
    for(int i=1; i<n; i++){
        if(arr[i] == current){
            currFrequency++;
            continue;
        }else{
            if(currFrequency == 0){
                cout<<current<<endl;
                current = arr[i];
            }else{
                current = arr[i];
                currFrequency = 0;
            }
        }
    }
}