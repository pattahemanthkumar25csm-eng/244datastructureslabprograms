#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1;
int rear =-1;
void enqueue(int item){
	if(rear == MAX -1){
		printf("queue overflow");
	}
	else if(front == -1){
	front  = 0;
}else{
	rear++;
	queue[rear] = item;
}	
	}		
void dequeue(){
	if(front == -1){
	printf("queue is underflow");
}
else if(front= rear = 0){
	front = -1;
}
else{
//	item = queue[front];
	printf("deleted item is %d", queue[front]);
	front++;
}		
}
void display (){
	if(front == -1){
		printf("queue is empty");
	}
	printf("the queue is :");
	for(int i = front;i<= rear;i++){
		printf("%d", queue[i]);
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


















