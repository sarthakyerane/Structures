#include<iostream>
using namespace std ;
int main(){
    int start =0;
    int main, n = 9 ;
    int end = n-1,num;
    cout<<"enter the number to be found ";
    cin >>num; 
    int arr[]={1,3,4,6,7,9,10,34,67};
    for (int i =0; i <n; i++){
        int mid = (start +end)/2 ; 
        if (num==arr[mid]){
            cout<<"number is found at"<<mid <<endl;
            break;

        }
        else if (num>arr[mid])
        {
            start = mid +1;
        }
        else 
        end =mid -1 ; 
        
    }
    return -1;
    for (int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }



}