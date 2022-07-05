#include <sstream>
#include <vector>
#include <iostream>
#include <string>

std::string *parseInts(std::string str){
    int i=0;
    std::stringstream ss(str);
    std::string word, sentence[20];
    
    while(std::getline(ss, word, ',')){
        std::cout << word;
        sentence= (std::string *)realloc(sentence, )
        sentence[i]= word;
        i++;
    }

	return sentence;
}

int main(){
    std::string str;
    std::cin >> str;
    std::string *integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++){
        std::cout << integers[i] << "\n";
    }
    return 0;
}