#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


int maxOddEvenSum(struct Node* head) {
    int oddSum = 0, evenSum = 0;
    int index = 1; 
    struct Node* current = head;

    while (current != NULL) {
        if (index % 2 == 1) {
            oddSum += current->data; 
        } else {
            evenSum += current->data; 
        }
        current = current->next;
        index++;
    }

    return (oddSum > evenSum) ? oddSum : evenSum;
}


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL;

 
    head = createNode(10);
    second = createNode(20);
    third = createNode(30);
    fourth = createNode(40);
    fifth = createNode(50);

   
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    printf("Linked list: ");
    printList(head);

    int maxSum = maxOddEvenSum(head);
    printf("Maximum sum of alternate elements: %d\n", maxSum);

    return 0;
}
