#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
   virtual void f1(){
cout<<"parent class method";
    }
};
class B:public A{
    public:
    void f1(){
cout<<"child class method";
    }
    void f2(){

    }
};
int main(){
    A *p,obj1;
    B obj2;
    p=&obj2;
    p->f1();
}