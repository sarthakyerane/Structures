#include<iostream>
#include<vector>
using namespace std;
void wave(int arr1[][4], int row,int col){
     for (int j =0; j<col;j++){
        if (j%2==0){
            for (int i=0;i<row;i++){
                cout<<arr1[i][j]<<"  ";
            }}
            else
            for(int i =row-1;i>=0;i--){
                cout<<arr1[i][j]<<"  ";
            }
        }
     }

int main(){
    int arr1[3][4]={2,3,4,5,6,7,8,9,0,1,2,4};
    
    wave(arr1,3,4);
     //wave form means even col top to down print and odd down to up 
    


}