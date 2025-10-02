#include<iostream>
using namespace std;
 int main(){
    int row,col; 
    for (row=5; row>=1; row--){
        char value='*';
       //1st method //for(col=1;col<=5-(row-1) ;col++){   //we have to find the pattern , now decreasing starts from 5 to 1 is that 5-(row-1)
            
       for(col=1;col<=row;col++){
        cout<<"*";
       }
       
       
       cout<<"*";

        }
        cout<<endl;
    }
 }