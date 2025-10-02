#include<iostream>
using namespace std;
int main(){
    int row,col;

    for(row=1;row<=5;row++){
        for (col=1;col<=row;col++){
            // cout<<"*"; //stars in triangle form 
            
            //cout<<col; //priting 1, 12 ,123,1234,12345
            
            cout<<row; // priting 1,22,333,4444,55555
 
        }
        cout<<endl;

    }


    
}