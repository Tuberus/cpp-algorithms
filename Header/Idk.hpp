
#pragma once

#include <cstddef>
#include <vector>
#include <string>

class Idk
{
public:
    void pushInDouble(double value);
    void pushInStr(std::string input);

    std::size_t getCount() const;
    void printNum() const;

    double getSum() const;
    double getAvg() const;
    double getMax() const;
    double getMin() const;
    double getSecondLargest() const;

    bool contains(double value) const;
    std::size_t countOccurrences(double value) const;

    bool removeAt(std::size_t index);
    std::size_t removeAllVal(double value);
    bool removeDuplicates();
    std::string longestcommonPrefix() const;

    void clear();

private:
    std::vector<double> in;
    std::vector<std::string> str;
};
