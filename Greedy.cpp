// Developer: Kali Ingco
// Date: 09/29/2024
// Assignment: Project 1
// Class: CPSC 335 Section 04
// Notes: Arrays city_distances and gas, as well as int mpg are already initialized for testing purposes, 
// they can be changed for further testing. The algorithm used in this program is the Greedy Algorithm. 

#include <iostream>
#include <string.h>

using namespace std;


int main(){

    int city_distances[5]= {5,25,15,10,15};
    int gas[5]= {1,2,1,0,3};
    int mpg = 10;

    int k = sizeof(city_distances) /sizeof(city_distances[0]);
    int Gas = 0;       //int to keep track of how much gas is in the car
    int Mpg = 0;           //int to multiply with fuel 
    int city = 0;      //int to return starting city
    int leftoverFuel = 0;      //int for keeping track of excess fuel

    for(int i=0 ; i < k; i++){ //add up all elements in array gas and cost
        Mpg = mpg * gas[i]; //multiply mpg* fuel to get real number of gas 
        leftoverFuel = Mpg - city_distances[i]; //subtract distance from mpg to get remaining gas
        
        Gas = leftoverFuel + (Mpg - city_distances[i]); //keeps track of gas
        if(Gas < 0){ //if Gas is less than 0, not possible starting city so reset fuel and increment city by 1
        Gas = 0; //reset Gas
        city = i + 1; //increment through array
        }
    }
    cout << city; //there is a guarantee for a starting city so no need to check for invalid case
    return 0;
}
