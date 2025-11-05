#include<iostream>
using namespace std;

int main(){
	long detik,jumlahdetik;
	int jam,menit;
	
	cout<<"masukan angka >1  :";
	cin>>detik;
	
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	jumlahdetik=detik%60;
	
	cout<<endl;
	cout<<"hasil konversi:"<<endl;
	cout<<detik<<" "<<"detik"<<" "<<"="<<endl;
	cout<<jam<<" "<<"jam"<<endl;
	cout<<menit<<" "<<"menit"<<endl;
	cout<<jumlahdetik<<" "<<"detik"<<endl;
	return 0;
	

	}
