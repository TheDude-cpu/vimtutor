#include <iostream>
#include<cstring>
//#include<conio.h>

//using namespace std;

std::string sentence;

   bool Palindrom(std::string sentence){
	   std::string inter_sent = "";

     int lgth = sentence.length();

     for (int i =lgth  - 1; i >= 0; i--){
       inter_sent += sentence[i];
     }

     if (sentence == inter_sent)
	return true;  
	else
     	return false;
   }




int main(){
	std::cout<<"Podaj napis :"<<std::endl;
    getline(std::cin,sentence);
    {if(Palindrom(sentence)) std::cout<<"true"<<std::endl;
    else
        std::cout<<"false"<<std::endl;
    }
    return 0;
}
