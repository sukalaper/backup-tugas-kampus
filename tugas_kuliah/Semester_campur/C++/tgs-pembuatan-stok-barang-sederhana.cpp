// tugas pembuatan stok barang sederhana

// untuk hasil input-output
#include <iostream>
// untuk penambahan fungsi spasi pada kata
#include <string>
// biar gak pake std::cout 
using namespace std;

// penamaan struct
struct toko{ 
 string barang;
 int jml;
 double harga;
 int total;
}
// nama pemanggil struct
toko;

int main(){

 cout<<" --Program stok barang sederhana--"<<endl;
 cout<<"\nMasukan nama barang: ";
 // getcline cin saya gunakan agar bisa mendapatkan spasi saat penamaan barang
 getline(cin, toko.barang); 
 cout<<"Masukan jumlah stock "<<toko.barang<<" yang tersedia: ";
 cin>>toko.jml;
 cout<<"Masukan harga satuan "<<toko.barang<<": ";
 cin>>toko.harga;
 cout<<"---------------------------"<<endl;
 cout<<"Masukan total "<<toko.barang<<" yang telah terjual: ";
 cin>>toko.total; 
 /* digunakan untuk mengetahui sisa barang dengan pengurangan
    toko.total=(toko.jml-toko.total);
    digunakan untuk mengetahui total harga masuk dengan perkalian
    toko.harga=(toko.total*toko.harga); 
    line 44 & 46 revisi karna salah output yang keluar.*/
 cout<<"--------------------------";
 cout<<" "<<endl;
 cout<<"Jadi sisa barang hanya "<<toko.jml-toko.total<<" Pcs, dan uang yang diterima adalah Rp."<<toko.total * toko.harga<<".00 ";

 return 0;
}
