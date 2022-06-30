// tugas mencari bilangan ganjil genap dengan perulangan dan goto

#include <iostream>
using namespace std;

int main(){
  int nilai;
  char lagi;
  
HitungKembali:
  cout<<"Masukan nilai = ";
  cin>>nilai;

  if(nilai%2==0)
    cout<<"Bilangan" " " <<nilai<< " " "adalah Genap";
  else
    cout<<"Bilangan" " " <<nilai<< " " "adalah Ganjil";
  cout<<endl;
 
  cout<<"Ingin menghitung lagi [Y/T] ?";
  cin>>lagi;

  if(lagi=='Y' || lagi=='y')
    goto HitungKembali;
  else
  cout<<"Anda telah keluar dari program, terimakasih!";

  return 0;
}
