#ifndef BFS_H
#define BFS_H
void bfs(Graph* graph,int startVertex,int hedef) {   
    bool* visited = new bool[50];
  	for (int i = 0; i < 50; i++)
    	visited[i] = false;

  	queue* q = createQueue();

  	visited[startVertex] = true;
  	enqueue(q, startVertex);

  	while (!isEmpty(q)) {
  		printQueue(q);
    	int currVertex = dequeue(q);
	    cout << "Gezildi " << currVertex << " "<<endl;
	    if(currVertex==hedef){
	    	cout<<"Hedefe Ulasildi."<<endl;
			break;	
		}
	    AdjListNode* adjLists=graph->array[currVertex].head;
	    while (adjLists) {
	    	int adjVertex = adjLists->dest;
	      	if (!visited[adjVertex]) {
	        	visited[adjVertex] = true;
	        	enqueue(q, adjVertex);
	      	}
	      	adjLists=adjLists->next;
		}
    }
}
#endif
