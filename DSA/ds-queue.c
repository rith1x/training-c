#include <stdio.h>

// |-------------------------------|
// | CONTENT-ARRAY | front | count |
// |  [0,0,0,0,0]  |   0   |   5   |
// |-------------------------------|

typedef struct Queue
{
    int cont[5];
    int front;
    int count;
} q;


int main()
{
    struct q *h = (struct q*) malloc(sizeof(struct Queue));
    h->front = 0;
    h->count = 5;
}