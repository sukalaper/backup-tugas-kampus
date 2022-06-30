// tugas mencari nilai detik - jam

#include <iostream>
using namespace std;

int main(){
  int det;
  int jam, menit, detik;

  cout<<"Masukan Detik Yang Ingin Dicari = ";
  cin>>det;
  
  jam=det/3600;
  menit=det/60;
  detik=det/1;
  
  cout<<"Hasil Dari Setiap Detik Adalah : "<<endl;
  cout<<"1 Jam = "<<jam<<endl;
  cout<<"1 Menit = "<<menit<<endl;
  cout<<"1 Detik = "<<det<<endl;
  return 0;
 }
