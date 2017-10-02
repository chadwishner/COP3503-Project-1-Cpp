//Chad Wishner
//6631-5393
//Testing Git

#include <iostream>

using namespace std;

/* Take user input
 @return int
 */
int takeUserInput(){
    bool inputCheck = false;
    
    cout << "Enter the size of a magic square: ";

    //Check if user imputed an appropriate number
    while (!inputCheck){
        int size;
        cin >> size;
        if (size == 3 || size == 5 || size == 7 || size == 9 || size == 11 || size == 13 || size == 15){
            inputCheck = true;
            return size;
        } else {
            cout << "Please enter a number 3, 5, 7, 9, 11, 13, or 15";
        }
    }
    return 0;
}

/* Create Square
 @parameters int ** square, int size
 */
void createSquare (int ** square, int size){
    
    //Starting positions
    int newRow = size - 1;
    int newCol = size / 2;
    
    //Fill in the desired size array one value at a time
    for (int num = 1; num <= size * size; num++){
        
        //Start 1 in the first position
        square [newRow][newCol] = num;
        
        //Find the next position
        int nextRow = (newRow + 1) % size;
        int nextCol = (newCol + 1) % size;
        
        //if the position is not filled ie. 0, then save that position into the newRow and newCol
        if (square [nextRow][nextCol] == 0){
            newRow = nextRow;
            newCol = nextCol;
            // If that position was used, use the position above the most recent one
        } else {
            newRow = (newRow - 1 + size) % size;
        }
    }
}

/* Print 5 different squares
 @parameters int ** square, int size
 */
void printFiveSquares (int ** square, int size){
    
    //Format to Print Magic Square 1
    cout << "\n\nMagic Square #1 is:\n\n";
    
    //Print Magic Square 1 with formatting
    for (int row = 0; row < size; row++){
        for (int col = 0; col <size; col++){
            cout << "\t";
            cout << square [row][col];
        }
        cout << "\n";
    }
    
    //Print out the sums for the respective Row/Col/Diag
    cout << "\nChecking the sums of every row:\t\t\t";
    for (int row = 0; row < size; row ++){
        int sum = 0;
        for (int col = 0; col < size; col ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every column:\t\t";
    for (int col = 0; col < size; col ++){
        int sum = 0;
        for (int row = 0; row < size; row ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every diagnoal:\t";
    int sum = 0;
    for(int diag = 0; diag < size; diag++){
        sum += square[diag][diag];
    }
    cout << sum;
    cout << "\t";
    sum = 0;
    for(int diag = size-1, nol = 0; nol < size; diag--, nol++){
        sum += square[diag][nol];
    }
    cout << sum;
    cout << "\t";
    
    //Format to Print Magic Square 2
    cout << "\n\nMagic Square #2 is:\n\n";
    
    //Print Magic Square 1 with formatting
    for (int row = 0; row < size; row++){
        for (int col = 0; col <size; col++){
            cout << "\t";
            cout << square [col][row];
        }
        cout << "\n";
    }
    
    //Print out the sums for the respective Row/Col/Diag
    cout << "\nChecking the sums of every row:\t\t\t";
    for (int row = 0; row < size; row ++){
        int sum = 0;
        for (int col = 0; col < size; col ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every column:\t\t";
    for (int col = 0; col < size; col ++){
        int sum = 0;
        for (int row = 0; row < size; row ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every diagnoal:\t";
    sum = 0;
    for(int diag = 0; diag < size; diag++){
        sum += square[diag][diag];
    }
    cout << sum;
    cout << "\t";
    sum = 0;
    for(int diag = size-1, nol = 0; nol < size; diag--, nol++){
        sum += square[diag][nol];
    }
    cout << sum;
    cout << "\t";
    
    //Format to Print Magic Square 3
    cout << "\n\nMagic Square #3 is:\n\n";
    
    //Print Magic Square 1 with formatting
    for (int row = size - 1; row >= 0; row--){
        for (int col = size - 1; col >= 0; col--){
            cout << "\t";
            cout << square [row][col];
        }
        cout << "\n";
    }
    
    //Print out the sums for the respective Row/Col/Diag
    cout << "\nChecking the sums of every row:\t\t\t";
    for (int row = 0; row < size; row ++){
        int sum = 0;
        for (int col = 0; col < size; col ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every column:\t\t";
    for (int col = 0; col < size; col ++){
        int sum = 0;
        for (int row = 0; row < size; row ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every diagnoal:\t";
    sum = 0;
    for(int diag = 0; diag < size; diag++){
        sum += square[diag][diag];
    }
    cout << sum;
    cout << "\t";
    sum = 0;
    for(int diag = size-1, nol = 0; nol < size; diag--, nol++){
        sum += square[diag][nol];
    }
    cout << sum;
    cout << "\t";
    
    //Format to Print Magic Square 4
    cout << "\n\nMagic Square #4 is:\n\n";
    
    //Print Magic Square 1 with formatting
    for (int row = size - 1; row >= 0; row--){
        for (int col = size - 1; col >= 0; col--){
            cout << "\t";
            cout << square [col][row];
        }
        cout << "\n";
    }
    
    //Print out the sums for the respective Row/Col/Diag
    cout << "\nChecking the sums of every row:\t\t\t";
    for (int row = 0; row < size; row ++){
        int sum = 0;
        for (int col = 0; col < size; col ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every column:\t\t";
    for (int col = 0; col < size; col ++){
        int sum = 0;
        for (int row = 0; row < size; row ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every diagnoal:\t";
    sum = 0;
    for(int diag = 0; diag < size; diag++){
        sum += square[diag][diag];
    }
    cout << sum;
    cout << "\t";
    sum = 0;
    for(int diag = size-1, nol = 0; nol < size; diag--, nol++){
        sum += square[diag][nol];
    }
    cout << sum;
    cout << "\t";
    
    //Format to Print Magic Square 5
    cout << "\n\nMagic Square #5 is:\n\n";
    
    //Print Magic Square 1 with formatting
    for (int row = 0; row < size; row++){
        for (int col = size - 1; col >= 0; col--){
            cout << "\t";
            cout << square [row][col];
        }
        cout << "\n";
    }
    
    //Print out the sums for the respective Row/Col/Diag
    cout << "\nChecking the sums of every row:\t\t\t";
    for (int row = 0; row < size; row ++){
        int sum = 0;
        for (int col = 0; col < size; col ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every column:\t\t";
    for (int col = 0; col < size; col ++){
        int sum = 0;
        for (int row = 0; row < size; row ++){
            sum += square[row][col];
        }
        cout << sum;
        cout << "\t";
    }
    cout << "\nChecking the sums of every diagnoal:\t";
    sum = 0;
    for(int diag = 0; diag < size; diag++){
        sum += square[diag][diag];
    }
    cout << sum;
    cout << "\t";
    sum = 0;
    for(int diag = size-1, nol = 0; nol < size; diag--, nol++){
        sum += square[diag][nol];
    }
    cout << sum;
    cout << "\t";
    cout << "\n\n";
}
