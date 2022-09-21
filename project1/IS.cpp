#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include "IS.hpp"
using namespace std;


void IS::insertionSort(int arr[], int a, FILE *fp2, int printEWC){
    int node;
    int jj;
    int i = 0;
    
    fp2 = fopen ("input.txt","r");
    fscanf(fp2, "%d\n", )

    for (int ii = 1; ii <a; ii++) {
        
        node = arr[ii];
        jj = ii-1;
        while (jj>=0 && arr[jj] > node){
            if (printEWC ==1){
                printf("EWC: %d > %d?\n", arr[jj], node);
            }
            arr[jj+1] = arr[jj];
            jj= jj-1;
        }
        arr[jj+1] = node;
        }}

void IS::print (int arr[], int a){

    for (int ii = 0; ii<a; ii++){
        if(arr[ii]!= arr[ii+1]){
            cout<< arr[ii]<<" ";}
    }}
