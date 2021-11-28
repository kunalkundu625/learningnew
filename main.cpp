/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int modify(int arr[],int n){
  int prev=arr[0];
  arr[0]=arr[0]*arr[1];
  for(int i=1;i<n-1;i++){
    int current=arr[i];
    arr[i]=prev*arr[i+1];
    prev=current;
  }
  arr[n-1]=prev*arr[n-1];
  
}
int printaaarray(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("  %d",arr[i]);
  }
}

int main()
{
    int  arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    modify(arr,n);
    printaaarray(arr,n);
}
