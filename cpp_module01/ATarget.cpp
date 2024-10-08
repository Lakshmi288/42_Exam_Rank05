#include "ATarget.hpp"

ATarget:: ATarget(){}
ATarget::ATarget(ATarget const &other)
{
    *this = other;
}
ATarget &ATarget::operator=(ATarget const &other)
{
    this->type = other.type;
    
    return (*this);
}

ATarget:: ATarget(std::string const &type)
{
    this->type = type;
    
    
}

ATarget::~ATarget(){}

std::string const &ATarget::getType() const
{
    return(this->type);
}


void ATarget::getHitBySpell(ASpell const &aspell_ref)const
{

    std::cout << this->type << " has been " << aspell_ref.getEffects() << "!" <<std::endl;
    //<TYPE> has been <EFFECTS>!

   // <TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
    // getEffects function.
}
