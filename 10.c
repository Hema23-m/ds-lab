#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node n1 = {10, NULL};
    struct Node n2 = {20, NULL};
    struct Node n3 = {30, NULL};
    struct Node *head = &n1, *temp;
    int key, found = 0;

    n1.next = &n2;
    n2.next = &n3;

    printf("Enter value to search: ");
    scanf("%d", &key);

    temp = head;

    while(temp != NULL) {
        if(temp->data == key) {
            found = 1;
            break;
        }
        temp = temp->next;
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}

