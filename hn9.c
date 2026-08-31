#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    // Delete first node
    temp = head;
    head = head->next;
    free(temp);

    printf("Node deleted successfully.");

    return 0;
}

