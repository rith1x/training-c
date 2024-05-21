#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee {
	int id;
	struct employee * link;
};
void append ( struct employee **, int ) ;
void display ( struct employee * ) ;
void deleteanyelement (struct employee **, int);

int main() {
	struct employee *p ;
	p=NULL;
	int n,choice;
while(choice!=4)
	{
	printf("1.Insert a new Employee\n2.Display the Employees\n3.Remove an Employee ID\n4.Exit\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter an Employee id\n");
				scanf("%d",&n);
				append(&p,n);
				break;
			case 2:
				display(p);
				break;
			case 3:
				printf("Enter an Employee id to be removed\n");
				scanf("%d",&n);
				deleteanyelement(&p,n);
				display(p);
				break;
			case 4:
				printf("Exit\n");
				break;
			default:
				printf("Enter a valid choice");
				break;
			}
		}
	return 0;
}

void append ( struct employee **q, int num ) {
struct employee *nn = (struct employee *) malloc(sizeof(struct employee));
nn->id = num;
nn->link = NULL;
if(*q == NULL){
	*q = nn;
} else{
	struct employee *t = *q;
	while (t->link != NULL){
		t=t->link;
	}
	t->link = nn;
}
}

void display ( struct employee *q ) {
	while(q->link != NULL){
		printf(" %d",q->id);
		q=q->link;
	}
	printf(" %d",q->id);
}


void deleteanyelement ( struct employee **q, int num ) {
struct employee *t = *q;
struct employee *p;
while(t->id != num){
	if(t->link == NULL){
		printf("Employee ID %d is not found",num);
		return;
	}
	p=t;
	t=t->link;
}
struct employee * nex = t->link;
free(t);
p->link = nex ? nex : NULL;
}  
