#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *temp;
    
    head = NULL;

    // Example nodes
    struct Node n1 = {10, NULL};
    struct Node n2 = {20, NULL};
    struct Node n3 = {30, NULL};

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;

    // Traversal
    temp = head;

    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}

