//tugas menggabungkan kata

#include <iostream>
#include <string.h>
using namespace std;

int main(){
 char kata1[20];
 char kata2[20];
 
 cout<<"Masukan kata 1= ";
 cin>>kata1;

 cout<<"Masukan Kata 2= ";
 cin>>kata2;

 strcat(kata1, kata2);
 cout<<"hasil penggabungan "<<kata1;

 return 0;
}
