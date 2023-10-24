#include<iostream>
using namespace std;

    int unique_element(int arr[], int size){
        int ans=0;
        for(int i=0;i<size;i++){
            ans=ans^arr[i];
        }
        return ans;
    }
int main(){
int arr[7]={1,1,2,2,3,3,5};
int size=7;
int output=unique_element(arr,size);
cout<<"ans= "<<output;
return 0;
}