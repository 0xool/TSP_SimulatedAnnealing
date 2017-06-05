//
//  SimulatedAnealing.cpp
//  AI_Final_Project
//
//  Created by cyrus refahi on 6/5/17.
//  Copyright © 2017 cyrus refahi. All rights reserved.
//

#include "SimulatedAnealing.hpp"




SimulatedAnealing::SimulatedAnealing()
{
    
    
}
//=======================================================================================================
SimulatedAnealing::SimulatedAnealing(int solutionSize)
{
    
    double temp = TEMPRETURE;
    double coolingRate = COOLINGRATE;
    
    //here is the core of the algorithm after each instance a new solution is generated and chosen based on the probability and temp in reconfigured.
    while (temp > 1) {
        //first we need a new solution
        
        
        
        
        //we check the current solution with the newly generated solution.
        
        
        //we chose whether to chose the bad solution or not!!
        
        
        /*
         if acceptanceRate(<#int cost#>, <#int currentCost#>, <#float temp#>)
        {
            currentSolution = newSolution;
        }
         */
        
        //keep track of the best solution found.
        
        
        
        
        
        
        //reconfigure temp for the next instance the less this get the less we chose the bad solution.
        //cool system
        temp *= 1 - coolingRate;
        
    }
        
        
        
        
        
        
        
        
        
        

    
    
    
    
    
    
    
    
    
    
    
    
    std::cout << solutionSize;
    
}
//=======================================================================================================
float SimulatedAnealing::acceptanceRate(int cost , int currentCost , float temp)
{
    
    
    if (currentCost < cost){
        return 1;
    }else {
        return exp((cost - currentCost) / temp);
    }
    
    return 0;
    
}
//=======================================================================================================
float SimulatedAnealing::badStepChance()
{
    
    
    return 0;
    
}
//=======================================================================================================
int SimulatedAnealing::generateRandomSolution()
{
    
    
    
    
    return 0;
    
}
//=======================================================================================================



