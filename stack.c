#include<stdio.h>
#include<stdlib.h>

int stack[100],n,elem,max,top=-1;



void push(){
	printf("Enter the element : ");
	scanf("%d",&elem);
	top++;
	stack[top] = elem;
}

void pop(){
	printf("\nThe element deleted is %d\n",stack[top]);
	top--;
}

void display(){
	printf("The elements in STACK are : \n");
	for(int i=0;i<=top;i++){
		printf("%d\t",stack[i]);
	}
	printf("\n\n");
}


void main(){
	int choice;
	printf("Enter the max number of elements : ");
	scanf("%d",&max);

	while(1) {
		printf("\n1.Push\t\t2.Pop\t\t3.Peak\n4.Display\t5.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);	

		switch(choice){
			
			case 1:
				if(top<max-1) push();
				else printf("\nStack Overflow\n\n");
				break;

			case 2:
				if(top<0) printf("\nStack Underflow\n\n");
				else pop();
				break;

			case 3:
				if(top>=0) printf("\nThe element on the top of the stack is : %d\n",stack[top]);
				else printf("\nThere is no elements in STACK\n\n");
				break;

			case 4:
				if (top>=0) display();
				else printf("\nStack is empty\n\n");
				break;

			case 5:
				printf("\nExiting...");
				exit(0);
				break;

			default:
				printf("\nInvalid choice...\n");
				break;

		}
	
	}
	

}
