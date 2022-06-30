// tugas membandingkan besar kecilnya angka

#include <string.h>
#include <iostream>

using namespace std;

int main(){
  char k1[]="dia";
  char k2[]="api";
  int hasil;

  hasil=strcmp(k1, k2);
  cout<<hasil;

  if(hasil>0)
    cout<<k2<<"lebih besar dari"<<k1;
  else
    cout<<k2<<"lebih kecil dari"<<k1;
  return 0;
}
