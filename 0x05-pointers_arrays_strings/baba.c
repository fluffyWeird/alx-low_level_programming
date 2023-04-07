// size_t print_list(const list_t *h){

// }

#include <stdio.h>
#include <stdlib.h>

typedef struct guzo{
    char *place;
    char *leavingTime;
    struct guzo *next;
}guzo;
int main(){
    guzo debub={"Arbaminch", "March", NULL};
    guzo amara={"Gonder", "April", NULL};
    guzo harer={"sebategna","June", NULL};

    debub.next=&amara;
    amara.next=&harer;

    display(guzo guzo);
}