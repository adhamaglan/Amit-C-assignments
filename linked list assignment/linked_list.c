#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

NODE * create_node (int data){
    NODE * n1 = (NODE*)malloc(sizeof(NODE));
    n1->data=data;
    n1->next=NULL;
    return n1;
}

void print_list (NODE * head){
while (head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}

NODE * Insert_at_begin (int data , NODE * head){
    NODE * new = create_node(data);
    new->next=head;
    head=new;
    return head;
}

NODE * Insert_at_end (int data , NODE * head){
    NODE * new = create_node(data);
    NODE * temp= head;
    while(temp->next!=NULL){
            temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    return head;
}

NODE* Insert_at (int data , NODE * head , int index){
    if(index<0){
        printf("Index %d out of bounds!\n", index);
        return head;
    }
    if(index==0){
        return Insert_at_begin(data,head);
    }
    if(head==NULL){
        return NULL;
    }
    NODE * temp= head;
    for (int i=0;i<index-1&&temp!=NULL;i++){
        temp=temp->next;           
    }
    if (temp == NULL){
        printf("Index %d out of bounds!\n", index);
        return head;
    }
    NODE * new = create_node(data);
    new->next=temp->next;          
    temp->next=new;                
    return head;
}

NODE * delete_at_begin (NODE * head){
    if(head==NULL){
        return NULL;
    }
    NODE * temp=head;              
    head=head->next;               
    free(temp);                    
    return head;
}

NODE * delete_at_end (NODE * head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        free(head);
        return NULL;
    }
    NODE * temp=head;
    while(temp->next->next!=NULL){ 
            temp=temp->next;      
    }
    free(temp->next);             
    temp->next=NULL;               
    return head;
}

NODE * delete_at (NODE * head , int index){
    if(head==NULL){
        return NULL;
    }
    if(index<0){
        printf("Index %d out of bounds!\n", index);
        return head;
    }
    if(index==0){
        return delete_at_begin(head);
    }
    NODE * temp=head;
    for (int i=0;i<index-1&&temp!=NULL;i++){
        temp=temp->next;          
    }
    if(temp==NULL||temp->next==NULL){
        printf("Index %d out of bounds!\n", index);
        return head;
    }
    NODE * del=temp->next;        
    temp->next=del->next;           
    free(del);                     
    return head;
}