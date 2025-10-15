#include<iostream>
using namespace std ;
int findpages(int arr[],int n ,int m ){
    int start=0,mid ,ans=-1,end=0;
    for (int i =0;i<n;i++){
        start= max(start,arr[i]);
        end+=arr[i];

    }
    while (start<=end){
        mid =start+(end-start)/2;
        int pages  = 0, count =1 ;
        for(int i=0; i<n;i++){
            pages+=arr[i];
            if (pages>mid){
                count++ ;
                pages = arr[i]; 

            }}
            if (count<=m ){
                ans=mid ; 
                end =mid -1 ;

            }
            else 
            start = mid+1; 


        }
        return ans ;
    }





int main (){
    int arr[]= {6,12,67,99,103};
    int op= findpages(arr,5,3);
    cout<< op;
return 0;

}