#include <iostream>
    
int a;
int f(const void *){
    std::cout<<1;
}

int main(){
    const char *bar = "bar";
    if(f("foo") == 0){
        std::cout<<a;
    }
    static int a;
    if(a==1){
        std::cout<<3;
    }
}
