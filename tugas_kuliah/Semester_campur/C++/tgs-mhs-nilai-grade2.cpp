// tugas mencari banyaknya (n) mahasiswa
// setiap nilai hasil memiliki grade

#include <iostream>
using namespace std;

int main(){
  struct{
    char nama[30];
    int nilai;
  }
  mahasiswa[5];
  int a,n;

  cout<<"Masukan banyaknya mahasiswa yang akan dihitung nilai: ";
  cin>>n;

  for(a=0;a<n;a++){
    cout<<"Masukan Nama Mahasiswa: ";
    cin>>mahasiswa[a].nama;
    cout<<"Masukan Nilai Fisika: ";
    cin>>mahasiswa[a].nilai;
  }

  cout<<"Nama"<<"\t"<<"Nilai"<<"\t"<<"Abjad"<<"\n";
  
  for(a=0;a<n;a++){
    cout<<mahasiswa[a].nama<<"\t"<<mahasiswa[a].nilai ;
  }
 
  for(a=0;a<n;a++){
    if(mahasiswa[a].nilai>80)
      cout<<"\t"<<"Abjad A";
    else if(mahasiswa[a].nilai>70)
      cout<<"\t"<<"Abjad B";
    else if(mahasiswa[a].nilai>60)
      cout<<"\t"<<"Abjad C";
    else if(mahasiswa[a].nilai<60)
      cout<<"\t"<<"Abjad D";
  }
  
  return 0;
}
