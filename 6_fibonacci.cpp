#include<iostream>
using namespace std;

void fibonacci(int limit){
    int a=0,b=1,sum=0;
    cout<<a<<'\t'<<b<<'\t';
    sum=a+b;
    while(sum<=limit){
        cout<<sum<<'\t';
        a=b;
        b=sum;
        sum=a+b;
    }
    cout<<endl;
}

int main(){
    int limit;
    cout<<"Enter the number upto which fibonacci series want to print"<<endl;
    cin>>limit;

    fibonacci(limit);
}