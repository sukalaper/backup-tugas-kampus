// tugas mencari nilai tertinggi dan terbesar mahasiswa 

#include<iostream>
#include<iomanip>
using namespace std;

    int main() {
        int n;
        Atas:

            cout<<setw(55)<<"-------------------------------"<<endl;
            cout<<setw(55)<<"PROGRAM MENGISI NILAI MAHASISWA"<<endl;
            cout<<setw(49)<<"PRODI ILMU KOMPUTER"<<endl;
            cout<<setw(49)<<"-------------------"<<endl<<endl;
            cout<<"Masukan Jumlah Mahasiswa/i: ";
            cin>>n;
            cout<<"---------------------------"<<endl;

                int i, nilai_max, nilai_min, nim;
                string nama, prodi;
                char ulang, abjad[n];
                double uts[n], uas[n], rata[n];

                    //untuk perulangan jika mahasiswa lebih dari 1.
                    for(i=0; i<n; i++) {
                        cout<<endl;
                        cout<<"Nilai Mahasiswa Ke-"<<(i+1)<<endl;
                        cout<<"--------------------"<<endl;
                        cout<<"Nama Mahasiswa\t: ";
                        //agar mendapat spasi saat input nama dan mengambaikan 1 kata yang terhapus saat cin.getline.
                        getline(cin >> std::ws, nama);
                        cout<<"Prodi\t\t: ";
                        getline(cin >> std::ws, prodi);
                        cout<<"Nim Mahasiswa/i\t: ";
                        cin>>nim;
                        cout<<"Nilai UTS\t: ";
                        cin>>uts[n];
                        cout<<"Nilai UAS\t: ";
                        cin>>uas[n];

                        //menghitung total nilai rata-rata
                        rata[n]=(uts[n]+uas[n])/2;

                        if(rata[n]>80){
                            abjad[n]='A';
                        }else if(rata[n]>70) {
                            abjad[n]='B';
                        }else if(rata[n]>60) {
                            abjad[n]='C';
                        }else if(rata[n]>50) {
                            abjad[n]='D';
                        }else{
                            abjad[n]='E';
                        }

                        //menentukan nilai terbesar.
                        nilai_max = uts[n];
                        if(uas[n] > uts[n]){
                            nilai_max=uas[n];
                        }
                        if(uts[n] > uas[n]){
                            nilai_max=uts[n];
                        }

                        //menentukan nilai terkecil.
                        nilai_min = uts[n];
                        if(uas[n] < uts[n]){
                            nilai_min=uas[n];
                        }
                        if(uts[n] < uas[n]){
                            nilai_min=uts[n];
                        }

                        //hasil akhir.
                        cout<<endl;
                        cout<<"-----"<<endl;
                        cout<<"HASIL "<<endl;
                        cout<<"-----"<<endl;
                        cout<<"Nama\t\t: "<<nama<<endl;
                        cout<<"Nim\t\t: "<<nim<<endl;
                        cout<<"Prodi\t\t: "<<prodi<<endl;
                        cout<<"Rata-Rata\t: "<<rata[n]<<endl;
                        cout<<"Abjad Diperoleh\t: "<<abjad[n]<<endl;
                        cout<<"Nilai Tertinggi\t: "<<nilai_max<<endl;
                        cout<<"Nilai Terendah\t: "<<nilai_min<<endl;
                        cout<<endl;
                    }

                            //kondisi jika program mencapai akhir.
                            cout<<"Apakah anda ingin menghitung ulang? Y/N : ";
                            cin>>ulang;

                            //perulangan hitung jika user ingin mengulang kembali.
                            if(ulang=='Y' ||  ulang=='y') {
                                goto Atas;
                            }else if(ulang=='N' || ulang=='n'){
                                cout<<"Program Selesai, Terimakasih!"<<endl;
                            }else{
                                cout<<"Kata Yang Anda Input Tidak Sesuai, Program Keluar!";
                            }

  return 0;
}
