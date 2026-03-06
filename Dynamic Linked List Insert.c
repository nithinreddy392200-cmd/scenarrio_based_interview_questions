#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) return;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;  // Double ptr updates head
}

void print(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* list = NULL;
    insert(&list, 3);
    insert(&list, 2);
    insert(&list, 1);
    print(list);  // 1 2 3
    // Free nodes in real code
    return 0;
}
