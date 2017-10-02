//Chad Wishner
//6631-5393

//No longer Testing Git
#include <iostream>
#include "pa1.h"

using namespace std;

//Create Methods
int takeUserInput();
void createSquare (int ** square, int size);
void printFiveSquares (int ** square, int size);

/* Main method
 @return int
 */
int main(){
    
    //Create and initialize size variable
    int size = 0;
    
    //Set size to user specified input
    size = takeUserInput();
    
    //Create a pointer to a 2D array of size specified
    int ** square = new int * [size];
    
    for (int row = 0; row < size; row++){
        square [row] = new int[size];
    }
    
    //Set all values in square to 0
    for (int row = 0; row < size; row++){
        for (int col = 0; col < size; col++){
            square [row][col] = 0;
        }
    }
    
    //Call function to create magic square
    createSquare(square, size);
    
    //Call Function to
    printFiveSquares (square, size);
    
    return 0;
}
