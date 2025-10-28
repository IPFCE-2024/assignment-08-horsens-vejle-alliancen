#include <stdio.h>
#include <assert.h>
#include "../include/exercise3.h"


int main(void){

int x = 2;
queue q;
initialize(&q);
assert(q.front == NULL && q.rear == NULL); //queue is empty after init
printf("Den er tom:)\n");

enqueue(&q,x);
int y = dequeue(&q);
assert(y==x); //x and y is equal after enqueue and dequeue
assert(empty(&q)); //queue is empty again
printf("Det virker\n");


int x0, x1;
enqueue(&q, x0);
enqueue(&q, x1);
int y0 = dequeue(&q);
int y1 = dequeue(&q);
assert(y0==x0); //x0 and y0 is equal after enqueue and dequeue
assert(y1==x1); //x1 and y1 is equal after enqueue and dequeue
assert(empty(&q)); //queue is empty again
printf("Det Johnson baby");

return 0;
}