#include<iostream>
using namespace std;

void duplicate(int*ptr, int size){
    int sum=0;
    for(int i=0; i<size;i++){
        for(int j=0;j<i; j++){
            if(ptr[i]==ptr[j]){
                sum++;
                break;
            }
        }    
            if(sum==0){
                cout<<ptr[i]<<" ";

            }
            else{
                sum=0;
            }
        }
    }


int main(){
    int arr[]={1,2,3,4,5,6,6,7,9,9};
    duplicate(arr,sizeof(arr)/4);
    return 0;
}