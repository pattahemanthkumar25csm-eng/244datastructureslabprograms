#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void enqueue(int item){
	struct Node *newNode = (struct Node *)malloc (sizeof(struct Node));
	newNode->data = item;
	newNode->next = NULL;
	
	if(front == NULL){
		front = newNode;
		rear = newNode;
	}
	rear->next = newNode;
	rear = newNode;
}



int dequeue(){
	struct Node *temp ;
	int item;
	if(front = NULL){
		printf("queue is empty");
	}
	temp = front;
	item = temp->data;
	front = front->next;
	if(front == NULL){
	
	 rear = NULL;
}
	 free(temp);
	 return item;
}


 void display (){
 	struct Node *temp;
	if(front == NULL){
		printf("queue is empty");
	}
	temp =  front;
	printf("the queue is :");
	while (temp != NULL){
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main(){
	
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








