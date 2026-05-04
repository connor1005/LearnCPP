#include <iostream>

int main(){
    int numPets;
    std::cout << "How many pets do you have? ";
    std::cin >> numPets;

    std::cin.ignore();

    for (int i = 0; i < numPets; i++){
        std::string name;
        std::cout << "Enter pet name: ";
        std::getline(std::cin, name);
        std::cout << "Pet " << i+1 << " is " << name << "\n";
    }
    return 0;
}

