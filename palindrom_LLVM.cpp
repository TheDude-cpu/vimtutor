#include "Streams.h"

#include <stdlib.h>
#include <stdbool.h>
#include <cstring>
#include <string>
//------don't use library <iostream>-----//
//using namespace std;

std::string Sentence;

bool Palindrom(std::string Sentence){
	std::string InterSenc = "";
       	int Lgth =Sentence.length();
     for (int i = Lgth - 1; i >= 0; i--){
       InterSenc += Sentence[i];
     }
     if (Sentence == InterSenc) {
	 return true;
     }
     else
     return false;
}

int main(){
	llvm::cout<<"Podaj napis :"<<std::fflush;
	llvm::cin>>Sentence;
    if(Palindrom(Sentence)){
	 llvm::cout<<"true"<<std::fflush;
    } else
	   llvm::cout<<"false"<<std::fflush;

    return 0;
}

