#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;
    //upper left half pyramid
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            cout<<"*";
        }
        for(int k=0;k<(2*i+1);k++){
            cout<<" ";
        }
        for(int l=0;l<rows-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    //lower left pyramid
    for(int i=0;i<rows;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int m=0;m<2*rows-2*i-1;m++){
            cout<<" ";
        }
        for(int n=0;n<i+1;n++){
            cout<<"*";
        }
        cout<<endl;
    }


}