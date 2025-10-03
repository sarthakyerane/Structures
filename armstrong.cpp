#include<iostream>
#include<math.h>
using namespace std;
int countdigits(int num){
    int count=0;
    while(num){
    
        count++;
        num/=10;

    }
    return count;}

bool armstrong(int num,int digits){
    int n =num, rem,ans=0 ; 
    while(n){
    rem=n%10;
    n/=10;
    rem = pow (rem,digits);
    ans=ans+rem;
    


}    
if(ans==num){
cout<<"its armstrong"<<endl;
return 1;}
else{ 
cout<<"its not armstrong "<<endl;
return 0;}
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    int digits=countdigits(number);
    bool armg=armstrong(number,digits);
    cout<< digits<<endl;
    cout<<armg;
    return 0;
}