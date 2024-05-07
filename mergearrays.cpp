#include<iostream>
using namespace std;

void merge(int*p1, int p1Size,int *p2,int p2Size, int*ptr){
    int i=0;
    while(i<p1Size){
        ptr[i]=p1[i];
        i++;
    }
    while(i<p1Size+p2Size){
        ptr[i]=p2[i-p1Size];
        i++;

    }
}

int main(){
    int arr[]={1,2,3,4};
    int arr2[]={5,6,7,8,9};
    int arr3[9];
    merge(arr,4,arr2,5,arr3);
    for(int i=0;i<9;i++){
        cout<<"\t"<<arr3[i];
    }
    return 0;
}