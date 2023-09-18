#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
    int data;
    struct node* next;
};
typedef struct node node;

// Declare global pointers to maintain the head and tail of the stack
node* head = NULL;
node* tail = NULL;

// Function prototypes
void push();
void pop();
void display();

int main() {
    int choice;
    int count = 0;

    printf("-----------Stack With Linked List--------------\n");

    while (count == 0) {
        printf("1.Push.\n2.Pop.\n3.Display.\n4.Exit.\n");
        printf("Choose your option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                count = 1;
                printf("\n     Exiting.....\n");
                break;
            default:
                printf("Enter a valid number\n");
        }
        printf("\n");
    }
}

void push() {
    int data;
    node* new_node;

    new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter the data: ");
    scanf("%d", &data);
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }

    printf("Successfully pushed item: %d\n", data);
}

void pop() {
    if (head == NULL) {
        printf("Stack is empty. Cannot pop.\n");
    } else {
        // Remove the top element (head)
        node* temp = head;
        head = head->next;
        printf("Popped item: %d\n", temp->data);
        free(temp); // Free the memory of the removed node
    }
}

void display() {
    node* ptr = head;
    printf("\nDisplay:\n");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
