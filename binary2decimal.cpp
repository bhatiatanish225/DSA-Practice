#include<iostream>
#include<cmath>
using namespace std;

int binary2decimal(int n){
    int decimalno=0;
    int i=0;
    
    while(n>0){
        int eachbit=n%10;
        decimalno=decimalno+eachbit*pow(2,i);
        n=n/10;
        i++;


    }
    return decimalno;
}
int main(){
    int n;
    cin>>n;
    cout<<binary2decimal(n);
    return 0;
}
