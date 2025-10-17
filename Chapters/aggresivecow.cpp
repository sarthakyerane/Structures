#include<iostream>
#include<math>
using namespace std;
int main(){
    int stall[]={1,4,6,8,10};
    int n = 4, k=3;
    int start=1 , end , mid , ans; 
    end = stall[n-1]-stall[0];
    while (start<=end){
        mid =start+(end-start)/2;
        int count =1 ,pos = stall[0];
        for ( int i =0; i<n ; i++ ){
            if (pos+mid <=stall[i]){
                count++ ; 
                pos=stall[i];

            }}  
            if (count<k ){
                end = mid -1;
            }
            else
            ans =mid  ; 
            start=mid +1;
        }
        cout<< ans ;

    }
