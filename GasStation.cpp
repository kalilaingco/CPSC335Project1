#include <vector>
#include <iostream>
#include <string.h>

using namespace std;


int main(){

    vector<int> city_distances = {5, 25, 15, 10, 15};
    vector<int> fuel = {1, 2, 1, 0, 3};
    int mpg = 10;

    int Fuel = 0;       //int to keep track of how much fuel is in the car
    int Distance = 0;   //int to keep track of the distances between cities
    int Mpg = 0;           //int to multiply with fuel 
    int startCity = 0;      //int to return starting city
    int leftoverFuel = 0;      //int for keeping track of excess fuel

    for(int i=0 ; i< fuel.size(); i++){ //add up all elements in array gas and cost
        Mpg = mpg * fuel[i]; //multiply mpg* fuel to get real number of gas 
        leftoverFuel = Mpg - city_distances[i]; //subtract distance from mpg to get remaining fuel
        
        Fuel = leftoverFuel + (Mpg - city_distances[i]); 
        if(Fuel < 0){ //if fuel is less than 0, not possible starting city so reset fuel and increment city by 1
        Fuel = 0; //reset fuel
        startCity = i + 1; //increment through array
        }
    }

    if(leftoverFuel < 0){ //if leftover fuel is less than 0, no possible solution so return -1
        return -1;
    } else{
    cout << "You should start at the city indexed at: " + startCity;
    return startCity;
    }
    
}
