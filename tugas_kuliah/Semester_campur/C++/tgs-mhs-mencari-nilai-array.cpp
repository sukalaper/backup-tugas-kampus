

//lat mencari nilai mhs

#include <iostream>

int resMhs(){
  int rata, m, nilai_max, nilai_min, as1, as2;
	char cari;
	std::string nama;
	float ass1[10],ass2[10];
	
	std::cout<<"Masukan jumlah mahasiswa: ";
	std::cin>>m;
	for(int a=0; a<m; a++){
	  std::cout<<"nama Mahasiswa/i ke-"<<(a+1)<<": ";
	  getline(std::cin>>std::ws, nama);
	  std::cout<<"Nilai ass1 Mahasiswa/i ke-"<<(a+1)<<": ";
	  std::cin>>ass1[a];
	  std::cout<<"Nilai ass2 Mahasiswa/i ke-"<<(a+1)<<": ";
	  std::cin>>ass2[a];
	  rata=ass1[a]+ass2[a]/2;
	  std::cout<<"Rata-rata nilai: "<<rata;
	    if(rata>65){
	      std::cout<<", Boleh ikut ujian!"<<std::endl;
	    }
	    else if(rata<65){
	      std::cout<<", Tidak bisa ikut ujian!"<<std::endl;
	    }
	    
	    nilai_max=rata;
	    if(ass1[a]>ass2[a]){
	      nilai_max=ass1[a];
	    }
	    if(ass2[a]>ass1[a]){
	      nilai_max=ass2[a];
	    }
	    
	    nilai_min=rata;
	    if(ass1[a]<ass2[a]){
	      nilai_min=ass1[a];
	    }
	    if(ass2[a]<ass1[a]){
	      nilai_min=ass2[a];
	    }
	    
	    std::cout<<"Nilai tertinggi: "<<nilai_max<<std::endl;
	    std::cout<<"Nilai terendah: "<<nilai_min<<std::endl;

      std::cout<<"Inputkan nilai yang ingin dicari"<<std::endl;
      std::cout<<"[1] untuk ass1 | [2] untuk ass2"<<std::endl;
      std::cout<<"Masukan pilihan: ";
      std::cin>>cari;
      if(cari=='1'){
         std::cout<<"Masukan nilai yang ingin dicari pada ass1: ";
         std::cin>>as1;
      }
      if(ass1[a]==as1){
         std::cout<<"Nilai "<<nama<<" ditemukan pada index ass1."<<std::endl;
      }
      if(cari=='2'){
        std::cout<<"Masukan nilai yang ingin dicari pada ass2: ";
        std::cin>>as2;
      }
      if(ass2[a]==as2){
        std::cout<<"Nilai "<<nama<<" ditemukan pada index ass2."<<std::endl;
      }
	}
	  
	  return m;
}

int repProg(){
  char u; 
  std::cout<<"Apakah anda ingin mengulang? [Y/n]";
  std::cin>>u;
  return u;
}
  
int main(int argc, char *argv[]){
	char valRep;
	do{
	resMhs();
	valRep=repProg();
	}
	while(valRep=='Y' && valRep=='Y');
	std::cout<<"Exiting. . .";
	
	return 0;
}