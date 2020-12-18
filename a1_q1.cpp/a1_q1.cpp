//
//  main.cpp
//  a1_q1.cpp
//
//  Created by Laura Persichini on 2020-09-24.
//  Copyright © 2020 Laura Persichini. All rights reserved.
/*
Student Name: Laura Persichini
ID#: 20894127
 
 SYDE 121 Assignment #1
 File Name: a1_q1.cpp
 
 I hereby declare that this code, submitted for credit for the course
 SYDE121, is a product of my own efforts. This coded solution has
 not been plagiarized from other sources and has not been knowingly
 plagiarized by others.

 Project: Breaking down weights (question #1)
 Purpose: Find the number of weights required for each weight type given an intitial weight.
 Due date: September 25th, 2020
 */

/*
 To test the program logic, I used values of 100, 500, and then 2048.
 I did so to verify that the program was outputting the correct number of each of the
 weight types. Since the weight given input must be an integer, this means the input number can
 range from -2147483648 to 21474783647 (range of values for an integer in C++). However, only
 positive integers should be inputted because negative weights do not make sense.
 For step (1) of the assignment, I recorded an output of- 125 weights: 16, 75 weights:0,
 42 weights:1, 15 weights:0, 1 weights: 6.
 */

#include <iostream>
using namespace std;

// declaring variables
int weight_given;
int weights_125;
int weights_75;
int weights_42;
int weights_15;
int weights_1;

//get input from user
void get_input () {
    cout << "what weight do you want to broken down?: ";
    cin >> weight_given;
}

// calculate the number of weights
void calculate_weights() {
    weights_125 = weight_given / 125;
    weights_75 = ( weight_given % 125 ) / 75;
    weights_42 = ( ( weight_given % 125 ) % 75 ) / 42;
    weights_15 = ( ( ( weight_given % 125 ) % 75 ) % 42 ) / 15;
    weights_1 =  ( ( ( ( weight_given % 125 ) % 75 ) % 42 ) % 15 ) / 1;
}

// outputting the results in a formatted matter to the console
void output_weights () {
    cout << "125 weights:" << weights_125 << endl;
    cout << "75 weights:" << weights_75 << endl;
    cout << "42 weights:" << weights_42 << endl;
    cout << "15 weights:" << weights_15 << endl;
    cout << "1 weights:" << weights_1 << endl;
}

// main function
int main(int argc, const char * argv[]) {
    get_input();
    calculate_weights();
    output_weights();
        
    return 0;
}
