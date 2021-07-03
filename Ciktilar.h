#ifndef Ciktilar_H
#define Ciktilar_H
void ciktiAlmaKismi(int i,Graph* iliskiGraph,Graph* etkilesimGraph,double* riskPuani,double* mahalleRiskPuani,double* riskPuaniSiralanmis,double* mahalleRiskPuaniSiralama,Graph* temasliGraph,double* vakaTespitDizisi){
	switch (i) {
		case 1:
			cout<<"\n\nIliski Graf Ciktisi"<<endl;
			printGraph(iliskiGraph);
			break;
		case 2:
			cout<<"\n\n2 kisi arasindaki Iliski derecesi ve BFS Ciktisi"<<endl;
			int kaynakID,hedefID;
			cout<<"Iliski icin KaynakID giriniz :"<<endl;
			cin>>kaynakID;
			cout<<"Iliski icin HedefID giriniz :"<<endl;
			cin>>hedefID;
			iliskiDerecesiGoster(iliskiGraph,kaynakID,hedefID);
			break;
		case 3:
			cout<<"\n\nToplam 4 Gunluk Etkilesim Graf Ciktisi"<<endl;
			printGraph(etkilesimGraph);
			break;
		case 4:
			cout<<"\n\nKisi Risk Puani"<<endl;
			for(int i=0;i<50;i++){
				cout<<kisi[i].id<<"\t"<<kisi[i].ad<<"\t"<<riskPuani[i]<<" "<<endl;
			}
			break;
		case 5:
			cout<<"\n\nMahalle Risk Puani"<<endl;
			for(int i=0;i<5;i++){
				cout<<"Mahalle "<<i+1<<" : "<<mahalleRiskPuani[i]<<endl; 
			}
			break;
		case 6:
			cout<<"\n\nKisi Risk Puani Siralanmis"<<endl;
			for(int i=0;i<50;i++){
				for(int j=0;j<50;j++){
					if(riskPuaniSiralanmis[i]==riskPuani[j]){
						cout<<kisi[j].id<<"\t"<<kisi[j].ad<<"\t"<<riskPuaniSiralanmis[i]<<endl;
						break;
					}						
				}				
			}
			break;
		case 7:
			cout<<"\n\nMahalle Risk Puani Siralanmis"<<endl;
			for(int i=0;i<5;i++){
				for(int j=0;j<5;j++){
					if(mahalleRiskPuaniSiralama[i]==mahalleRiskPuani[j]){
						cout<<"Mahalle "<<j+1<<":\t"<<mahalleRiskPuaniSiralama[i]<<endl;
						break;
					}					
				}				
			}
			break;
		case 8:
			cout<<"\n\nTemasli Kisi Graf Ciktisi"<<endl;
			printGraph(temasliGraph);
			break;
		case 9:
			cout<<"\n\nIlk Vaka Tespit"<<endl;
			printArray(vakaTespitDizisi,50,riskPuani);
			break;
		default:
			cout<<"Gecerli Islem Girmediniz. Cikmak icin 0'a basiniz veya gecerli bir islem giriniz. "<<endl;
	}
}
#endif
