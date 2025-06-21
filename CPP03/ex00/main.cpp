#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("amiral Ackbar");

    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Another enemy");
}