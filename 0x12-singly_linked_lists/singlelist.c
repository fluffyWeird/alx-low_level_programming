#include <stdio.h>
#include <stdlib.h>

// typedef char charina[10];

typedef struct Node Node;
struct Node{
    int x;
    Node *next;
};

int main(){
    Node root;
    root.x=10;

    root.next = malloc(sizeof(Node));
    root.next->x=11;
    root.next->next=NULL;

    root.next->next= malloc(sizeof(Node));
    root.next->next->x=12;
    root.next->next->next=NULL;
    printf("root.x = %d", root.next->next->x);
    Node* curr= &root;

    /**Itterating using Loops I freaking love it*/
    while (curr != NULL){
         if(curr->next==NULL){
            printf("%d", curr->x);
        }
        curr=curr->next;
       
    }
    for(Node* cury=&root; cury != NULL; cury= cury->next){
        printf("%d\n", cury->x);
    }
 

free(root.next->next);
free(root.next);
}

