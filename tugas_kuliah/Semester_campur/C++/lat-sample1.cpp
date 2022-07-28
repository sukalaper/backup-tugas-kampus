#include <iostream>

int main(){
    std::string s = "a4l2iLlj3j4jf4f1";
    int i, coding=1;
    for(i=2;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9' && i<s.length()-11){
            std::cout<<s[i];
        }
    }

    return 0;
}
