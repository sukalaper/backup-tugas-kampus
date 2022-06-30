//latihan soal uts semester 2

#include <iostream>
using namespace std;

int main(){
  int angka, a, n;

  angka = 5;
  
  for(a=angka;a>=1;--a){
    for(n=1;n<=a;++n){
      cout<<"*";
    }
    cout<<"\n";
  } 

  return 0;
}
