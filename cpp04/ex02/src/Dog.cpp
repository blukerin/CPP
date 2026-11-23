#include "../includes/Dog.hpp"

Dog::Dog() : AAnimal(), _brain(new Brain()) {
  this->_type = "Dog";
  std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other), _brain(new Brain(*other._brain)) {
  std::cout << "Copy dog constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  if (this != &other) {
    AAnimal::operator=(other);
    delete(this->_brain);
    this->_brain = new Brain(*other._brain);
  }
  return (*this);
}

Dog::~Dog() {
  delete(this->_brain);
  std::cout << "Dog destructor called" << std::endl;
}

void  Dog::makeSound(void) const {
  std::cout << "Bark!" << std::endl;
}