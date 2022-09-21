#include <iostream>
#include "MS.hpp"
using namespace std;

void MS::merge (int arr[], int left, int mid, int right) {

    int sub_arr1 = mid - left +1;
    int sub_arr2 = right - mid;


    int * leftArr = new int [sub_arr1];
    int * rightArr = new int [sub_arr2];

    for (int ii = 0; ii < sub_arr1; ii++){
        leftArr[ii] = arr[left+ii];}

    for (int ii = 0; ii<sub_arr2; ii++) {
        rightArr[ii] = arr[mid+1+ii];
    }

    int index1 = 0;
    int index2 = 0;
    int indexMrge = left;

    while (index1 < sub_arr1 && index2 < sub_arr2) {
        if (leftArr[index1] <= rightArr[index2]){
            printf("EWC: %d <= %d?\n", leftArr[index1],rightArr[index2]);
            arr[indexMrge] = leftArr[index1];
            index1++;
        }
        else {
            arr[indexMrge] = rightArr[index2];
            index2++;
        }
        indexMrge++;
    }
    
    while (index1<sub_arr1){
        arr[indexMrge] = leftArr[index1];
        index1++;
        indexMrge++;
    }
    while (index2<sub_arr2){
        arr[indexMrge] = rightArr[index2];
        index2++;
        indexMrge++;

    }

    delete[] leftArr;
    delete[] rightArr;
}


void MS::mergeSort (int arr[], int head, int tail){
    if (head >= tail){
        return;
    }

    int mid = head + (tail - head) / 2;
    mergeSort(arr, head, mid);
    mergeSort(arr, mid+1, tail);
    merge (arr, head, mid,tail);
    
}

void MS::print(int arr[], int size)
{
    for (int ii = 0; ii < size; ii++)
        if(arr[ii]!= arr[ii+1]){
            cout<< arr[ii]<<" ";}
}
  
