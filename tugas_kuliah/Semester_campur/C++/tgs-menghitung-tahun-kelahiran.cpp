// tugas menghitung tahun Lahir

#include <iostream>
using namespace std;

int main(){
  int bulan,tahun,thn,bln,i,k;
  string nama;
  
  cout<<"\n-------------------------------------------------------------";
  cout<<"\nPROGRAM MENGHITUNG USIA MENGGUNAKAN BULAN DAN TAHUN KELAHIRAN\n";
  cout<<"\nProgram Studi : Ilmu Komputer"; 
  cout<<"\nSemester      : Genap (II)";
  cout<<"\nNama Kampus   : Universitas Respati Indonesia";
  cout<<"\nNama Dosen    : Asri Pertiwi,ST,MM";
  cout<<"\n-------------------------------------------------------------\n";
  cout<<"#Info Penting: ";
  cout<<"\nSilahkan masukan hanya angka didalam jawaban.";
  cout<<"\nMisal, Masukan Bulan Lahir : 01";
  cout<<"\nSelamat Mencoba!\n\n\n";

  cout<<"Masukan Nama Anda: ";
  cin>>nama;
  cout<<"Masukan Bulan Lahir Anda: ";
  cin>>bulan;
  cout<<"Masukan Bulan Saat Ini: ";
  cin>>bln;
  cout<<"Masukan Tahun Lahir Anda: ";
  cin>>tahun;
  cout<<"Masukan Tahun Saat Ini: ";
  cin>>thn;
  
  nama=nama;
  i=(bln-bulan);
  k=(thn-tahun);
  cout<<"\nJadi, Umur "<<nama<<" Adalah "<<k<<" tahun "<<i<<" bulan"<<endl;

  return 0;
}
