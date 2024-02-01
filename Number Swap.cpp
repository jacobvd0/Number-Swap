#include <iostream>

int main()
{


    int x = 13;
    int y = 24;
    
    // <Your work goes here>
    
    int tempNum = x;
    x = y;
    y = tempNum;
    
    std::cout << "Number Swap)" << std::endl;
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
}
