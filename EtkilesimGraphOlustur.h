#ifndef EtkilesimGraphOlustur_H
#define EtkilesimGraphOlustur_H
void etkilesimGrafOlustur(Graph* graph){
	for(int i=0;i<50;i++){
    	for(int j=0;j<50;j++){
    		double deger=etkilesimPuaniHesapla(i,j);
			addEdge(graph,i,j,deger);
		}
	}
}
#endif
