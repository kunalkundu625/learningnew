#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,10,5,18,3,12,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int> st;
    for(int i=0;i<n;i++){
        
        while(!st.empty() && st.top()>arr[i]){
                st.pop();
        }
        if(st.empty()){
                cout<<-1<<" ";
                
        }
        else{ 
                int a=st.top();
                cout<<a;
        }
        st.push(arr[i]);
    }

    return 0;
}
