#include<iostream>
using namespace std;

int gcd(int a , int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    int a, b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"the gcd of a and b is"<<"\t"<<gcd(a,b);
    return 0;
}