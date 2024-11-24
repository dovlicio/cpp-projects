#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{   
    public:
        Animal(void);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal(void);

        virtual void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

# endif