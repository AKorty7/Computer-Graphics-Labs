#include <iostream>




int main() 
{
    float angleInDegrees = 45.0f;
    float pi = 3.1415927f;

    float angleInRadians = angleInDegrees * pi / 180.0f;

    std::cout << angleInDegrees << " degrees is equal to "
        << angleInRadians << " radians. " << std::endl;

}

          
