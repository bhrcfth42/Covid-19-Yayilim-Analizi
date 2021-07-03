#ifndef GenelSiralama_H
#define GenelSiralama_H
void genelSiralama(double* riskPuani,double* siralanmisRiskPuani){
	for(int i=0;i<50;i++){
		siralanmisRiskPuani[i]=riskPuani[i];
	}
	for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            if(siralanmisRiskPuani[j]<=siralanmisRiskPuani[i]){
                double t=siralanmisRiskPuani[i];  
                siralanmisRiskPuani[i]=siralanmisRiskPuani[j];
                siralanmisRiskPuani[j]=t;
            }
        }
    }
}
#endif
