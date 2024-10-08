#pragma once

#include <iostream>

class ASpell;

class ATarget
{
    private:
        std::string type;

    public:
        ATarget();
        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);

        ATarget(std::string const &types);
        virtual ~ATarget();
        std::string const &getType() const;

        void getHitBySpell(ASpell const &aspell_ref)const;

        //add to your ATarget a getHitBySpell function that takes a reference to
        // constant ASpell.

        virtual  ATarget *clone() const = 0;

  
};
#include "ASpell.hpp"