#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap guard("Guardian");

    guard.attack("Enemy");
    guard.takeDamage(30);
    guard.beRepaired(20);
    guard.guardGate();
}