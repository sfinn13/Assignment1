/* 
 * File:   HighPowerRevolver.h
 * Author: Sarita Finn
 */

#include <string>
#include "Weapon.h"

#ifndef HIGHPOWERREVOLVER_H
#define HIGHPOWERREVOLVER_H

/**
 * Defines the behavior of a common sword (hitpoint = 30 {6 bullets, 5 pts each},
 * if armor is less than 20, it ignores all armor points, if armor is greater than
 * or equal to 30, it ignores 10% of the armor points, otherwise, it ignores 40%
 * of the armor points)
 */
class HighPowerRevolver : public Weapon {
public:

    HighPowerRevolver() : Weapon("High power revolver", 30.0) {
    }
    virtual ~HighPowerRevolver() {}; 
    virtual double hit(double armor);

};

#endif /* HIGHPOWERREVOLVER_H */

