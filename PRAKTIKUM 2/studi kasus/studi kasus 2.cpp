#include <iostream>
#include <conio.h>
using  namespace std;


int main(){
	int jumlah,menu,goreng, bakar, total,diskon1,diskon2,del, jarak, hasil;

	cout<<"\t PILIHAN MENU AYAM PAK MINTO "<<endl;
	cout<<" 01. ayam geprek 21.000"<<endl;
	cout<<" 02. ayam goreng 17.000"<<endl;
	cout<<" 03. udang goreng 19.000"<<endl;
	cout<<" 04. cumi goreng 20.000"<<endl;
	cout<<" 05. ayam bakar 25.000"<<endl;
	

	
	
		cout<<"Masukkan menu yang dipilih = ";
		cin>>menu;
		cout<<"Masukkan jumlah yang yang dipilih : ";
		cin>>jumlah;
		cout<<" masuukkan jarak rumah anda : "; 
		cin>>jarak;
		if (menu==01 && jarak<=3){
			int ong=15000;
			int hasil;
			total=21000*jumlah;
			cout<<"total harga akhir yang harus di bayar : "<<total<<endl;
			if(total >= 25000){
				hasil = total-3000;
				cout<<"mendapat diskon sebesar : 3000"<<endl;
				int seluruh=total-3000;
				cout<<"total semua yang harus di bayar : "<<seluruh<<endl;
			}
			    else
				if(total >= 50000){
				hasil = total*15/100-5000;
				cout<<"mendapat diskon sebesar : "<<hasil<<endl;
				int seluruh=total-hasil;
				cout<<"total semua yang harus di bayar : "<<seluruh<<endl;
			}
		
		}
		if (menu==02 && jarak<3){
			total=17000*jumlah;
			cout<<"total harga akhir yang harus di bayar : "<<total<<endl;
			if(total >= 25000){
				hasil = total-3000;
				cout<<"mendapat diskon sebesar : 3000"<<endl;
				int seluruh=total-3000;
				cout<<"total semua yang harus di bayar : "<<seluruh<<endl;
			}
		}
		else if (menu==02){
			total=17000*jumlah;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		 else if (menu==03){
			total=19000*jumlah;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		else if (menu==04){
			total=20000*jumlah;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		else if (menu==05){
			total=25000*jumlah;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
	
	else{
		cout<<"Masukkan menu yang dipilih = ";
		cin>>menu;
		cout<<"Masukkan jumlah yang yang dipilih : ";
		cin>>jumlah;
		cout<<"Masukkan jarak rumah (Km) : ";
		cin>>jarak;
		if(jarak<3){
			if (menu==01){
			total=21000*jumlah+15000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==02){
			total=17000*jumlah+15000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==03){
			total=19000*jumlah+15000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==04){
			total=20000*jumlah+15000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==05){
			total=25000*jumlah+15000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
	}else{
		if (menu==01){
			total=21000*jumlah+25000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==02){
			total=17000*jumlah+25000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==03){
			total=19000*jumlah+25000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==04){
			total=20000*jumlah+25000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
		if (menu==05){
			total=25000*jumlah+25000;
			cout<<"total harga akhir yang harus di bayar : "<<total;
		}
	}
	}
	getch();
	return 0;
		}

