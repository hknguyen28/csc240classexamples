#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "MS.hpp"
#include "IS.hpp"
#include "QS.hpp"

using namespace std; 

int main() {
    MS ms;
    IS is;
    QS qs;
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    cout<<"IS: \n";

    is.insertionSort(arr, n,1);
    is.print(arr,n);



    
    return 0; 
}
