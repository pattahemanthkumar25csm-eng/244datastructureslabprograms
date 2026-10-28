#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1;
int rear =-1;
void enqueue(int item){
	if (front = (rear + 1) % MAX){
		printf("queue is overflow");
		return;
	}else if(front == -1){
		front = 0;
		rear = 0;
	//	queue[++rear] = item;
	}else{
		rear = (rear + 1) % MAX;
	}
	queue[++rear] = item;
	printf("inserted value is", item);
}
void dequeue(){
	if (front == -1){
		printf("queue is undeerflow");
		return;
	}else if(front == rear){
		front = rear = -1;
	}else {
/*	int item = queue[front];
		printf("deleted item %d", item);
		*/
		front = (front + 1) % MAX;
	}
}
void display(){
	int i;
if (front == -1){
	printf("queue is empty");
	return;
}	
	printf("the circular queue is ");
	i = front;
	while(1){
		printf("%d", queue[i]);
		if (i == rear)
		   break;
		   i = (i + 1) % MAX;
	}
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
	
	
	
	
	
	
	
	
	
	
	
	
	





















