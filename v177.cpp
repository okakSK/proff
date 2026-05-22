#include <iostream>
#include <string>

int main() {
    std::string firstName = "Иван";
    std::string lastName = "Иванов";
    setlocale(LC_ALL, "Russian");
    int firstNameLetters = firstName.length() / 2; 
    int lastNameLetters = lastName.length() / 2;
    std::cout << "Букв в имени: " << firstNameLetters << std::endl;
    std::cout << "Букв в фамилии: " << lastNameLetters << std::endl;
    std::cout << "Всего букв: " << firstNameLetters + lastNameLetters << std::endl;

    return 0;
}
