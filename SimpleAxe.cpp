/* 
 * File:   SimpleAxe.cpp
 * Author: Sarita Finn
 *  
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor) {
    double damage = hitPoints - armor;
	
    if (armor > 0 && armor < 20) {
        damage = hitPoints;    
    }

    if (damage < 0) {
        return 0;
    }
    return damage;
}
