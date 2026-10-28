
#include <stdio.h>
#include <stdlib.h>

/* Node structure */
struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

/* Check whether stack is empty */
int isEmpty() {
    return top == NULL;
}

/* Push an element */
void push(int val) {
    struct Node *newNode =
        (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Stack Overflow (memory allocation failed)\n");
        return;
    }

    newNode->data = val;
    newNode->next = top;
    top = newNode;

    printf("Pushed %d\n", val);
}

/* Pop an element */
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = top;
    printf("Popped %d\n", temp->data);

    top = top->next;
    free(temp);
}

/* View the top element */
void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", top->data);
}

/* Display all stack elements */
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    struct Node *ptr = top;

    printf("Stack (top -> bottom): ");

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    printf("\n");
}

int main() {
    int choice, val;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter value to push: ");

                if (scanf("%d", &val) != 1) {
                    printf("Invalid input\n");
                    return 1;
                }

                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                while (top != NULL) {
                    struct Node *temp = top;
                    top = top->next;
                    free(temp);
                }
                printf("Exiting program\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    while (top != NULL) {
        struct Node *temp = top;
        top = top->next;
        free(temp);
    }

    return 0;
}

