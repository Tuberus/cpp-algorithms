#include <iostream>
#include "Idk.hpp"

int main()
{
    Idk stray;
    // std::vector<double> value = {1.0, 23.2, 56.1};
    stray.pushIn(23.5);
    stray.pushIn(12.3);
    stray.pushIn(9.88);
    // stray.pushIn(-25.44);

    std::cout << stray.getSum() << std::endl;
    std::cout << stray.getAvg() << std::endl;
    std::cout << stray.getMax();

    return 0;
}