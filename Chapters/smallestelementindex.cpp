#include<iostream>
using namespace std;
int main(){
    int index=0;
    int arr[5]={3,4,2,1,6};
    for (int i=0;i<=4;i++){
        if (arr[i]<arr[index]){
            index=i;
        }

    }
      cout<<index<<endl;
      for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
      }
    
}