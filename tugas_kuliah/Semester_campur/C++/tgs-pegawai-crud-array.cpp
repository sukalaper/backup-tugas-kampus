//tugas create - input - delete pegawai dengan menggunakan array

#include <iostream>
using namespace std;

int main(){
  string perusahaan[5] = {"nama", "nip", "divisi", "jabatan", "gaji"};
  int i;
  string hapus;

  cout<<"Nama: ";
  cin>>perusahaan[0];
  cout<<"Nip: ";
  cin>>perusahaan[1];
  cout<<"Divisi: ";
  cin>>perusahaan[2];
  cout<<"Jabatan: ";
  cin>>perusahaan[3];
  cout<<"Gaji Pokok: ";
  cin>>perusahaan[4];

  cout<<"\nHasil Data: \n";
  
  for(i=0;i<5;i++){
    cout<<"\n";
    cout<<perusahaan[i]<<" ";
    cout<<"\n----------"; 
  }

  cout<<"\nData yang ingin dihapus: ";
  cin>>hapus;

  cout<<"\nData sekarang: \n";
  for(i=0;i<5;i++){
    if(perusahaan[i]!=hapus){
      cout<<"\n";
      cout<<perusahaan[i]<<" ";
      cout<<"\n--------";
    }
  }

  return 0;
}
