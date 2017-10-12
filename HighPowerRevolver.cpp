/* 
 * File:   HighPowerRevolver.cpp
 * Author: Sarita Finn
 *  
 */

#include "HighPowerRevolver.h"


double HighPowerRevolver::hit(double armor) {
    double perc = armor * 0.6;

    if (armor > 0 && armor < 20) {
        perc = 0;
    }else if (armor >= 30) {
        perc = armor * 0.9;
    }    

    double damage = hitPoints - perc;

    if (damage < 0) {
        return 0;
    }
    return damage;
}
