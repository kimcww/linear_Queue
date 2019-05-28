#include <stdio.h>

int Front = 0;
int Rear = 0;
int MaximumSize = 10;
int QueueBuffer[] = {0,};


bool isEmpty(){
    return Front == Rear ? true :false;
}

bool isFull(){
    int nResult;
    nResult = ((Rear+1) % MaximumSize);
    return Front== nResult ? true:false ;
}

void enqueue(int value){
    if (isFull() == true){
        printf("is full");
        return;
    }
    Rear+=1;
    QueueBuffer[Rear] = value;
}

int dequeue(){
    if(isEmpty() == true){
        printf("is empty");
        return 0;
    }
    Front+=1;
    return QueueBuffer[Front];
;
}


int main()
{
    enqueue(10);
    enqueue(50);
    enqueue(12);
    enqueue(1);
    enqueue(4);
    enqueue(12);
    enqueue(45);
    enqueue(22);
    enqueue(49);
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    return 0;
}
