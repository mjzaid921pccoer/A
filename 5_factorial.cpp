#include<iostream>
using namespace std;

void factorial(int n){
    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }

    cout<<"factorial of "<<n<<" is "<<fact<<endl;
}

int recursivefactorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*recursivefactorial(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number of which you want factorial"<<endl;
    cin>>n;
    factorial(n);
    cout<<recursivefactorial(n)<<endl;
}