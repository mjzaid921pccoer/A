#include<iostream>
using namespace std;

bool isprimeNumber(int number){
    bool isPrime=true;

    if(number==0 || number==1){
        isPrime=false;
    }else{
        for(int i=2;i<=number/2;i++){
            if(number%i==0){
                isPrime=false;
                break;
            }
        }
    }

    return isPrime;
}

void primeuptoRange(int range){
    for(int number=2;number<=range;number++){
        if(isprimeNumber(number)){
            cout<<number<<"\t";
        }
    }
}

int main(){
    int range;
    cout<<"enter the limit uptill you want prime numbers"<<endl;
    cin>>range;

    primeuptoRange(range);
}