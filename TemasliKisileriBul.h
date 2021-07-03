#ifndef TemasliKisileriBul_H
#define TemasliKisileriBul_H
void temasliKisileriBul(Graph* graph,Graph* temasliGraph){
	for(int i=0;i<50;i++){
		if(kisi[i].covid_19==1){
			for(int j=0;j<50;j++){
				if(kisi[i].etkilesim1[j]!=0||kisi[i].etkilesim2[j]!=0||kisi[i].etkilesim3[j]!=0||kisi[i].etkilesim4[j]!=0){
					addEdge(temasliGraph,i,j,1);
				}
			}
		}
	}
}
#endif
