#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{   
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual ~WrongAnimal(void);

        virtual void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

# endif