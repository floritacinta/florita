#include <iostream>
using  namespace std;


int main(){
	int jumlah,menu,goreng, bakar, total,diskon1,diskon2;
	
	cout<<"\t PILIHAN MENU AYAM PAK MINTO "<<endl;
	cout<<" 01. ayam goreng 17.000"<<endl;
	cout<<" 02. ayam bakar 21.000"<<endl;
	
	cout<<"masukkan menu yang di pilih  : ";cin>>menu;
	cout<<"masukkan jumlah yang di pesan  : ";cin>>jumlah;
	
	goreng =17000*jumlah;
	bakar  =21000*jumlah;
	diskon1 =(goreng*10)/100;
	diskon2 =(bakar*10)/100;
	
	if(menu==01){
		cout<<"total biaya setelah memesan : "<<goreng<<endl;
		if(goreng>=45000){
			cout<<"anda mendapat diskon sebesar 10% : "<<diskon1<<endl;
		total= goreng- diskon1;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		
	}
	else{
	cout<<"total harga yang harus di bayar : "<<bakar<<endl;;
		if(bakar>=45000){
			cout<<"anda mendapat diskon sebesar 10% : "<<diskon2<<endl;
			total= bakar- diskon2;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
	}
	
return 0;
}
