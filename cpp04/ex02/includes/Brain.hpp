#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
  private:
    std::string _ideas[100];

  public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();

    void setIdea(const std::string& idea, int index);

    std::string getIdea(int index);
};

#endif