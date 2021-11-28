#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
 void create(int A[],int n){
     int i;
     struct Node *t,*last;
     first=(struct Node *)malloc(sizeof(struct Node));
     first->data=A[0];
     first->next=NULL;
     last=first;
     for(int i=1;i<n;i++){
         t=(struct Node *)malloc(sizeof(struct Node));
         t->data=A[i];
           t->next=NULL;
           last->next=t;
           last=t;
     }
 }

bool CheckIfLLIsSortedOrNot(struct Node *p){
    int x=-32768;
    while(p!=NULL){
        if(p->data<x){
            return false;
        }
    x=p->data;
    p=p->next;
    }
    return true;

}



int main(){
    
     int A[]={10,20,30,40,150,60,70,80,90,100};
     create(A,10);
     cout<<CheckIfLLIsSortedOrNot(first);
    
   
   
        
    

   
}