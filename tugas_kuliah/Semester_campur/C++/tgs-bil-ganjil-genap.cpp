// tugas mencari bilangan ganjil Genap
#include <iostream>


int main (){
    std::string input;
    
    std::cout<<"Masukan Angka: ";
    std::cin>>input;

    for(const auto& itr : input){
        if (!(itr >= '0' && itr <= '9')){
            std::cout<<"Input harus angka!";
            return 7;
        }
    }
       
    int parseInt = stoi(input);
        if (parseInt % 2 == 0)
            std::cout<<"Bilangan Genap.";
        else
            std::cout<<"Bilangan Ganjil.";
}
