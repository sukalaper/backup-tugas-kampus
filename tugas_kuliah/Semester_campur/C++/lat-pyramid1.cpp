//test program sederhana dengan c++

#include <iostream>

int myPyrm(){
    int a;

    std::cout<<"Enter number: ";
    std::cin>>a;
    for(int b=1; b<a; b++){
        for(int c=1; c<b; c++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

    return a;
}

int main(){
    myPyrm();
}
