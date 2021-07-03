#ifndef DosyaOku_H
#define DosyaOku_H
void dosyaOku(){
	
	#pragma region //kisiler.txt okuma
	ifstream kisidosyasi("kisiler.txt");
	int i;
	if(kisidosyasi.is_open()){
		string satir;
		i=0;
		while(!kisidosyasi.eof()){					
			kisidosyasi>>satir;
			for(int loop=0;loop<satir.length();loop++){
				if(satir[loop]==','){
					satir[loop]=' ';
				}
			}
			stringstream degerler(satir);
			degerler>>kisi[i].id>>kisi[i].ad>>kisi[i].cinsiyet>>kisi[i].mahalle>>kisi[i].yas>>kisi[i].covid_19>>kisi[i].kronik_rahatsizlik>>kisi[i].il_disinda_bulunma;
			i++;
		}
//		for(int loop=0;loop<50;loop++){
//			cout<<kisi[loop].id<<"\t"<<kisi[loop].ad<<"\t"<<kisi[loop].cinsiyet<<"\t"<<kisi[loop].mahalle<<"\t"<<kisi[loop].yas<<"\t"<<kisi[loop].covid_19<<"\t"<<kisi[loop].kronik_rahatsizlik<<"\t"<<kisi[loop].il_disinda_bulunma<<"\t"<<endl;
//		}
		kisidosyasi.close();
	}
	#pragma endregion
	
	#pragma region //iliski.txt okuma
	ifstream iliskidosyasi("iliski.txt");
	if(iliskidosyasi.is_open()){
		string satir;
		i=0;
		while(!iliskidosyasi.eof()){
			int j=0;
			int deger;
			iliskidosyasi>>satir;
			for(int loop=0;loop<satir.length();loop++){
				if(satir[loop]==','){
					satir[loop]=' ';
				}
				else if(satir[loop]=='-')
					satir[loop]='0';
			}
			stringstream degerler(satir);
			while(degerler>>deger){
				kisi[i].iliski[j]=deger;
				j++;
			}				
			i++;
		}
//		for(int loop=0;loop<50;loop++){
//			for(int loop2=0;loop2<50;loop2++)
//				cout<<kisi[loop].iliski[loop2]<<" ";
//			cout<<endl;
//		}
		iliskidosyasi.close();
	}
	#pragma endregion
	
	#pragma region //etkilesim1.txt okuma
	ifstream etkilesim1dosyasi("etkilesim1.txt");
	if(etkilesim1dosyasi.is_open()){
		string satir;
		i=0;
		while(!etkilesim1dosyasi.eof()){
			int j=0;
			int deger;
			etkilesim1dosyasi>>satir;
			for(int loop=0;loop<satir.length();loop++){
				if(satir[loop]==','){
					satir[loop]=' ';
				}
				else if(satir[loop]=='-')
					satir[loop]='0';
			}
			stringstream degerler(satir);
			while(degerler>>deger){
				kisi[i].etkilesim1[j]=deger;
				j++;
			}				
			i++;
		}
//		for(int loop=0;loop<50;loop++){
//			for(int loop2=0;loop2<50;loop2++)
//				cout<<kisi[loop].etkilesim1[loop2]<<" ";
//			cout<<endl;
//		}
		etkilesim1dosyasi.close();
	}
	#pragma endregion
	
	#pragma region //etkilesim2.txt okuma
	ifstream etkilesim2dosyasi("etkilesim2.txt");
	if(etkilesim2dosyasi.is_open()){
		string satir;
		i=0;
		while(!etkilesim2dosyasi.eof()){
			int j=0;
			int deger;
			etkilesim2dosyasi>>satir;
			for(int loop=0;loop<satir.length();loop++){
				if(satir[loop]==','){
					satir[loop]=' ';
				}
				else if(satir[loop]=='-')
					satir[loop]='0';
			}
			stringstream degerler(satir);
			while(degerler>>deger){
				kisi[i].etkilesim2[j]=deger;
				j++;
			}				
			i++;
		}
//		for(int loop=0;loop<50;loop++){
//			for(int loop2=0;loop2<50;loop2++)
//				cout<<kisi[loop].etkilesim2[loop2]<<" ";
//			cout<<endl;
//		}
		etkilesim2dosyasi.close();
	}
	#pragma endregion
	
	#pragma region //etkilesim3.txt okuma
	ifstream etkilesim3dosyasi("etkilesim3.txt");
	if(etkilesim3dosyasi.is_open()){
		string satir;
		i=0;
		while(!etkilesim3dosyasi.eof()){
			int j=0;
			int deger;
			etkilesim3dosyasi>>satir;
			for(int loop=0;loop<satir.length();loop++){
				if(satir[loop]==','){
					satir[loop]=' ';
				}
				else if(satir[loop]=='-')
					satir[loop]='0';
			}
			stringstream degerler(satir);
			while(degerler>>deger){
				kisi[i].etkilesim3[j]=deger;
				j++;
			}				
			i++;
		}
//		for(int loop=0;loop<50;loop++){
//			for(int loop2=0;loop2<50;loop2++)
//				cout<<kisi[loop].etkilesim3[loop2]<<" ";
//			cout<<endl;
//		}
		etkilesim3dosyasi.close();
	}
	#pragma endregion
	
	#pragma region //etkilesim4.txt okuma
	ifstream etkilesim4dosyasi("etkilesim4.txt");
	if(etkilesim4dosyasi.is_open()){
		string satir;
		i=0;
		while(!etkilesim4dosyasi.eof()){
			int j=0;
			int deger;
			etkilesim4dosyasi>>satir;
			for(int loop=0;loop<satir.length();loop++){
				if(satir[loop]==','){
					satir[loop]=' ';
				}
				else if(satir[loop]=='-')
					satir[loop]='0';
			}
			stringstream degerler(satir);
			while(degerler>>deger){
				kisi[i].etkilesim4[j]=deger;
				j++;
			}				
			i++;
		}
//		for(int loop=0;loop<50;loop++){
//			for(int loop2=0;loop2<50;loop2++)
//				cout<<kisi[loop].etkilesim2[loop2]<<" ";
//			cout<<endl;
//		}
		etkilesim4dosyasi.close();
	}
	#pragma endregion
	
	#pragma region //maske.txt okuma
	ifstream maskedosyasi("maske.txt");
	if(maskedosyasi.is_open()){
		string satir;
		i=0;
		while(!maskedosyasi.eof()){
			int j=0;
			int deger;
			maskedosyasi>>satir;
			satir.erase(0,4);
			for(int loop=0;loop<satir.length();loop++){
				if(satir[loop]==','){
					satir[loop]=' ';
				}
			}
			stringstream degerler(satir);
			while(degerler>>deger){
				kisi[i].maske[j]=deger;
				j++;
			}				
			i++;
		}
//		for(int loop=0;loop<50;loop++){
//			for(int loop2=0;loop2<4;loop2++)
//				cout<<kisi[loop].maske[loop2]<<" ";
//			cout<<endl;
//		}
		maskedosyasi.close();
	}
	#pragma endregion
}
#endif
