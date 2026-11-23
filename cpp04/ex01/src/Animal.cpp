#include "../includes/Animal.hpp"

Animal::Animal() : _type("None") {
  std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(const  Animal &other) : _type(other._type){
  std::cout << "Copy animal constructor called" << std::endl;
}

Animal  &Animal::operator=(const Animal &other) {
  if (this != &other)
    this->_type = other._type;
  return (*this);
}

Animal::~Animal() {
  std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const {
  return (this->_type);
}

void  Animal::makeSound(void) const {
  std::cout << "ANIMAL SOUNDS" << std::endl;
}