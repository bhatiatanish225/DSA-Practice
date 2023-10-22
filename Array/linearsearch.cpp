#include<iostream>
using namespace std;

int main(){
    int arr[6];
    int target;
    cout<<" enter the elements of an array:"<<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    cout<<"enter the target element : ";
    cin>>target;
int j=0;
int flag=0;
    while(j<6){
        if(arr[j]==target){
            flag=1;
            cout<<"elememt found and the index of that element is : "<<j<<endl;
            break;
        }
        else{
            j++;
        }
    }
    if(flag==0){
        cout<<"element not found";
    }
    return 0;

}