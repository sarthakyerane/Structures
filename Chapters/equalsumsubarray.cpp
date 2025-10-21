#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool equalsum(vector<int>arr ){
    int totalsum=0, prefix=0, n=arr.size();
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }
    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        if(totalsum==2*prefix)
        return 1;
    
    
    
    

    
}
return 0 ;
}
int main(){
    int n ;
    cin >> n ; 
    vector<int>nums(n);
    cout<<"enter elements in array";
    for(int i=0;i<n;i++){
        cin>>nums[i];

    }
    cout<<equalsum(nums);
}
