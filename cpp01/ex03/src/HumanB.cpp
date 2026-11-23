#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) {
  this->_name = name;
  this->_weapon = NULL;
}

HumanB::~HumanB(void) {}

void  HumanB::setWeapon(Weapon& weapon) {
  this->_weapon = &weapon;
}

void  HumanB::setName(std::string name) {
  this->_name = name;
}

void  HumanB::attack(void) {
  if (this->_weapon)
    std::cout << this->_name << " attacks with their weapon " << this->_weapon->getType() << std::endl;
  else
    std::cout << this->_name << " can't attack, there is no weapon equipped." << std::endl;
}