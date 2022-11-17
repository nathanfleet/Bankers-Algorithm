// Nathan Fleet
// Banker's Algorithm
// 11/16/22

#include <stdio.h>
#include "banker.h"
 
int main() {
    // the number of resources and process will never change
    // (5 processes, 3 resources A, B, and C)
    int numResources = 3;
    int numProcesses = 5;
    
    // create 2d array for need
    int need[5][3];
 
    // need = maximum - allocation
    for(int i = 0; i < numProcesses; i++) {
        for(int j = 0; j < numResources; j++) {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }
 
    // if Needi <= Work ==> work = work + allocation
    int work[3];
    work[0] = avaliable[0];
    work[1] = avaliable[1];
    work[2] = avaliable[2];
 
    // array to hold the safe sequence of processes
    int safeSequence[5];
 
    // keep track of the index in the safe sequence
    int sequenceIndex = 0;
 
    // set flag to true if the system is not in a safe state
    int flag = 0;
 
    while(sequenceIndex != numProcesses) {
        for(int i = 0; i < numProcesses; i++) {
            int j = 0;
            // if need is less than work
            if(need[i][j] != -1 && need[i][j] <= work[j] && need[i][j+1] <= work[j+1] && need[i][j+2] <= work[j+2]) {
                // work = work + allocation
               
                // update work
                work[j]   = work[j]   + allocation[i][j];
                work[j+1] = work[j+1] + allocation[i][j+1];
                work[j+2] = work[j+2] + allocation[i][j+2];
 
                // add process to the safe sequence and increment
                safeSequence[sequenceIndex] = i;
                sequenceIndex++;
 
                // show that this process no longer needs resources
                need[i][j] = -1;
            } else {
                // if the program is here it means the system was not in a safe state
                flag = 1;
            }
        }
    }
 
    // tell wether or not the given sequence was safe
    if(flag == 1) {
        printf("The system is NOT in a safe state, the safe sequence is: \n");
    } else {
        printf("The systen IS in a safe state. \n");
    }
    
    // print the safe sequence
    printf("<");
    for(int i = 0; i < numProcesses; i++) {
        if(i != (numProcesses - 1)) {
            printf("P%d, ", safeSequence[i]);
        } else {
            printf("P%d", safeSequence[i]);
        }
    }
    printf(">\n");
 
}
 

