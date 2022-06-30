//progress penambahan bilangan dengan menggunakan fungsi
#include <iostream>

int bilFirst(){
    int a = 20;
    return a;
}

int bilSecond(){
    int b = 100;
    return b;
}

int main(){
    int firBil;
    int secBil;

    firBil =  bilFirst();
    secBil = bilSecond();

    std::cout<<firBil+secBil;

    return 0;
}
