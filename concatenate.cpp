#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL;
 void createfirst(int A[],int n){
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
  void createsecond(int B[],int n){
     int i;
     struct Node *t,*last;
     second=(struct Node *)malloc(sizeof(struct Node));
     second->data=B[0];
     second->next=NULL;
     last=second;
     for(int i=1;i<n;i++){
         t=(struct Node *)malloc(sizeof(struct Node));
         t->data=B[i];
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
void concatenate(struct Node *p){
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=second;
}

void Display(struct Node *p){
    
    if(p!=NULL){
        cout<<p->data<<" ";  //this is using Recursion method
        Display(p=p->next);
    }
}

int main(){
    
     int A[]={10,20,30,40,50,60,70,80,90,100};
     int B[]={11,22,33,44,55,66,77,88,99,110};
     createfirst(A,10);
     createsecond(B,10);
    // // ReversingUsingslidingpointers();
    //  Display(first);
    //  Reverse(NULL,first);
    concatenate(first);
    Display(first);
   
   
        
    

   
}