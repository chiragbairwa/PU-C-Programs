//LL insert at beginning
//LL insert at End
//Sorting a Linked List

#include <stdio.h>

struct LL {
    int data;
    struct LL* next;
};
struct LL* head = NULL;

void insertAtBeg(){

    //Create A Node
    struct LL* node = (struct LL*) malloc( sizeof(struct LL) );
    node->next = head;
    printf("\nEnter Data :  ");
    scanf("%d", &(node->data) );

    head = node;
}

void insertAtEnd(){
    struct LL* iterate = head;
    //Create A Node
    struct LL* node = (struct LL*) malloc( sizeof(struct LL) );
    node->next = NULL;
    printf("\nEnter Data :  ");
    scanf("%d", &(node->data) );

    // Check if the list is empty
    if(iterate == NULL){
        head = node;
    }
    else {
        //Iterate to the end of list
        while( iterate->next != NULL)
            iterate = iterate->next;

        //Add the new node in the end of the list.
        iterate->next = node;
    }

}

void sortLL(){
    struct LL* i = head;
    struct LL* j = head;

    for( ; i != NULL; i = i->next){
        for(j = i ; j != NULL; j = j->next){

            // Swapping
            if(i->data > j->data){
                i->data = i->data + j->data ;
                j->data = i->data - j->data ;
                i->data = i->data - j->data;
            }
        }
    }
}

void display(){
    struct LL* iterate = head;

    if(iterate  == NULL){
        printf("\nLinked List is empty.\n");
        return;
    }
    while( iterate != NULL) {
        printf("%d ", iterate->data );
        iterate = iterate->next;
    }
}
void menu(){
    int i;

    flag:
    system("cls");
    display:

    printf("\n+++++++++++++++++ \n");
    printf("\n1. Insert at Beginning : \n");
    printf("2. Insert at Ending : \n");
    printf("3. Sort the list : \n");
    printf("4. Display list : \n");
    printf("5. Exit : \n");

    printf("Enter a Number : ");
    scanf("%d", &i);

    switch(i){
    case 1:
        insertAtBeg();
        goto flag;
        break;
    case 2:
        insertAtEnd();
        goto flag;
        break;
    case 3:
        sortLL();
        goto flag;
        break;
    case 4:
        display();
        goto display;
        break;
    case 5: break;

    default:
        printf("Enter again : \n");
        goto flag;
    }
}

int main() {
    menu();

    return 0;
}
