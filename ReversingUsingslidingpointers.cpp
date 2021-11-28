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

void ReversingUsingslidingpointers(){
    struct Node *p=first;
    struct Node *q=NULL;
    struct Node *r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void Reverse( struct Node *q,struct Node *p){
    if(p!=NULL){
        Reverse(p,p->next);
        p->next=q;

    }
    else{
        first=q;
    }
}


void Display(struct Node *p){
    
    if(p!=NULL){
        cout<<p->data<<" ";  //this is using Recursion method
        Display(p=p->next);
    }
}

int main(){
    
     int A[]={10,20,30,40,50,60,70,80,90,110};
     create(A,10);
    // // ReversingUsingslidingpointers();
    //  Display(first);
     Reverse(NULL,first);
    Display(first);
   
   
        
    

   
}