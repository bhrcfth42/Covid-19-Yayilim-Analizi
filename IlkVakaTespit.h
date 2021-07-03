#ifndef IlkVakaTespit_H
#define IlkVakaTespit_H
void ilkVakaTespit(double* riskPuani,double* a){
	int size=1;
	for(int i=0;i<50;i++){
	    if(kisi[i].il_disinda_bulunma==1){
	    	a[size]=riskPuani[i];
	    	size++;
		}
	}
	build_maxheap(a,size);
	
}
#endif
