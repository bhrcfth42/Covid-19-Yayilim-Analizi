#ifndef NodeAndGraph_H
#define NodeAndGraph_H

class AdjListNode{
	public:
	    int dest;
	    double agirlik;
	    AdjListNode* next; 
}; 

class AdjList{ 
	public:
	    AdjListNode *head; 
}; 

class Graph{
	public:
	    int V; 
	    AdjList* array;
}; 

AdjListNode* newAdjListNode(int dest,double agirlik){
    AdjListNode* newNode = new AdjListNode; 
    newNode->dest = dest;
    newNode->agirlik=agirlik;
    newNode->next = NULL; 
    return newNode;
} 
 
Graph* createGraph(int V){ 
    Graph* graph = new Graph; 
    graph->V = V; 

    graph->array = new AdjList[V]; 

    int i; 
    for (i = 0; i < V; ++i){
    	graph->array[i].head = NULL;
	}
    
    return graph; 
}

void addEdge(Graph* graph,int src, int dest,double weight){
    AdjListNode* newNode = newAdjListNode(dest,weight); 
    newNode->next = graph->array[src].head; 
    graph->array[src].head = newNode;
}

void printGraph(Graph* graph){ 
    int v; 
    for (v = 0; v < graph->V; ++v) 
    { 
        AdjListNode* pCrawl = graph->array[v].head; 
        cout<<"\n Dugum Noktasi \n Head "<<v<<endl;
        while (pCrawl) 
        { 
			cout<<pCrawl->dest<<"->\tAgirlik: "<<pCrawl->agirlik<<"\t";
            pCrawl = pCrawl->next; 
        } 
        cout<<endl; 
    } 
}

#endif
