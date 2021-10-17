#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

# define NUM_IDEAS 100

class Brain {
protected:
    std::string _ideas[NUM_IDEAS];
public:
    Brain();
    Brain(const Brain& other);
    ~Brain();

    Brain& operator= (const Brain& other);
    std::string getIdeas(int i) const;
    void setIdea(const std::string& line);
};

#endif //BRAIN_HPP
