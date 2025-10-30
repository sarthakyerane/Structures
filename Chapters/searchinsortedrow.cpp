#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int search(vector<vector<int>>&matrix,int target){
    int m=matrix.size();
    int n=matrix[0].size();
    
    for(int i =0;i<m;i++){
        int start=0;
        int end=n-1;
        while(start<=end){
        int mid =start+(end-start)/2;
        
            if(matrix[i][mid]==target){
                cout<<"the element is found ";
                return 1 ;
            }
            else if (matrix[i][mid]<target){
                start=mid+1;

            }
            else end=mid-1;
        }
    }
    cout<<">not found ";
    return 0;




}
int main(){
    vector<vector<int>> matrix={
        {4,8,15,25,60},{18,22,26,42,80},{36,40,45,68,104},{48,50,72,83,130},{70,99,114,128,170}
    };
    int target=83;
    search(matrix,target);
    return 0;
}