#ifndef QS_H
#define QS_H
#include <iostream>

using namespace std;

class QS {
    public:
        void swap(int*,int*);
        int partition(int[],int, int);
        void quickSort (int[], int, int);
        void print(int[],int);
};

#endif