#include <iostream>
#include "QS.hpp"
#include <vector>
using namespace std;

void QS::swap(int* ii, int*jj) 
{ 
    int temp = *ii; 
    *ii = *jj; 
    *jj = temp; 
} 

int QS::partition (int A[], int p, int r) 
{   int x = A[r];
    int ii = p-1;

    for (int jj = p; jj<= r-1; jj++){
        
        if (A[jj] <= x){     
            ii++;
            swap(&A[ii], & A[jj]);
        }
    }

    swap(&A[ii+1], &A[r]);
    return ii+1; 
} 
  

void QS::quickSort(int arr[], int min, int max) 
{  
    if (min < max) 
    { 

        int pi = partition(arr, min, max); 
  
        quickSort(arr, min, pi - 1); 
        quickSort(arr, pi + 1, max); 
    } 
} 


void QS::print(int arr[], int a){
    for (int ii = 0; ii<a; ii++){
        if(arr[ii]!= arr[ii+1]){
            cout<< arr[ii]<<" ";}
    }
}