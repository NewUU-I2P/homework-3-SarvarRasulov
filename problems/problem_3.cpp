#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

    std::string result;
    float H;
    char s;
    H = height;
    s = S;
    if (s == 'M'){
        if (H < 1.7){
            result = "Short";
        }else if(H > 1.85){
            result = "Tall";
        }else{
            result = "Normal";
        }
    }else if (s == 'F'){
        if (H < 1.6){
            result = "Short";
        }else if(H > 1.75){
            result = "Tall";
        }else{
            result = "Normal";
        }

    }
    return result;
    // use return to return your result
    // make use of control flow statements
}