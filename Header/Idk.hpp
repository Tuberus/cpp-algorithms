
#pragma once

#include <cstddef>
#include <vector>

class Idk
{
public:
    void pushIn(double value);

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

    void clear();

private:
    std::vector<double> in;
};
