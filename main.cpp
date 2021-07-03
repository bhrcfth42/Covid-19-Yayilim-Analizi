#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

#include "Kisi.h"//Ki�i class� tan�mlan�yor
Kisi* kisi=new Kisi[50];//Global kisiler i�in alan kayd� olu�turuluyor.
#include "DosyaOku.h" //Dosya okuma ve gerekli ki�i listesine e�itleme yap�ld��� k�s�m
#include "NodeAndGraph.h" //Liste olu�turumu ve Graph yap�s� olu�turma
#include "BinarySearchKisi.h"//Ki�iler i�in binary search k�sm�
#include "Kuyruk.h"//Kuyruk yap�s�n�n olu�turuldu�u k�s�m
#include "BFS.h"//Graph yap�s� �zerinde ula�aca�� ki�iye kadar d���m dolanmas�n�n yap�ld��� BFS algoritmas�
#include "IliskiDerecesiGoster.h"//�li�ki Derece Hesaplama ve BFS de gezinme algoritmas�n�n �a�r�ld��� k�s�m
#include "EtkilesimPuaniHesapla.h"//Etkile�im Puan� hesaplamas�n�n yap�ld��� k�s�m
#include "EtkilesimGraphOlustur.h"//Etkile�im Puan� hesaplama fonksiyonu �a�r�l�r ve Graph olu�turulur.
#include "RiskPuaniHesapla.h"//Risk Puan�n�n hesapland��� etkile�im i�in ise Graph d���m�n�n kullan�ld� k�s�m
#include "MahalleRiskPuaniHesapla.h"//Mahalleler i�in risk Puanlar�n�n hesapland��� k�s�m
#include "GenelSiralama.h"//Ki�ilerin Risk Puan�na g�re b�y�kten k����e s�ralamas�
#include "MahalleBulasmaRiskiSiralama.h"//mahalle Risk puanlar�na g�re b�y�kten k����e s�raland��� k�s�m
#include "TemasliKisileriBul.h"//Graph ile ki�ilerin 1. dereceden temasl� olduklar� hesaplan�yor.
#include "MaxHeap.h"//Max Heap S�ralamas�n�n Algoritmas�n�n bulundu�u k�s�m
#include "IlkVakaTespit.h"//Vaka tespit S�ralamas� Max heap �a�r�lan k�s�m
#include "Ciktilar.h"//Ekrana ��kt�lar�n bas�lmas� i�in fonksiyon
#include "CiktiIslemBilgilendirme.h"//Bilgilendirme yaz�s�n�n ekrana basildi�i fonksiyon


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
