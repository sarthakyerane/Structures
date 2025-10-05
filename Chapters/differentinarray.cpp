#include<iostream>
#include<math.h>
using namespace std ;
int main(){
     int result=0;
     int nums[]={1,2,3,3,2};
        
    int n=5;
    for (int i = 0 ; i<n;i++){
            result =result ^ nums[i];


        }
        cout<<result;;
}