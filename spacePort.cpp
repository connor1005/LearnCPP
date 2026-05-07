#include <iostream>

class Starship {
protected:
    int fuel;
public:
    Starship(int starting_fuel){
        fuel = starting_fuel;
    }
    virtual void launch(){
        std::cout << "Launching Starship" << std::endl;
    }
    virtual ~Starship();
};

class CargoShip : public Starship {
public:
    
    CargoShip(int f) : Starship(f) {}

    void launch() override{
        if (fuel < 50){
            throw std::runtime_error("CargoShip launch failed: Low Fuel!");
        }
        std::cout << "CargoShip launched!" << std::endl;
    }
};

class Fighter : public Starship {
public:
    Fighter(int f) : Starship(f) {}

    void launch override(){
        if (fuel < 20){
            throw std::runtime_error("Fighter launch failed: Low Fuel!");
        }
        std::cout << "Fighter launched!" << std::endl;
    }
    ~Fighter();
};

int main() {
    std::vector<std::unique_ptr<Starship>> fleet;
    std::unique_ptr<CargoShip> c1 = std::make_unique<CargoShip>(30);
    std::unique_ptr<Fighter> f1 = std::make_unique<Fighter>(100);
    fleet.push_back(std::move(c1));
    fleet.push_back(std::move(f1));

    for (int i = 0; i < fleet.size(); i++){
        try {
            fleet[i]->launch();
        }
        catch (const std::runtime_error& e){
            std::cout << "ALARM: " << e.what() << "\n";
        }
    }
    return 0;
}
