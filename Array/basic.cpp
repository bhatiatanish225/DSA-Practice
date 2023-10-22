#include<iostream>
using namespace std;


int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<" printing the array with each value double"<<endl;

    for(int j=0;j<10;j++){
        cout<<(2*arr[j])<<" ";
    }
    return 0;
}