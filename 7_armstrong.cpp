#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrongNumber(int number){
    int temp=number,digits=0,sum=0;
    bool isArmstrong;
    while(temp!=0){
        digits++;
        temp=temp/10;
    }
    //cout<<digits<<"digits in "<<number<<endl;

    temp=number;
    while(temp!=0){
        int reminder=temp%10;
        sum=sum+pow(reminder,digits);
        temp=temp/10;
    }
    
    if(sum==number){
        isArmstrong=true;
    }else{
        isArmstrong=false;
    }

    return isArmstrong;
}

int main(){
    int num;
    
    cout<<"Enter the number"<<endl;
    cin>>num;

    if(isArmstrongNumber(num)){
        cout<<num<<" is Armstrong Number"<<endl;
    }

    int limit;
    cout<<"Enter the limit till which you need Armstrong series printed"<<endl;
    cin>>limit;

    for(int i=1;i<=limit;i++){
        if(isArmstrongNumber(i)){
            cout<<i<<"\t";
        }        
    }
    cout<<endl;
}