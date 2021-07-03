#ifndef EtkilesimPuaniHesapla_H
#define EtkilesimPuaniHesapla_H
double etkilesim1(int i,int j){
	double etkilesim,maskeTakmaDurumu;
	double ilikiDurumu;
	if(kisi[i].etkilesim1[j]==0)
		etkilesim=0.0;
	else
		etkilesim=1.0;
	
	if(kisi[i].iliski[j]==0)
		ilikiDurumu=1.0;
	else if(kisi[i].iliski[j]==1)
		ilikiDurumu=1.2;
	else if(kisi[i].iliski[j]==2)
		ilikiDurumu=1.5;
	else
		ilikiDurumu=1.9;
	
	if(kisi[i].maske[0]==0)
		maskeTakmaDurumu=3.0;
	else
		maskeTakmaDurumu=1.0;
	
	return etkilesim*ilikiDurumu*maskeTakmaDurumu;
}

double etkilesim2(int i,int j){
	double etkilesim,maskeTakmaDurumu;
	double ilikiDurumu;
	if(kisi[i].etkilesim2[j]==0)
		etkilesim=0.0;
	else
		etkilesim=1.0;
	
	if(kisi[i].iliski[j]==0)
		ilikiDurumu=1.0;
	else if(kisi[i].iliski[j]==1)
		ilikiDurumu=1.2;
	else if(kisi[i].iliski[j]==2)
		ilikiDurumu=1.5;
	else
		ilikiDurumu=1.9;
	
	if(kisi[i].maske[1]==0)
		maskeTakmaDurumu=3.0;
	else
		maskeTakmaDurumu=1.0;
	
	return etkilesim*ilikiDurumu*maskeTakmaDurumu;
}

double etkilesim3(int i,int j){
	double etkilesim,maskeTakmaDurumu;
	double ilikiDurumu;
	if(kisi[i].etkilesim3[j]==0)
		etkilesim=0.0;
	else
		etkilesim=1.0;
	
	if(kisi[i].iliski[j]==0)
		ilikiDurumu=1.0;
	else if(kisi[i].iliski[j]==1)
		ilikiDurumu=1.2;
	else if(kisi[i].iliski[j]==2)
		ilikiDurumu=1.5;
	else
		ilikiDurumu=1.9;
	
	if(kisi[i].maske[2]==0)
		maskeTakmaDurumu=3.0;
	else
		maskeTakmaDurumu=1.0;
	
	return etkilesim*ilikiDurumu*maskeTakmaDurumu;
}

double etkilesim4(int i,int j){
	double etkilesim,maskeTakmaDurumu;
	double ilikiDurumu;
	if(kisi[i].etkilesim4[j]==0)
		etkilesim=0.0;
	else
		etkilesim=1.0;
	
	if(kisi[i].iliski[j]==0)
		ilikiDurumu=1.0;
	else if(kisi[i].iliski[j]==1)
		ilikiDurumu=1.2;
	else if(kisi[i].iliski[j]==2)
		ilikiDurumu=1.5;
	else
		ilikiDurumu=1.9;
	
	if(kisi[i].maske[3]==0)
		maskeTakmaDurumu=3.0;
	else
		maskeTakmaDurumu=1.0;
	
	return etkilesim*ilikiDurumu*maskeTakmaDurumu;
}

double etkilesimPuaniHesapla(int i,int j){
	return etkilesim1(i,j)+etkilesim2(i,j)+etkilesim3(i,j)+etkilesim4(i,j);
}
#endif
