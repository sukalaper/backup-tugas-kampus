//progress belajar variable global dan lokal

#include <iostream>
#define NewLine std::cout<<std::endl;

unsigned char g_Var[50] = "Ini adalah variable Global.";       
    void anotherLyfe(){
        std::cout<<g_Var;
    }

int main(){                
    anotherLyfe();
    NewLine

    std::string multip_Lyfe = "Ini adalah variable Lokal.";
    std::cout<<multip_Lyfe;
    NewLine
    NewLine
    
    int a = 0;
    bool check = true;
    bool uncheck = false;
                
    std::cout<<"Masukan angka [1-99] : ";
    std::cin>>a;
        
    if(a < 100){
        std::cout<<"True : "<<check;                      
    }else if(a > 100){
        std::cout<<"False : "<<uncheck;
    }else{
        std::cout<<"Error!";
    }

    return 0;
}
