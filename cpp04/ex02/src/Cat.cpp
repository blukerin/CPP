#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal(), _brain(new Brain()) {
  this->_type = "Cat";
  std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other), _brain(new Brain(*other._brain)) {
  std::cout << "Copy cat constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    AAnimal::operator=(other);
    delete(this->_brain);
    this->_brain = new Brain(*other._brain);
  }
  return (*this);
}

Cat::~Cat() {
  delete(this->_brain);
  std::cout << "Cat destructor called" << std::endl;
}

void  Cat::makeSound(void) const {
  std::cout << "Meow!" << std::endl;
}