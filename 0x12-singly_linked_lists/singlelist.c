#include <stdio.h>
#include <stdlib.h>

// typedef char charina[10];
/*
typedef struct Node Node;

typedef struct Node{
    Node *next;
    int x;
}Node;

void insert_end(Node **root, int value){
    Node *newLink = malloc(sizeof(Node));
    if(newLink == NULL){
        exit(1);
    }
    newLink ->next = NULL;
    newLink->x = value;

    Node *chk = *root;
    while ( chk->next!=NULL){
         chk=chk -> next;
    }
    
    chk->next= newLink;

}
int main(){
    Node *root = malloc(sizeof("Node"));
    root->next = NULL;
    root->x= 1;

    insert_end(&root, 2);
    insert_end(&root, 3);
    if(root==NULL){
        exit(2);
    }
    Node *chk= root;
    while(chk!=NULL){
        printf("%d \n", chk->x);
        chk = chk -> next;
    }
    
}


*/
/*Attempt 2 
typedef struct Node Node;
typedef struct Node{
  Node *next;
  int x;
}Node;

void insert_newNode(Node **root, int value){
    Node *newNode= malloc(sizeof(Node));
    if(newNode==NULL){
        exit(1);
    }

    newNode->next = NULL;
    newNode->x = value;

    Node *curr =  *root;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next=newNode;

}
int main(){
    Node *root = malloc(sizeof(Node));
    if(root==NULL){
        exit(2);
    }
    
    root->x=1;
    root->next=NULL;

    insert_newNode(&root, 2);
    insert_newNode(&root, 3);
    
    Node *cur = root;
    int count=0;
    while (cur != NULL){
        printf("%d %d\n", cur->x, count);
        cur = cur -> next;
        count ++;
    }
}
*/
/*Attempt 3*/

typedef struct Node Node;

typedef struct Node{
    Node *next;
    int x;
}Node;

void insert_newNode(Node **root, int value){
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL){
        exit (1);
    }
    newNode -> next = NULL; 
    newNode -> x = value;

    Node *cur = *root;
    while(cur->next != NULL){
        cur= cur->next;
    }

    cur->next=newNode;

}
int main(){

    Node *root=malloc(sizeof(Node));
    if(root==NULL){
        exit(2);
    }
    root -> next = NULL;
    root->x = 0;
    
    printf("%d", root->x);
    insert_newNode(&root, 1  );
    insert_newNode(&root, 2);

    Node *cur = root;
    while (cur -> next){
        cur = cur -> next;
        printf("%d", cur->x);
    }



}