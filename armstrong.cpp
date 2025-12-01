#include<iostream>
using namespace std;
int main(){
    int num,originalnum,sum=0,rem;
    cout<<"enter a number";
    cin>>num;
    originalnum=num;
    while(originalnum==0){
        rem=originalnum%10;
        sum+=rem*rem*rem;
        originalnum/=10;
    }
    if(sum==num){
        cout<<"This is armstrong number";
    }
    else{
        cout<<"This is not armstrong number";
    }
}