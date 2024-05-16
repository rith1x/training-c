# Data Structures & Algorithms


## Sorting

### Selection Sort

```c
#include <stdio.h>

int main()
{
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values separated by space: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // SELECTION SORT

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    // RESULT ARRAY
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++, printf(" "))
    {
        printf("%d", arr[i]);
    }
}
```

#### Working
```
5 6 1 0 2

i,j - k
0 1 - 5 6 1 0 2
0 2 - 1 6 5 0 2 -s
0 3 - 0 6 5 1 2 -s
0 4 - 0 6 5 1 2 

        k
stt - 0 6 5 1 2
1 2 - 0 5 6 1 2 -s
1 3 - 0 1 6 5 2 -s
1 4 - 0 1 6 5 2

          k
stt - 0 1 6 5 2
2 3 - 0 1 5 6 2 -s
2 4 - 0 1 2 6 5 -s

            k
stt - 0 1 2 6 5
3 4 - 0 1 2 5 6 -s SORTED


```




# LINKED LIST CODE

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
	int data;
	struct node * link;
};

void append ( struct node **, int ) ;
void display ( struct node * ) ;

int main() {
	struct node *p ;
	p=NULL;
	int n;
	char ch[10];
	do {
		printf("Enter the value\n");
		scanf("%d",&n);
		append(&p,n);
		printf("Do you want to add another node? Type Yes/No\n");
		scanf("%s",ch);
	}while(!strcmp(ch,"Yes"));
	printf("The elements in the linked list are");
	display(p);
	printf("\n");
	return 0;
}

/* adds a node at the end of a linked list */
void append ( struct node **q, int num ){
	struct node *nn = (struct node *) malloc(sizeof(struct node));
	nn->data = num;
	nn->link = NULL;
	if(*q == NULL){
		*q = nn;
	} else{
		struct node *temp = *q;
		while(temp->link != NULL){
			temp = temp->link;
		}
		temp->link = nn;
	}
}

void display ( struct node *q ){
	struct node *temp = q;
	while(temp->link != NULL){
		printf("%d ",temp->data);
		temp = temp->link;
	}
	printf("%d",temp->data);
}
```