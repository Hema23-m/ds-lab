#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *newNode, *temp;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    newNode = malloc(sizeof(struct Node));
    newNode->data = 20;
    newNode->next = head;
    head = newNode;

    temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}

