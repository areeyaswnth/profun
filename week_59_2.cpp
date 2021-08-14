#include<string.h>
#include <stdio.h>
char a[100];
int MAXSIZE = 100;       
char stack[100];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   char data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

char push(char data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {

    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        push(a[i]);
    }
   // print stack data 
   while(!isempty()) {
      int data = pop();
      printf("%c",data);
   }
   return 0;
}