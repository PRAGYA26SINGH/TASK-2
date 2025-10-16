
#include<iostream>
using namespace std;

int main(){
    int n ,sum=0 ,rem;
    cout<<"enter an integer n = " ;
    cin>>n;
    while (n>0){ 
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"the sum of digits of integer n ="<<sum;
    return 0;
}