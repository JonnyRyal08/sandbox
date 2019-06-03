#include <iostream>

void process(char);

int main() {
    char test[] = "This exercise is fun!";
    char *x;
    x = test;
    reverse(*x);

    return 0;
}
void reverse(char *str){
    if (*str == '\0')
        return;
    else{
        reverse(str + 1);
        std::cout << *str;
    }
}
string process_string(string str){
    if (str.length() == 1){
        return str;
    }
    else{
        char first_char = str[0];
        return first_char + process_string(str.substr(1, str.length() - 1));
    }
}
int main()
{
    std:string greeting = "Hello";
    std::cout << process_string(greeting) << "\n";
    int ascii_of_char = (int)greeting[0];
    int ascii_of_encrypted_char = ascii_of_char + 3;

    std::cout << (char)ascii_of_encrypted_char << "\n";
    std:cout << process_string(greeting) << "\n";
    return 0;
}

std::string process_string(std::string str) {
    if (str.length() == 1) {
        return str;
    }
    else {
        char first_char = str[0];
        return first_char + process_string(str.substr(1, str.length() - 1));
    }
}