#include<iostream>
using namespace std ; 
int main (){
    int piles[]= {3,6,7,11};
    int start=0, end =0 ,mid , ans ;
    int n=4;
    
    int h ;
    cout<<"enter the hours ";
    cin >> h ; 
    long long sum =0; 

    for (int i=0;i<n;i++){
        sum+=piles[i];
        end= max(end , piles[i]);

    }
    start= sum/h;// if start=0 , division by zero will occur , so if (!start) , start=1` 

    while (start<=end){
        mid = start +(end -start)/2 ;
        // mid is the total amount of bananas which can be consumed in one hour , as mid is the one 
        // where we check , like we take mid and take value corresponding to that 

        long long totaltime= 0 ;
        for (int i=0;i<n; i++){
            totaltime+=piles[i]/mid ;
            if (piles[i]%mid){
                totaltime  =totaltime  +1 ;
            }


        }
        if (totaltime<=h){
            ans = mid ; 
            end =mid -1 ; 


        }

        else 
        start= mid +1 ;


    }
    cout<< ans ; 
    
    


}