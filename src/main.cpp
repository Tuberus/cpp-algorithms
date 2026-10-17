#include <iostream>
#include "Idk.hpp"

int main()
{
    Idk stray;
    // std::vector<double> value = {1.0, 23.2, 56.1};
    stray.pushInDouble(23.3);
    stray.pushInDouble(12.3);
    stray.pushInDouble(9.88);

    stray.pushInStr("bat");
    stray.pushInStr("bag");
    stray.pushInStr("bank");
    stray.pushInStr("band");

    // stray.pushIn(-25.44);

  std::string x = stray.longestcommonPrefix();
  std::cout << x << std::endl;

    // std::cout << stray.getSum() << std::endl;
    // std::cout << stray.getAvg() << std::endl;
    // std::cout << stray.getMax();

    stray.longestcommonPrefix();

    return 0;
}