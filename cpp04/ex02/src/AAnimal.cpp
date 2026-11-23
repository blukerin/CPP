#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : _type("None") {
  std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const  AAnimal &other) : _type(other._type){
  std::cout << "Copy AAnimal constructor called" << std::endl;
}

AAnimal  &AAnimal::operator=(const AAnimal &other) {
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

AAnimal::~AAnimal() {
  std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const {
  return (this->_type);
}

