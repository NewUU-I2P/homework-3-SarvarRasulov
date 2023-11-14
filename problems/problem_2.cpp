float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    float price1, price2, price3;
    price1=i;
    price2=j;
    price3=k;
    result = (price1 > price2) ? ((price1 > price3) ? price1 : price3) : ((price2 > price3) ? price2 : price3);
    return result;
}