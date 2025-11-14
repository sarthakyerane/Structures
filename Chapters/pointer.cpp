#include<iostream>
using namespace std ;
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    int first=10,second=20;
    swap(&first,&second);
    cout<<first<<"  "<<second;
    return 0;
}