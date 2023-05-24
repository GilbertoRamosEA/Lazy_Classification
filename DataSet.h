#ifndef DATASET_H
#define DATASET_H
#include <vector>

class DataSet
{
    private:
        std::vector<double> x;
        std::vector<double> y;
        std::vector<double> d;

    public:
        DataSet();
        std::vector<double> getX();
        std::vector<double> getY();
        std::vector<double> getD();

};

#endif // DATASET_H
