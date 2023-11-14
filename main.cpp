#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    float amount;
    cin >> amount;
    cout << problemSolution1(amount) << endl;
    cout << "Problem 2\n";
    float i, j, k;
    cin >> i >> j>> k;
    cout << problemSolution2(i, j, k)<<endl;
    cout << "Problem 3\n";
    float height;
    char S;
    cin >> height;
    cin >> S;
    cout << problemSolution3(height, S) << endl;
    cout << "Problem 4\n";
    string address;
    cin >> address;
    cout << problemSolution4(address) << endl;
    cout << "Problem 5\n";
    float x, y;
    char operation;
    cin >> x, y, operation;
    cout<<problemSolution5(x, y, operation) << endl;
    return 0;
}