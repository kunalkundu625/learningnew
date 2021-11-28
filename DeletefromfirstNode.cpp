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
int Delete(int position){
    struct Node *q,*p;
    int x=-1;
    if(position<1){
        return -1;
    }
    if(position==1){
        x=first->data;
        p=first;
        first=first->next;
        delete p;

    }
    else{
        p=first;
        q=NULL;
        for(int i=0;i<position-1&&p;i++){
            q=p;
            p=p->next;

        }
        if(p){
            q->next=p->next;
            x=p->data;
            delete p;
        }


    }
    return x;

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
     cout<<Delete(0)<<endl;
     Display(first);
   
   
        
    

   
}