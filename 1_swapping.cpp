#include<iostream>
using namespace std;

void fun1(int a,int b){
    cout<<"BEFORE\na="<<a<<" ,b="<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"AFTER\na="<<a<<" ,b="<<b<<endl;
}

void fun2(int a,int b){
    cout<<"BEFORE\na="<<a<<" ,b="<<b<<endl;
    int temp;

    temp=a;
    a=b;
    b=temp;

    cout<<"AFTER\na="<<a<<" ,b="<<b<<endl;
}

int main(){
    int a,b;
    cout<<"Enter a & b values"<<endl;
    cin>>a>>b;
    
    cout<<"Without 3rd variable"<<endl;
    fun1(a,b);

    cout<<"Enter a & b values"<<endl;
    cin>>a>>b;

    cout<<"With 3rd variable"<<endl;
    fun2(a,b);
}
