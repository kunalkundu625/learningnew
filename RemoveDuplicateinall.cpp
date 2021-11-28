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

void Removeduplicate(struct Node *p){
    struct Node *q=first->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;

        }
        else{
        p->next=q->next;
        delete q;
        q=p->next;
        }
    }
}



void Display(struct Node *p){
    
    if(p!=NULL){
        cout<<p->data<<" ";  //this is using Recursion method
        Display(p=p->next);
    }
}



int main(){
    
     int A[]={10,20,40,40,60,60,80,80,100};
     create(A,10);
     Removeduplicate(first);
     Display(first);
    
   
   
        
    

   
}