float problemSolution5(float x, float y, char operation) {
    float result, num1, num2;
    char op;
    num1 = x;
    num2 = y;
    op = operation;
    switch (op) {
        case '+':
            result = num1 + num2;
            return result;
        case '-':
            result = num1 - num2;
            return result;
        case '*':
            result = num1 * num2;
            return result;
        case '/':
            result = num1 / num2;
            return result;
    }
   // write your code here



}
