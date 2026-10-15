
#include "Idk.hpp"

#include <algorithm>
#include <iostream>


void Idk::pushIn(double value)
{
    in.push_back(value);
}

std::size_t Idk::getCount() const
{
    return in.size();
}

void Idk::printNum() const
{
    for (const auto& value : in)
    {
        std::cout << value << " ";
    }

    std::cout << '\n';
}


double Idk::getSum() const
{
    double result = 0.0;

    for (double value : in)
    {
        result += value;
    }

    return result;
}

double Idk::getAvg() const
{
    if (in.empty())
    {
        return 0.0;
    }

    return getSum() / in.size();
}

double Idk::getMax() const
{
    if (in.empty())
    {
        return 0.0;
    }

    double maxValue = in[0];

    for (std::size_t i = 1; i < in.size(); i++)
    {
        if (in[i] > maxValue)
        {
            maxValue = in[i];
        }
    }

    return maxValue;
}

double Idk::getMin() const
{
    if (in.empty())
    {
        return 0.0;
    }

    double minValue = in[0];

    for (std::size_t i = 1; i < in.size(); i++)
    {
        if (in[i] < minValue)
        {
            minValue = in[i];
        }
    }

    return minValue;
}

double Idk::getSecondLargest() const
{
    double maxValue = 0.0;
    double secondMax = 0.0;
    bool hasMax = false;
    bool hasSecondMax = false;

    for (double value : in)
    {
        if (!hasMax || value > maxValue)
        {
            if (hasMax)
            {
                secondMax = maxValue;
                hasSecondMax = true;
            }

            maxValue = value;
            hasMax = true;
        }
        else if (value < maxValue &&
                 (!hasSecondMax || value > secondMax))
        {
            secondMax = value;
            hasSecondMax = true;
        }
    }

    return hasSecondMax ? secondMax : 0.0;
}


bool Idk::contains(double value) const
{
    for (double element : in)
    {
        if (element == value)
        {
            return true;
        }
    }

    return false;
}

std::size_t Idk::countOccurrences(double value) const
{
    std::size_t count = 0;

    for (double element : in)
    {
        if (element == value)
        {
            count++;
        }
    }

    return count;
}


bool Idk::removeAt(std::size_t index)
{
    if (index >= in.size())
    {
        return false;
    }

    in.erase(in.begin() + index);
    return true;
}

std::size_t Idk::removeAllVal(double value)
{
    const std::size_t oldSize = in.size();

    auto newEnd = std::remove(in.begin(), in.end(), value);
    in.erase(newEnd, in.end());

    return oldSize - in.size();
}

bool Idk::removeDuplicates()
{
    bool removed = false;

    for (std::size_t i = 0; i < in.size(); i++)
    {
        for (std::size_t j = i + 1; j < in.size();)
        {
            if (in[i] == in[j])
            {
                in.erase(in.begin() + j);
                removed = true;
            }
            else
            {
                j++;
            }
        }
    }

    return removed;
}

void Idk::clear()
{
    in.clear();
}
