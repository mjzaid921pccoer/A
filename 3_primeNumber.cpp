#include<iostream>
using namespace std;

void primeNumber(int number){
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

    if(isPrime){
        cout<<number<<" is Prime Number"<<endl;
    }else{
        cout<<number<<" is not Prime Number"<<endl;
    }
}

int main(){
    int number;
    
    cout<<"Enter Number"<<endl;
    cin>>number;

    primeNumber(number);


}