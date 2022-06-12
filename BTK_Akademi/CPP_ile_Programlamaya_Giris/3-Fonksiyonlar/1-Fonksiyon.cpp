#include <iostream>

void message(char msg){
    std::cout << msg << "\n";
}

int main(){
    char msg;

    std::cout << "Enter a Char: "; std::cin >> msg;
    message(msg);

    return 0;
}
