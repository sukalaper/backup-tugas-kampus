//tugas mencari diskon pada usia tertentu

#include <iostream>
using namespace std;

int main(){
  int usia;
  
  cout<<"Masukan Usia = ";
  cin>>usia;

  if(usia>65)
    cout<<"potongan 50%";
  else if(usia>50)
    cout<<"potongan 30%";
  else
    cout<<"tidak ada potongan";

return 0;
}
