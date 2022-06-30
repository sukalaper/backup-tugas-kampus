//progress menghitung kebutuhan volume pada filter aquarium

#include <iostream>
using namespace std;

int main(){
  int p,l,t,volume,minim,maxim;
  char lagi;
  
  cout<< "Pertama, kita akan menentukan volume air pada akuarium anda terlebih dahulu."<<endl;
Hitung: // untuk perulangan pada line 43 agar dimulai dari sini ketika user memilih Y || y
  cout<<"\nMasukan Panjang Akuarium anda: ";
  cin>>p;
  cout<<"Masukan Lebar Akuarium anda: ";
  cin>>l;
  cout<<"Masukan Tinggi Akuarium anda: ";
  cin>>t;
  volume=(p*l*t/1000);
  cout<<"Maka, Volume Air pada Akuarium anda adalah: "<<volume<<"L "<<endl;
  cout<<"\nDari hasil "<<volume<<"L, selanjutnya kita akan menentukan jumlah Dari kekuataan Pompa yang dibutuhkan Akuarium anda."<<endl;
  cout<<"\nApakah anda ragu dan ingin Menghitung kembali Akuarium anda? [Y/N] ";
  cin>>lagi;

  // ini nyoba if-else, eh work wkwk. 
  // inget, if it work, dont touch!
  if(lagi=='Y' || lagi=='y')
    goto Hitung;
  else(lagi=='N' || lagi=='n');
    goto Lanjut;

Lanjut: // untuk perulangan pada line 43 ketika user memilih N || n 
  cout<<"Dari volume "<<volume<<"L kita akan mencari Pompa yang sesuai."<<endl;
  minim=volume*4;
  maxim=volume*8;
  cout<<"\nUntuk Pompa minimal adalah: "<<minim<<"L/j "<<endl;
  cout<<"Untuk Pompa maksimal adalah: "<<maxim<<"L/j "; 
  cout<<"\nApakah anda ingin Menghitung kembali dari awal? [Y/N] ";
  cin>>lagi;

  // serius, ini sebenernya gegayaan aja nyoba switch case padahal baru banget belajar kwkw.
  // eh, ternyata work! kwkw.
  // inget, if it work dont touch!
  switch(lagi=='Y' || lagi=='y'){
    case 1: 
      goto Hitung;
    break;
  }
  
  switch(lagi=='N' || lagi=='n'){
    case 1:
      cout<<"Selamat tinggal";
    break;
  }

  return 0; 
}
