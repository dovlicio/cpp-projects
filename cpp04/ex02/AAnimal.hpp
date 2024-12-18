#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal
{   
    public:
        AAnimal(void);
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal(void);

        virtual void makeSound() const = 0;
        std::string getType() const;
    protected:
        std::string _type;
};

# endif