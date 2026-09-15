#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp;

    //Create first node
    head = (struct Node*) malloc(sizeof(struct Node));
    head -> data = 10;
    head -> next = NULL;

    //Create second node
    temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = 20;
    temp -> next = NULL;
    head -> next = temp;

    //Delete first node
    temp = head;
    head = head -> next;
    free(temp);

    //Display
    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }

    printf("NULL");

    return 0;
}