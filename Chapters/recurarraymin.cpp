#include<iostream>
using namespace std ;

int minele(int arr[],int index , int n ){
    if (index==n-1)
    return arr[index];

    return min(arr[index],minele(arr,index+1,n));
}

int main(){
    int arr[4]={4,6,2,8};
    int m =minele(arr,0,4);
    cout<<m;
    return 0;
}