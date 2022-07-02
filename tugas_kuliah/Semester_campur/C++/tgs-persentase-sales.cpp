//lat mencari persentase sales

#include <iostream>

int main(int argc, char *argv[]){
	std::string nama;
	int total;
	float cuan1, cuan2, cuan3, bonus;
	int i;
	int s;
	int p;
	int j;
	
	
	std::cout<<"Masukan jumlah sales yang akan di hitung: ";
	std::cin>>i;
	
	for(int a=0; a<i; a++){
	std::cout<<"Masukan nama sales: ";
	getline(std::cin>>std::ws, nama);
	std::cout<<"> Kosmetik spa dengan harga Rp.780.000"<<std::endl;
	std::cout<<"Berapa spa yang dijual sales bulan ini? ";
	std::cin>>s;
  cuan1=(s*780.000)/35;
	std::cout<<"Keuntungan sales dari Spa: Rp."<<cuan1<<std::endl;
	
	std::cout<<"> Paket jamu dengan harga Rp.450.000"<<std::endl;
	std::cout<<"Berapa jamu yang dijual sales bulan ini? ";
	std::cin>>j;
	cuan2=(j*450.000)/10;
	std::cout<<"Keuntungan sales dari Jamu: Rp."<<cuan2<<std::endl;
	
	std::cout<<"> Paket perawatan dengan harga Rp.300.000"<<std::endl;
	std::cout<<"Berapa paket perawatan yang dijual sales bulan ini? ";
	std::cin>>p;
	cuan3=(p*300.000)/10;
	std::cout<<"Keuntungan sales dari Perawatan: Rp."<<cuan3<<std::endl;
	
	total=cuan1+cuan2+cuan3;
		std::cout<<"Total penghasilan sales adalah: Rp."<<total<<std::endl;
		
		if(total>1000.000){
		  std::cout<<"Sales mendapat bonus 30%!"<<std::endl;
		  bonus=total+30;
		  std::cout<<"Total penghasilan sales adalah Rp."<<bonus;
		}
  	else if(total<1000.000){
  	  std::cout<<"Sales belum mendapat bonus.";
  	}
  	
	}
	
	
	return 0;
}