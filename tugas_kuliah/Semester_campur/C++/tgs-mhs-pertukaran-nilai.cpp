// tugas pertukaran nilai (swap)
#include <iostream> 
using namespace std; 

struct mahasiswa{
  string nama; 
  int npm; 
  float nilai; 
};

int main() { 

  mahasiswa *mhs1,*mhs2,*mhs3;
  mhs1=new mahasiswa; 
  mhs2=new mahasiswa;
  mhs3=new mahasiswa;
  char tuker;
  
  cout<<"--Program Swap Nilai Mahasiswa--";
  cout<<"\n";
  cout<<"\n";

  cout<<"Masukan Nama Mahasiswa: ";
  getline(cin, mhs1->nama);
  cout<<"Masukan NPM "<<mhs1->nama<<": ";
  cin>>mhs1->npm;
  cout<<"Masukan Nilai "<<mhs1->nama<<": ";
  cin>>mhs1->nilai;
  
  cout<<"\n";
 
  cout<<"Masukan Nama Mahasiswa Berikutnya: ";
  /* getline(cin, mhs2->nama); 
  masih error line 44 jadi pake cin dulu aja.
  */
  cin>>mhs2->nama;
  cout<<"Masukan NPM "<<mhs2->nama<<": ";
  cin>>mhs2->npm;
  cout<<"Masukan Nilai "<<mhs2->nama<<": ";
  cin>>mhs2->nilai;
  
  cout<<"\n";
  
  cout<<"Jumlah keseluruhan adalah: ";
  cout<<"\n";
  
  cout<<"------------------------";
  cout<<"\n";
  
  cout<<"Mahasiswa, "<<mhs1->nama<<": ";
  cout<<"\n";
  
  cout<<"NPM:  "<<mhs1->npm<<" ";
  cout<<"\n";
  
  cout<<"NILAI: "<<mhs1->nilai<<" ";
  cout<<"\n";
  cout<<"\n";
  
  cout<<"Mahasiswa, "<<mhs2->nama<<": ";
  cout<<"\n";
  
  cout<<"NPM: "<<mhs2->npm<<" ";
  cout<<"\n";
  
  cout<<"NILAI: "<<mhs2->nilai<<" ";
  cout<<"\n";
  cout<<"\n";
  
  cout<<"Apakah anda ingin melakukan penukaran nilai dan npm? [Y] / [N]: ";
  cin>>tuker;
  
  if(tuker=='Y' || tuker=='y')
      goto Tukar;
  else(tuker=='N' || tuker=='n');
      goto Selesai;
  
Tukar:
  *mhs3=*mhs1;
  *mhs1=*mhs2; 
  *mhs2=*mhs3;

  cout<<"\n";
  
  cout<<"Setelah penukaran: ";
  cout<<"\n";
  
  cout<<"-----------------";
  cout<<"\n";
  
  cout<<"Mahasiswa pertama: ";
  cout<<"\n";
  
  cout<<"NPM:  "<<mhs1->npm<<" ";
  cout<<"\n";
  
  cout<<"NILAI: "<<mhs1->nilai<<" ";
  cout<<"\n";
  cout<<"\n";
  
  cout<<"Mahasiswa kedua: ";
  cout<<"\n";
  
  cout<<"NPM: "<<mhs2->npm<<" ";
  cout<<"\n";
  
  cout<<"NILAI: "<<mhs2->nilai<<" ";
  cout<<"\n";
  cout<<"\n";
  
Selesai:
  cout<<"Program selesai, terimakasih!";
  
  return 0; 
}

