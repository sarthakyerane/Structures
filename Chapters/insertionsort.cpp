#include<iostream>
using namespace std ;
int main(){
    int arr [1000];
    int n ;
    cout<<"enter the size ";
    cin >>n;
    cout<<"enter the elements";

    for (int i=0;i<n;i++){
        cin>> arr[i];}

    for(int i =1;i<n;i++){// we are performing for which all elements

        for (int j=i;j>0;j--){ // we come from front to back in insertion 

            if (arr[j]<arr[j-1])   
            swap (arr[j],arr[j-1]);
            else
             break;
        }
    }

for (int i=0;i<n;i++){
 
    cout<< arr[i]<<" ";
}
}