/*
 * MIPS_Assignment_4.cpp
 *
 *  Created on: Nov 12, 2014
 *      Author: Adam
 */
# include <iostream>

using namespace std;

int main() {
    int Array[10] = {22, 22, 34, 33, 88, 88, 21, 8, 22, 22};

    int min;                    //variable for minimum value stored in array
    int max;                    //variable for maximum value stored in array
    int min_index;
    int max_index;

    min_index = 0;
    min = Array[0];
    for (int i = 1; i <= 9; i++) {
        if (Array[i] < min) {
            min = Array[i];
            min_index = i;
        }
    }

    max_index = 0;
    max = Array[0];
    for (int i = 1; i <= 9; i++) {
        if (Array[i] > max) {
            max = Array[i];
            max_index = i;
        }
    }

    cout << "The min is: " << min << endl;
    cout << "In index number: " << min_index << endl;
    cout << "The max is: " << max << endl;
    cout << "In index number: " << max_index << endl;

    return 0;
}




