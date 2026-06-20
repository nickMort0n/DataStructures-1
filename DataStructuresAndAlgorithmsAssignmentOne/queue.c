#include <stdio.h>
#include "main.h"

void initQueue() {
    struct node* head;//don't need to initialize because they are set to NULL later
    struct node* tail;
    head = tail = NULL;
}

int isEmpty(struct node* head) {
    return (head == NULL);//when head is NULL the list is empty
}

void addToTail(struct node* tail, struct node* newTail) {
    tail->next = newTail;
    tail = newTail;
}

void removeFromHead(struct node* head) {
    head->next = head;
    free(head);
}