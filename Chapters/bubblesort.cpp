#include<iostream>
using namespace std ;
int main(){
    bool swapped =0;
    int arr[]={1,2,13,5,4};
    int n =5;
    for (int i = n-2; i>=0;i--){
        bool swapped =0;

        for (int j=0;j<=i;j++){

            if( arr[j]>arr[j+1]){
            swap (arr[j],arr[j+1]);
            swapped=1;
        }}
        if(swapped ==0)
        break;
    }


for (int i =0; i<5;i++){
    cout<<arr[i]<<" ";
}
}