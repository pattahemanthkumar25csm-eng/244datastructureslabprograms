#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *rear = NULL;
struct Node  *front = NULL;
void enqueue(int value){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	if(rear == NULL){
		front = rear = newNode;
		rear->next = front; 
	}
	newNode->next = rear->next;
	rear->next = newNode;
	rear = newNode;
}
void dequeue(){
	struct Node *temp;
	if(front == NULL){
		printf("empty");
	}else{
	
	front = front->next;
	rear->next = front;
}
free(temp);	
}

void display(){
	
	struct Node *temp;
	if(front == NULL){
		printf("emtpy");
		return;
	}
	temp = front;
	
	printf(" circular queue is");
	do{
	printf(" %d" ,temp->data);
	temp = temp->next;
	}
	while(temp != front);
	printf("\n");	
}

int main(){
	int item;
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	dequeue();
	display();
	enqueue(40);
	display();
	return 0;
}
















