#include<iostream>
using namespace std;
 int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    for(int i=0;i<5;i++){
        brr[i]=arr[5-1-i];
    }
    for(int j=0;j<5;j++){
        cout<<brr[j]<<" ";
    }
    return 0;
 }