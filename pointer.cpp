#include<iostream>
using namespace std;
int main(){
    int i=6;
    int *p=&i;
    *p=10;
    // cout<<i<<endl;
    // 
    int j;
    int *p1=&j;
  
    // cout<<sizeof(p1);
    // 
    int k;
    int *p2=&k;
    k++;
    // cout<<*p2<<endl;
    // cout<<k<<endl;
    int a=*p;
    a++;
    cout<<*p<<endl;
    cout<<a<<endl;
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<*(a+i)<<" ";
        cout<<endl;
        cout<<i[a]<<" ";
        cout<<*(i+a)<<" ";
        cout<<*a<<" ";
    }
}
