#include<iostream>
#include<limits.h>
using namespace std;


void rowmaxsum(int arr1[][4],int row, int col ){  //row which has maximum sum
    int sum = INT_MIN;
    int index = -1;
    for (int i = 0; i < row; i++){
        int total = 0;
        for (int j = 0; j < col; j++){
            total += arr1[i][j];
        }
        // compare after finishing the row
        if (total > sum){
            sum = total;
            index = i;
        }
    }
    cout << "row index: " << index << "  (sum=" << sum << ")" << endl;

}
int main(){
    int arr1[3][4]={1,3,4,5,6,7,8,9,0,1,3,2};
    int arr2[3][4]={1,31,4,5,6,7,8,9,0,1,3,2};
    // int ans[3][4];
    // for (int row=0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         ans[row][col]=arr1[row][col]+arr2[row][col];

    //     }

    // }
    // for (int row=0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cout<<ans[row][col]<<"  ";
    //     }
    //     cout<<endl;

    rowmaxsum(arr1,3,4);
    return 0;
}