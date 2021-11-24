// BMI Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // BMI Calculator
    
    float weight, height, bmi;
    cout << "Please enter your weight (kg): ";
    cin >> weight;
    cout << "Please enter your height (m): ";
    cin >> height;
    bmi = weight / (height * height);

    if (bmi < 18.5) {
        cout << "You are underweight" << endl;
    }
    else if (bmi > 25) {
        cout << "You are overweight" << endl;
    }
    else {
        cout << "You are of normal weight" << endl;
    } 

    cout << "Your BMI is " << bmi;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
