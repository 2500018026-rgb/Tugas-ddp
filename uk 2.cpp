#include<iostream>
using namespace std;

int main(){
	long hari,detik,totaldetik;
	int jam,menit;
	
	cout<<"masukan angka >1 (dalam satuan detik) :";
	cin>>detik;
	
	hari=(detik/86400);
	jam=(detik%86400)/3600;
	menit=(detik%3600)/60;
	totaldetik=detik%60;
	
	cout<<endl;
	cout<<"hasil konversi:"<<endl;
	cout<<detik<<" "<<"detik"<<" "<<"="<<hari<<" "<<"hari"<<" "<<jam<<" "<<"jam"<<" "<<menit<<" "<<"menit"<<" "<<totaldetik<<" "<<"detik"<<endl;
	
	return 0;
	
	}