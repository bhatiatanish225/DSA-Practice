#include<iostream>
using namespace std;

void inputarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int ones=0;
    int zeros=0;
    int arr[8];
    inputarray(arr,8);
    printarray(arr,8);
    for(int j=0;j<8;j++){
        if(arr[j]==0){
            zeros++;
            
        }
        else{
            ones++;
            
        }
        
    }
    cout<<endl;
    cout<<"zeros="<<zeros<<endl<<" ones="<<ones<<endl;
}