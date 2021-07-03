#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

#include "Kisi.h"//Kiþi classý tanýmlanýyor
Kisi* kisi=new Kisi[50];//Global kisiler için alan kaydý oluþturuluyor.
#include "DosyaOku.h" //Dosya okuma ve gerekli kiþi listesine eþitleme yapýldýðý kýsým
#include "NodeAndGraph.h" //Liste oluþturumu ve Graph yapýsý oluþturma
#include "BinarySearchKisi.h"//Kiþiler için binary search kýsmý
#include "Kuyruk.h"//Kuyruk yapýsýnýn oluþturulduðu kýsým
#include "BFS.h"//Graph yapýsý üzerinde ulaþacaðý kiþiye kadar düðüm dolanmasýnýn yapýldýðý BFS algoritmasý
#include "IliskiDerecesiGoster.h"//Ýliþki Derece Hesaplama ve BFS de gezinme algoritmasýnýn çaðrýldýðý kýsým
#include "EtkilesimPuaniHesapla.h"//Etkileþim Puaný hesaplamasýnýn yapýldýðý kýsým
#include "EtkilesimGraphOlustur.h"//Etkileþim Puaný hesaplama fonksiyonu çaðrýlýr ve Graph oluþturulur.
#include "RiskPuaniHesapla.h"//Risk Puanýnýn hesaplandýðý etkileþim için ise Graph düðümünün kullanýldý kýsým
#include "MahalleRiskPuaniHesapla.h"//Mahalleler için risk Puanlarýnýn hesaplandýðý kýsým
#include "GenelSiralama.h"//Kiþilerin Risk Puanýna göre büyükten küçüðe sýralamasý
#include "MahalleBulasmaRiskiSiralama.h"//mahalle Risk puanlarýna göre büyükten küçüðe sýralandýðý kýsým
#include "TemasliKisileriBul.h"//Graph ile kiþilerin 1. dereceden temaslý olduklarý hesaplanýyor.
#include "MaxHeap.h"//Max Heap Sýralamasýnýn Algoritmasýnýn bulunduðu kýsým
#include "IlkVakaTespit.h"//Vaka tespit Sýralamasý Max heap çaðrýlan kýsým
#include "Ciktilar.h"//Ekrana çýktýlarýn basýlmasý için fonksiyon
#include "CiktiIslemBilgilendirme.h"//Bilgilendirme yazýsýnýn ekrana basildiði fonksiyon


int main(int argc, char** argv) {
	dosyaOku();
	Graph* iliskiGraph = createGraph(50);
    for(int i=0;i<50;i++){
    	for(int j=0;j<50;j++){
    		if(kisi[i].iliski[j]!=0)
    			addEdge(iliskiGraph,i,j,kisi[i].iliski[j]);
		}
	}
	
	Graph* etkilesimGraph = createGraph(50);
	etkilesimGrafOlustur(etkilesimGraph);
	
	double* riskPuani= new double[50];
	riskPuaniOlustur(riskPuani,etkilesimGraph);
	
	double* mahalleRiskPuani= new double[5];
	mahalleRiskPuaniHesapla(mahalleRiskPuani,riskPuani);
	
	double* riskPuaniSiralanmis= new double[50];
	genelSiralama(riskPuani,riskPuaniSiralanmis);

	double* mahalleRiskPuaniSiralama= new double[5];
	mahalleBulasmaRiskiSiralama(mahalleRiskPuani,mahalleRiskPuaniSiralama);
	
	Graph* temasliGraph = createGraph(50);
	temasliKisileriBul(etkilesimGraph,temasliGraph);
    
    double* vakaTespitDizisi= new double[51];
    ilkVakaTespit(riskPuani,vakaTespitDizisi);
    
    int islem;
    ciktiIslemBilgilendirme();
    cin>>islem;
    while(islem!=0){
    	ciktiAlmaKismi(islem,iliskiGraph,etkilesimGraph,riskPuani,mahalleRiskPuani,riskPuaniSiralanmis,mahalleRiskPuaniSiralama,temasliGraph,vakaTespitDizisi);
    	ciktiIslemBilgilendirme();
    	cin>>islem;
	}
    
	return 0;
}
