//tugas membulatkan bilangan

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double nilai;
 
  cout<<"Masukan Nilai : ";
  cin>>nilai;

  cout<<"Hasil pembulatan = "<<ceil(nilai);
  cout<<endl;
  cout<<"Hasil pembulatan = "<<floor(nilai);
  
return 0;
}
