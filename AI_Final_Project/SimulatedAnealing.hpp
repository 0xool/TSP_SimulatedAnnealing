//
//  SimulatedAnealing.hpp
//  AI_Final_Project
//
//  Created by cyrus refahi on 6/5/17.
//  Copyright © 2017 cyrus refahi. All rights reserved.
//

#ifndef SimulatedAnealing_hpp
#define SimulatedAnealing_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>

#define TEMPRETURE  1000
#define COOLINGRATE  0.3

class SimulatedAnealing {
    
    
public:
    
    int T = 1000;
    SimulatedAnealing();
    SimulatedAnealing(int solutionSize);
    
    float badStepChance();
    int generateRandomSolution();
    float acceptanceRate(int cost , int currentCost , float temp);
    

    
    
    
    
    
};







#endif /* SimulatedAnealing_hpp */
