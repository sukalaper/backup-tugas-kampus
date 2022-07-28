#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>

std::string NameEmployment()
{
    std::string Nama;
    bool valid;
    do
    {
        valid = true;
        std::cout<<"Nama Karyawan : ";getline(std::cin>>std::ws,Nama);
        for(size_t i = 0 ; i<Nama.length();i++)
        {
            char CharacterOf = Nama[i];
            if(CharacterOf>='0'&&CharacterOf<='9')
                valid=false;
        }
    }while(!valid);
    return Nama;
}

template<class T>
T InputNumeric(const std::string& str)
{
    T numeric;
    std::cout<<str;
    std::cin>>numeric;
    return numeric;
}

double CalculateSalary()
{
    double Gapok = InputNumeric<double>("Gaji Pokok [Ex. 1000.000,etc]\n>>>");
    double GajiTunjangan = InputNumeric<double>("Tunjangan Dalam Desimal[Ex. 25%=0.25, etc]\n>>>");
    double GajiDanTunjangan = (GajiTunjangan*Gapok)+Gapok;
    double PotonganPPN = InputNumeric<double>("Potongan PPN Dalam Desimal [Ex. 5%=0.05, etc\n>>>");
    double GajiBersih = (PotonganPPN*GajiDanTunjangan)-GajiDanTunjangan;
    return GajiBersih;
}

int main()
{
    char validation;
   do
   {
       std::cout<<"Nama Pekerja :" <<NameEmployment()<<std::endl;
       std::cout<<"Gaji         :"<<CalculateSalary()<<std::endl;
       validation = InputNumeric<char>("Ingin Mengulang ? ");
   }while(validation == 'Y' || validation == 'y');

    return 0;
}
