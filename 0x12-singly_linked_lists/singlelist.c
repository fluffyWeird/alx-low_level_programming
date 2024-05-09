#include <stdio.h>
#include <stdlib.h>

// typedef char charina[10];
typedef struct Node{
    int x;
    struct Node *next;
}Node;
int main(){
 Node root, element2;
 root.x=10;
//  root.next= &element2;
//  element2.x=11;
//  element2.next=NULL;
// printf("%d", element2.x)

/**So here I understood how the root thing is called*/
// root.next=malloc(sizeof(Node));
// root.next -> x=11;
// root.next -> next=NULL;
// printf("%d", root.next->x);

}