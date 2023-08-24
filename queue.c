#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void enqueue();
void dequeue();
void display();
int queue [SIZE];
int rear=-1;
int front=-1;
void main()
{
int choice;
while(1)
{
printf("\n\n***MENU**\n\n");
printf("\n1.Enqueue operation\n2.dequeue\n3.\n4.Exit");
scanf("%d",&choice);
switch(choice)
{case 1:enqueue(value)
break;
case 2:dequeue()
break;
case 3:display()
break;
case 4:Exit(0)
default:printf("Incorrect choice\n");
}}}
void enqueue()
{
int value;
if(front==-1)
printf("OVERFLOW");
else
{
if(front==-1)
front=0;
printf("Element to be inserted:");
scanf("%d",&value);
rear=rear+1;
queue[rear]=value;
printf("Insertion Successfull");
}}
void dequeue()
{if (front==rear)
printf("queue is empty\n");
else{
printf("\nDeleted :%d,queue[front]");
front++;
if (front==rear)
front=0;rear=-1;
}
void display()
{
if(front==-1)
printf("queue is empty");
else{
printf('Queue elements are:");
for(int i=front;i<=rear;i++)
printf("%d",queue[i]);
}}

 
  
