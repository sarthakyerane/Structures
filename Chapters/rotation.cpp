#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,6,7};
    int length =7;
    int i;
    for(i=0; i<=length-2 ;i++){
        arr[i+1]=arr[i];
        cout<< arr[i];


    
    }
    arr[length-1]=arr[0];
    cout<< arr[i];
}