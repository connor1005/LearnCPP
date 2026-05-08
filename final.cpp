#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>

class Starship {
protected: 
    int fuel;
    
public:
    Starship(int starting_fuel) {
        fuel = starting_fuel;
    }
    virtual void launch() {
        std::cout << "Launching Starship\n";
    }
    virtual ~Starship() {} 

class CargoShip : public Starship {
public:
    CargoShip(int f) : Starship(f) {}

    void launch() override {
        if (fuel < 50) {
            throw std::runtime_error("CargoShip launch failed: Low Fuel!");
        }
        std::cout << "CargoShip launched!\n";
    }
};

class Fighter : public Starship {
public:
    Fighter(int f) : Starship(f) {}

    void launch() override {
        if (fuel < 20) {
            throw std::runtime_error("Fighter launch failed: Low Fuel!");
        }
        std::cout << "Fighter launched!\n";
    }
};

int main() {
    std::vector<std::unique_ptr<Starship>> fleet;
    
    std::unique_ptr<Starship> c1 = std::make_unique<CargoShip>(30);
    std::unique_ptr<Starship> f1 = std::make_unique<Fighter>(100);
    
    fleet.push_back(std::move(c1));
    fleet.push_back(std::move(f1));

    for (int i = 0; i < fleet.size(); i++) {
        try {
            fleet[i]->launch();
        }
        catch (const std::runtime_error& e) {
            std::cout << "ALARM: " << e.what() << "\n";
        }
    }
    return 0;
}
