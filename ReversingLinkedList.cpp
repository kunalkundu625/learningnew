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

void ReversingLinks(struct Node *p){
    int i=0;
    int B[10];
    while(p!=NULL){
        B[i]=p->data;
        p=p->next;
        i++;

    }
    cout<<i<<endl;
    p=first,i--;

    while(p!=NULL){
        p->data=B[i--];
        p=p->next;
    }
}



void Display(struct Node *p){
    
    if(p!=NULL){
        cout<<p->data<<" ";  //this is using Recursion method
        Display(p=p->next);
    }
}



int main(){
    
     int A[]={10,20,30,40,50,60,70,80,90,100};
     create(A,10);
     ReversingLinks(first);
     Display(first);
    
   
   
        
    

   
}