#include<stdio.h>
#include<iostream>
using namespace std;
int sum(int x){
    if(x==0){
        return 0;
    } 
    else 
    {
        return sum(x-1)+x;
    }  
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    else{
        return power(n,p-1)*n;
    }
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else {
        return fact(n-1)*n;
    }
}
int fib(int n){
    if(n==0||n==1){
        return n;

    }
    return fib(n-1)+fib(n-2);
}
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
    
int lcm(int a,int b){
    if(b==0){
        return a;

    }
    retur
}
int main()
{
    int n=10;
    cout<<power(2,5)<<endl;
    
    cout<<sum(10)<<endl;
    cout<<fact(5)<<endl;
    cout<<fib(5)<<endl;
    cout<<gcd(12,15);
    return 0;
}