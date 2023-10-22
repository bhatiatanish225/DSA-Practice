#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int ans=INT_MAX;
    int arr[5]={5,4,3,2,1};
    for(int i=0;i<5;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    cout<<"minimun element="<<ans;
    return 0;
}