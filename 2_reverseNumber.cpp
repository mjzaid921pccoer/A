#include<iostream>
using namespace std;

int reverseNumber(int number){
    int reverse=0;
    while(number!=0){
        reverse=reverse*10+number%10;
        number=number/10;
    }
    return reverse;
}

int main(){
    int number;
    cout<<"Enter number to reverse"<<endl;
    cin>>number;
    cout<<"Reverse number is : "<<reverseNumber(number)<<endl;
}