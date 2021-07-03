#ifndef Kuyruk_H
#define Kuyruk_H

class queue {
  	public:
	  	int items[50];
		int front;
		int rear;
};

// Create a queue
queue* createQueue() {
  queue* q = new queue;
  q->front = -1;
  q->rear = -1;
  return q;
}

// Check if the queue is empty
int isEmpty(queue* q) {
  if (q->rear == -1)
    return 1;
  else
    return 0;
}

// Adding elements into queue
void enqueue(queue* q, int value) {
  if (q->rear == 50 - 1)
    cout<<"Kuyruk Dolu"<<endl;
		
  else {
    if (q->front == -1)
      q->front = 0;
    q->rear++;
    q->items[q->rear] = value;
  }
}

// Removing elements from queue
int dequeue(queue* q) {
  int item;
  if (isEmpty(q)) {
    cout<<"Kuyruk Bos"<<endl;
    item = -1;
  } else {
    item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) {
      q->front = q->rear = -1;
    }
  }
  return item;
}

// Print the queue
void printQueue(queue* q) {
  int i = q->front;

  if (isEmpty(q)) {
    cout<<"Kuyruk Bos"<<endl;
  } else {
    printf("\nKuyruk icerigi \n");
    for (i = q->front; i < q->rear + 1; i++) {
      cout<<q->items[i]<<" ";
    }
    cout<<endl;
  }
}
#endif
