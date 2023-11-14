#include <iostream>
using namespace std;
float problemSolution1(float consumed_water) {
    float cost, volume;
    // write your code here
    volume = consumed_water;
    if (volume<=30){
        cost = 13.0 + volume * 0.4;
    }else if(volume<=50){
        cost = 13.0 + 30*0.4+(volume-30)*0.12;
    }else if(volume<=60){
        cost = 13.0 + 30*0.4+ 20*0.12 + (volume-50)*1.4;
    }else{
        cost = 13.0 + 30*0.4+ 20*0.12 + 10*1.4+(volume-60)*1.5;
    }

    return cost;
}

