#include<iostream>
using namespace std;
int main(){
    for (int i=1;i<=6;i++){
        if(i%4==0)
            continue;  // the code will directly jump from here again to top and will not execute the bottm things 
        cout<<i;
    }




}