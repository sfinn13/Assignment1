/* 
 * File:   SimpleAxe.h
 * Author: Sarita Finn
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, if armor is greater than 0 and
 * and less than 20, the axe will ignore all the armor points)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple axe", 60.0) {
    }
    virtual ~SimpleAxe() {}; 
    virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */

