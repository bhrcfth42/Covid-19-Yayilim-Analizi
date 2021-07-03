#ifndef IliskiDerecesiGoster_H
#define IliskiDerecesiGoster_H
void iliskiDerecesiGoster(Graph* graph, int kaynakID,int hedefID){
	int resultKaynakKisi=binarySearchKisi(0,50,kaynakID);
	int resultHedefKisi=binarySearchKisi(0,50,hedefID);
	if(resultKaynakKisi!=-1){
		bfs(graph,resultKaynakKisi,resultHedefKisi);
		cout<<"Iliski Derecesi: "<<kisi[resultKaynakKisi].iliski[resultHedefKisi]<<endl;
	}
}
#endif
