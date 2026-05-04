#include <iostream>

bool transferFunds(double& sender_balance, double& receiver_balance, double amount) {
    if (sender_balance < amount) {
        return false;
    }
    sender_balance -= amount;
    receiver_balance += amount;
    return true;
}
