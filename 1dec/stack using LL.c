//Stack using Linked list
#include<stdio.h>

struct Stack{
    int data;
    struct Stack* next;
};

struct Stack* top = NULL;

void push() {
     //Create A Node
    struct Stack* node = (struct Stack*) malloc( sizeof(struct Stack) );
    node->next = top;
    printf("\nEnter Data :  ");
    scanf("%d", &(node->data) );

    top = node;
}

void pop(){
    struct Stack* temp = top;

    top = top->next;

    free(temp);
    printf("\nNode deleted");
}

void peek(){
    printf("\n%d", top->data);
}

void display(){
    struct Stack* i = top;

    while( i != NULL){
        printf("%d ", i->data);
        i = i->next;
    }
}

void menu(){
    int i;

    flag:
    printf("\n+++++++++++++++++ \n");
    printf("\n1. Push in stack : \n");
    printf("2. Pop from stack : \n");
    printf("3. Peek at top  : \n");
    printf("4. Display all data  : \n");
    printf("5. Clear screen : \n");
    printf("6. Exit : \n");

    printf("Enter a Number : ");
    scanf("%d", &i);

    switch(i){
    case 1:
        push();
        goto flag;
        break;
    case 2:
        pop();
        goto flag;

        break;
    case 3:
        peek();
        goto flag;
        break;
    case 4:
        display();
        goto flag;
        break;

    case 5:
        system("cls");
        goto flag;
        break;

    case 6: break;

    default:
        printf("Enter again : \n");
        goto flag;
    }
}

int main() {
    menu();

    return 0;
}
