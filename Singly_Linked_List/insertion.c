#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *newNode;

    //Create first node
    head = (struct Node*) malloc(sizeof(struct Node));
    head -> data = 10;
    head -> next = NULL;

    //Create new node
    newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> data = 5;

    //Insert at beginning
    newNode -> next = head;
    head = newNode;

    //Display
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }

    printf("NULL");

    return 0;
}