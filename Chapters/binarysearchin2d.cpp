#include<iostream>
#include<vector>
using namespace std;
int search(vector<vector<int>> &matrix, int target){
    int n=matrix.size();
    int m =matrix[0].size();

    int start=0,end=n*m-1;
    
    while(start<=end){
        int mid =start+(end-start)/2;
        int row_index=mid/m;
        int col_index=mid%m;
        if(matrix[row_index][col_index]==target){
            cout<<"the number is found at "<<row_index<<" "<< col_index <<endl;
            return 1;
            
        }
        else if (matrix[row_index][col_index]<target){
            start=mid+1;

        }
        else end=mid-1;
    }
    return 0;    //t comp = log(nm) as full binary search on matrix 
}
int main(){
    vector<vector<int>> matrix={
        {1,3,6},{6,8,10},{13,15,17}
    };
    int target=15;
    search(matrix,target);
    return 0;

}