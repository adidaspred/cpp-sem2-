#include<iostream>
#include<cmath>

using namespace std;


double series(int n){
    int sign=1;
    double sum=0;
    double term;
    for(int i=1;i<=n;i++){
        term=sign*(1/pow(i,i));
        sum+=term;
        sign*=-1;
    }
    return sum;
}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<"sum of the first "<<n<<" term is "<<series(n)<<endl;
    return 0;
}

