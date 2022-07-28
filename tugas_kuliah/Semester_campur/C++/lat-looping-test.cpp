#include <iostream>

int resLoop(){
    int a;
    
    std::cout<<"Enter number: ";
    std::cin>>a;

    for(int b=0;b<a;b++){
        std::cout<<b+(1)<<". Text here!"<<std::endl;
    }

    return a;
}

int repLoop(){
    char c;

    std::cout<<"Ulangi? [Y/n] ";
    std::cin>>c;
    
    return c;
}

int main(){
    do{
        int resultLoop = repLoop();
        resLoop();
        resultLoop;
    }while(repLoop()=='Y' || repLoop()=='y');
    std::cout<<"Exiting. . .";

    return 0;
}
