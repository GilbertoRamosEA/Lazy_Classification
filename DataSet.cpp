#include "DataSet.h"

DataSet::DataSet()
{
    x = {25,35,45,20,35,52,23,40,60,48,33};
    y = {40000,60000,80000,20000,120000,18000,95000,62000,100000,220000,150000};
    d = {0,0,0,0,0,0,1,1,1,1,1};
}

std::vector<double> DataSet::getX()
{
    return x;
}

std::vector<double> DataSet::getY()
{
    return y;
}

std::vector<double> DataSet::getD()
{
    return d;
}
