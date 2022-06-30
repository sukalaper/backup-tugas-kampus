//progress menghitung kebutuhan lampu aquascape 
 
#include <iostream>
using namespace std;

int main(){
  //saya gunakan struct karna agar lebih mudah dalam olah banyak data.
  struct{
    string nama;
    // p = panjang, l = lebar, t = tinggi.
    unsigned int tank[3] = {'p', 'l', 't'};
    // h = high, m = medium, L = low.
    int lampu[3] = {'h', 'm', 'L'};
    int total;
    char lagi;
  }
  //identifikasi nama.
  aquarium;
 
  cout<<";; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
  cout<<";;\n";
  cout<<";; PROGRAM MENGHITUNG KEBUTUHAN LAMPU AQUASCAPE\n";
  cout<<";;\n";
  cout<<";;\n";
  cout<<";; Made with love, Anggiramadyansyah. \n";
  cout<<";; -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n";
 //untuk perulangan saat user ingin menghitung kembali.
 Hitunglagi:
  cout<<">> Masukan Nama Lengkap Anda: ";
  /* untuk mengabaikan satu karakter dari buffer input ketika line 65 di eksekusi.
  imbasnya, akan kehilangan satu huruf awal yang diinputkan oleh user. */
  cin.ignore(1, ' ');
  getline(cin, aquarium.nama);
  cout<<"\n>> Masukan Panjang Aquarium Anda: ";
  cin>>aquarium.tank[0];
  cout<<">> Masukan Lebar Aquarium Anda: ";
  cin>>aquarium.tank[1];
  cout<<">> Masukan Tinggi Aquarium Anda: ";
  cin>>aquarium.tank[2]; 
  
  //proses pembagian total menjadi watt lampu.
  //high watt.
  aquarium.lampu[0]=aquarium.tank[0]*aquarium.tank[1]*aquarium.tank[2]/1250;
  //med watt.
  aquarium.lampu[1]=aquarium.tank[0]*aquarium.tank[1]*aquarium.tank[2]/2500;
  //low watt.
  aquarium.lampu[2]=aquarium.tank[0]*aquarium.tank[1]*aquarium.tank[2]/5000; 
  
  //hasil output.
  cout<<"\n\nJadi, kebutuhan pencahayaan yang dibutuhkan Aquarium "<<aquarium.nama<<" adalah: \n";
  cout<<"-----------------------------------------\n";
  cout<<"High Watt\t";
  cout<<"Medium Watt\t";
  cout<<"Low Watt\t";
  cout<<"\n----------------------------------------\n";
  cout<<aquarium.lampu[0]<<"W \t\t";
  cout<<aquarium.lampu[1]<<"W \t\t";
  cout<<aquarium.lampu[2]<<"W \t";

  //output hitung ulang dengan if-else dan goto.
  cout<<"\n\nApakah "<<aquarium.nama<<" Ingin Menghitung Ulang Kembali? [Y]/[N] : ";
  cin>>aquarium.lagi;
  if(aquarium.lagi=='Y' || aquarium.lagi=='y'){
    goto Hitunglagi;
  } 
  else{
    cout<<"Program Selesai, Terimakasih!";
  }
  
 return 0;
}
