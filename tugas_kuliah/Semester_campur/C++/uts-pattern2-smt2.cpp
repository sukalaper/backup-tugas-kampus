//latihan soal uts semester 2
#include <iostream>
using namespace std;

int main(){
  int bintang, a, n;
  
  bintang = 5;

  for(a=bintang;a>=1;--a){
    for(n=1;n<=a;++n){
      cout<<n<<" ";
    }
    cout<<"\n";
  } 

  return 0;
}
