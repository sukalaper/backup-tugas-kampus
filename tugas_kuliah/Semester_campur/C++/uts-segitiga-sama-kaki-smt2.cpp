//latihan soal uts semester 2

#include<iostream>
using namespace std;

int main (){ 
  int jalur, jarak, bintang, a;

  cout<<"Masukan Angka [1] [2] [3] : ";
  cin>>a;

  if(a==1){
    cout<<"*";
  } 
  else if(a==2){
    for(jalur=1;jalur<=a;jalur++){
      for(jarak=1;jarak<=a-jalur;jarak++){
        cout<<" ";
      }
      for(bintang=1;bintang<=jalur;bintang++){
        cout<<"* ";
      }
      cout<<"\n";
    }
  }
  else if(a==3){
    for(jalur=1;jalur<=a;jalur++){
      for(jarak=1;jarak<=a-jalur;jarak++){
        cout<<" ";
      }
      for(bintang=1;bintang<=jalur;bintang++){
        cout<<"* ";
      }
      cout<<"\n";
    }
  }
  else{ 
    cout<<"\nKan udah dikasih tau kalo input cuma 1-3 aja.";
  }

  return 0;
}
