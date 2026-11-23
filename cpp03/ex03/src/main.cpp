#include "../includes/DiamondTrap.hpp"

int main() {
  std::cout << "-- ScavTrap abilities --" << std::endl;
    
  ScavTrap scav("Ash");
  scav.attack("a cowboy");
  scav.takeDamage(20);
  scav.beRepaired(10);
  scav.guardGate();

  std::cout << "\n-- FragTrap abilities --" << std::endl;
    
  FragTrap frag("Foxy");
  frag.attack("a polar bear");
  frag.takeDamage(50);
  frag.beRepaired(20);
  frag.highFivesGuys();

  std::cout << "\n-- Diamond Abilities --" << std::endl;
    
  DiamondTrap diamond("Goku");
    
  std::cout << "\n-- Who am I --" << std::endl;
  diamond.whoAmI();
    
  std::cout << "\nAttack" << std::endl;
  diamond.attack("Freezer");
    
  std::cout << "\n-- Father abilities --" << std::endl;
  diamond.guardGate();
  diamond.highFivesGuys();

  std::cout << "\n-- Taking damage and healing --" << std::endl;
  diamond.takeDamage(80);
  diamond.beRepaired(10);


  std::cout << "\n-- Cloning Diamond --" << std::endl;
    
  DiamondTrap clon_diamond(diamond);
  clon_diamond.whoAmI();

  std::cout << "\n-- Destructors --" << std::endl;
  return (0);
}