#ifndef MahalleRiskPuaniHesapla_H
#define MahalleRiskPuaniHesapla_H
void mahalleRiskPuaniHesapla(double* mahalleRisk,double* riskPuani){
	for(int i=0;i<50;i++){
		if(kisi[i].mahalle==1)
			mahalleRisk[kisi[i].mahalle-1]+=riskPuani[i];
		else if(kisi[i].mahalle==2)
			mahalleRisk[kisi[i].mahalle-1]+=riskPuani[i];
		else if(kisi[i].mahalle==3)
			mahalleRisk[kisi[i].mahalle-1]+=riskPuani[i];
		else if(kisi[i].mahalle==4)
			mahalleRisk[kisi[i].mahalle-1]+=riskPuani[i];
		else
			mahalleRisk[kisi[i].mahalle-1]+=riskPuani[i];
	}
}
#endif
