// Nathan Fleet
// Input file for banker's algorithm data
// 11/16/22

#ifndef BANKER_H
#define BANKER_H

// 2D array to hold allocation values

                       // A  B  C
int allocation[5][3] = {{ 0, 1, 0 },  // P0
                        { 2, 0, 0 },  // P1
                        { 3, 0, 2 },  // P2
                        { 2, 1, 1 },  // P3
                        { 0, 0, 2 }}; // P4

// 2D array to hold maximum values

                    // A  B  C
int maximum[5][3] = {{ 7, 5, 3 },  // P0
                     { 3, 2, 2 },  // P1
                     { 9, 0, 2 },  // P2
                     { 2, 2, 2 },  // P3
                     { 4, 3, 3 }}; // P4

// 2D array to hold avaliable values

                  // A  B  C
int avaliable[3] = { 3, 3, 2 };

#endif