#ifndef MahalleBulasmaRiskiSiralama_H
#define MahalleBulasmaRiskiSiralama_H
void mahalleBulasmaRiskiSiralama(double* mahalleRiskPuani,double* mahalleRiskPuaniSiralama){
	for(int i=0;i<5;i++)
		mahalleRiskPuaniSiralama[i]=mahalleRiskPuani[i];
	for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mahalleRiskPuaniSiralama[j]<=mahalleRiskPuaniSiralama[i]){
                double t=mahalleRiskPuaniSiralama[i];  
                mahalleRiskPuaniSiralama[i]=mahalleRiskPuaniSiralama[j];
                mahalleRiskPuaniSiralama[j]=t;
            }
        }
    }
}
#endif
