#include<iostream>
#include<vector>
using namespace std ;
void perfect(int arr[],int index, int n , int sum ,int target, vector<int>&temp,vector<vector<int>>&result)
{
    if (index==n){
        if (sum==target){
            result.push_back(temp);
            }
            
        
        return;

        }
   perfect(arr,index+1,n,sum,target ,temp,result); //no

    temp.push_back(arr[index]);
 perfect(arr,index+1,n,sum+arr[index],target,temp,result);
    temp.pop_back();
}
int main(){
    int arr[]={5,2,3,6,10,8};
    vector<int>temp;
    vector<vector<int>> result;
    perfect(arr,0,6,0,10,temp,result);
    for(int i =0;i<result.size();i++){
        for(int j =0; j<result[i].size();j++){
            
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}

}