#include <iostream>
#define NewLine std::cout<<std::endl;

std::string NameEmployee(){
  std::string Nama;
  std::cout<<"> Nama Karyawan: ";
  getline(std::cin>>std::ws, Nama);
  for(int i=0;i<Nama.length(); i++){
    if(Nama[i]>='0' && Nama[i]<='9'){
      std::cout<<"Input harus berupa Abjad."; NewLine
     return NameEmployee();
    }
  }
  return Nama;
}

int CalculateCleanSalary(){
  double Gapok;
  std::cout<<"> Gaji Pokok [Mis. 1000.000/2000.000, dst.]"; NewLine
  std::cout<<": ";
  std::cin>>Gapok;
  double GajiTunjangan;
  std::cout<<"> Tunjangan Dalam Desimal [Mis. 25%=0.25, dst.]"; NewLine
  std::cout<<": ";
  std::cin>>GajiTunjangan;
  double GajiDanTunjangan = (GajiTunjangan*Gapok)+Gapok;
  std::cout<<"// Total Gaji Dan Tunjangan: Rp."<<GajiDanTunjangan<<".000"; NewLine
  double PotonganPPH;
  std::cout<<"> Potongan PPH Dalam Desimal [Mis. 5%=0.05, dst.]"; NewLine
  std::cout<<": ";
  std::cin>>PotonganPPH;
  double GajiBersih = (PotonganPPH*GajiDanTunjangan)-GajiDanTunjangan;
  std::cout<<"// Total Gaji Bersih Karyawan: Rp."<<GajiBersih<<".000"; NewLine
  return NULL;
}

char ReCount(){
  char R;
  std::cout<<"Ingin mengulang [Y/n]: ";
  std::cin>>R;
  return R;
}
  
int main(int argc, char *argv[]){
  do{
    NameEmployee();
    CalculateCleanSalary();
  }while(ReCount() == 'Y' || ReCount() == 'y');
  std::cout<<"Exiting. . .";
  return 0;
}