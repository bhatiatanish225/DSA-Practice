#include<iostream>
#include<cmath>
using namespace std;

int decimal2binary(int n)
{
    int i=0;
int bits;
int binaryno=0;
while(n>0){
    bits=n%2;
    binaryno=bits*pow(10,i++) + binaryno;
    n=n/2;

}
return binaryno;
}
int main(){
    int n;
    cout<<"enter number in decima: ";
    cin>>n;
    cout<<endl;
    int finalresult=decimal2binary(n);
    cout<<finalresult<<endl;

}