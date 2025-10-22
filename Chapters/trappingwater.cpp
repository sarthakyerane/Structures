#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;










int trap(vector<int>& height) {
        int n =height.size();
        int maxleft=0,maxright=0, water=0;
        int maxheight=height[0], index=0;

        //max height of building
        for(int i =0;i<n;i++){
            if(height[i]>maxheight){
                maxheight=height[i];
                index=i;
            }
        }

        //left high  
        for(int i=0;i<index;i++){
            if (maxleft>height[i]){
                water+=maxleft-height[i];
            }

        
        else 
        maxleft=height[i];
        }

        for(int i=n-1;i>index;i--){
            if(maxright>height[i]){
                water+=maxright-height[i];
            }

        
        else 
        maxright=height[i];
        }
        return water;
    }

    int main(){
        int totalwater;
    
        vector<int> hgt = {4,2,0,3,2,5};
       
        totalwater= trap(hgt);
        cout<<totalwater;
        return 0;
        

    }