//progress pembuatan pyramid pattern

#include <iostream>

int myPyrm(){
    int a;

    std::cout<<"Enter number: ";
    std::cin>>a;
    for(int b=1; b<=a; b++){
        for(int c=1; c<=b; c++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return a;
}

int reProg(){
    char u;

    std::cout<<"Again?! [Y/n] : ";
    std::cin>>u;
    return u;
}

int main(){
    char resPyrm;
    do{
        system("clear");
        myPyrm();
        resPyrm = reProg();
    }
    while(resPyrm=='y' || resPyrm=='Y');
    std::cout<<"Exiting . . .";

    return 0;
}
