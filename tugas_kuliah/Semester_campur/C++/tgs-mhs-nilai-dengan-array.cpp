// tugas mencari nilai mahasiswa dengan menggunakan array
#include <iostream>
using namespace std;

int main (){
    //saya sengaja menggunakan struct untuk olah banyak data.
    struct{
        char nama[20];
        float tugas;
        float uts;
        float uas;
        float total_nilai;
    }
    //identifikasi nama
    mahasiswa[5];

  int a,n;
  cout<<"Masukan Total Mahasiswa/i Yang Akan Dihitung: ";
  cin>>n;
  
  for(a=0;a<n;n++){
      cout<<"Nama Mahasiswa: ";
      /* getline agar input nama dapat menggunakan spasi.
      namun masih error, jadi menggunakan cin.

      3-04-2022 solved dengan menambahkan cin.ignore.
      melalui sumber : https://bit.ly/3K5zSyE

      masih error ternyata wkwk.
      cin.getline(mahasiswa[n].nama, 20);
      cin.ignore(1000, '\n');
      */
      cin>>mahasiswa[n].nama;
      cout<<"Masukkan Nilai Tugas Anda: "; 
      cin>>mahasiswa[n].tugas;
      cout<<"Masukkan Nilai UTS Anda: "; 
      cin>>mahasiswa[n].uts;
      cout<<"Masukkan Nilai UAS Anda: "; 
      cin>>mahasiswa[n].uas;
  }

cout<<"Nama"<<" "<<"Tugas"<<" "<<"Uts"<<"  "<<"Uas"<<" "<<"Total Nilai"<<endl;

for(a=0; a<n; a++) {
    //perhitungan nilai total
    mahasiswa[n].total_nilai=(mahasiswa[n].tugas*0.2)+(mahasiswa[n].uts*0.3)+(mahasiswa[n].uas*0.5);
    //tampilan nilai total
    cout<<mahasiswa[n].nama<<" "<<mahasiswa[n].tugas<<" "<<" "<<mahasiswa[n].uts<<" "<<mahasiswa[n].uas<<" "<<mahasiswa[n].total_nilai;
        //penggunaan else if untuk mendapatkan nilai grade
        if(mahasiswa[n].total_nilai>=80)
           cout<<"Selamat, anda mendapatkan grade A!";
        else if (mahasiswa[n].total_nilai>=70)
           cout<<"Selamat, anda mendapatkan grade B!";
        else if (mahasiswa[n].total_nilai>=60)
           cout<<"Selamat, anda mendapatkan grade C!";
        else if (mahasiswa[n].total_nilai>=50)
           cout<<"Anda mendapatkan grade D!";
        else if (mahasiswa[n].total_nilai<=40)
           cout<<"Anda harus belajar lebih giat agar mendapatkan peringkat!";
}  
  
return 0;
}

