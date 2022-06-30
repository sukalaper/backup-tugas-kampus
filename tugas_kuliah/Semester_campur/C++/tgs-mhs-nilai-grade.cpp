// tugas mencari banyaknya (n) mahasiswa yang akan dihitung nilainya.
// masing-masing nilai yang didapatkan terdapat grade tersendiri.

#include <iostream>
using namespace std;

int main (){
    
    struct{
        char nama[20];
        float tugas;
        float uts;
        float uas;
        float total_nilai;
    }
    mahasiswa[5];

int a,n;
    
    cout<<"Masukan Total Mahasiswa/i Yang Akan Dihitung: ";
    cin>>n;
    for(a=0;a<n;a++){
        cout<<"Nama Mahasiswa: ";
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
        mahasiswa[n].total_nilai=(mahasiswa[n].tugas*0.2)+(mahasiswa[n].uts*0.3)+(mahasiswa[n].uas*0.5);
        cout<<mahasiswa[n].nama<<" "<<mahasiswa[n].tugas<<" "<<" "<<mahasiswa[n].uts<<" "<<mahasiswa[n].uas<<" "<<mahasiswa[n].total_nilai;
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
