#ifndef RiskPuaniHesapla_H
#define RiskPuaniHesapla_H
double riskPuaniHesapla(int i,int j,AdjListNode* adjNode){
	
	double yasKatsayisi,kronikRahatsizlikKatsayisi;
	
	if(kisi[i].yas>=0&&kisi[i].yas<5)
		yasKatsayisi=0.2;
	else if(kisi[i].yas>=5&&kisi[i].yas<20)
		yasKatsayisi=0.5;
	else if(kisi[i].yas>=20&&kisi[i].yas<55)
		yasKatsayisi=1.0;
	else if(kisi[i].yas>=55&&kisi[i].yas<75)
		yasKatsayisi=1.7;
	else
		yasKatsayisi=2.0;
	
	if(kisi[i].kronik_rahatsizlik==1)
		kronikRahatsizlikKatsayisi=1.7;
	else
		kronikRahatsizlikKatsayisi=1.0;
		
	return yasKatsayisi*kronikRahatsizlikKatsayisi*adjNode->agirlik;
}

void riskPuaniOlustur(double* riskPuani,Graph* etkilesimGraph){
	for(int i=0;i<50;i++){
		double riskPuaniToplam=0;
		AdjListNode* adj=etkilesimGraph->array[i].head;
		for(int j=0;j<50;j++){
			riskPuaniToplam+=riskPuaniHesapla(i,j,adj);
			adj=adj->next;
		}
		riskPuani[i]=riskPuaniToplam;
	}
}
#endif
