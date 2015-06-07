//This is my friendly calculator

#include <iostream>
using namespace std;

float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);


int main()
{
    char ans;
    cout << "Welcome to the friendly calculator" << endl << endl;

     //Calculator
    do
    {
        char op;
        cout << "Would you like to use this calculator? Enter y or n: ";
        cin >> ans;

        //Stores numbers entered by user
        float first, second;
        cout << "Please enter your first number: ";

        // First number entered and stored
        cin >> first;
        cout << endl << "Enter your operator.  Choose between +, -, *, or /: ";

        // Operator entered and stored
        cin >> op;
        cout << endl << "Please enter your second number: ";

        // Second number entered and stored
        cin >> second;

        //Calculation done based on 'op' entered
        switch(op)
        {
            default: cout << endl << "Something is wrong" << endl;break;
            case '+': cout << "Your answer is: " << add(first, second) << endl;
                break;
            case'-': cout << "\nYour answer is: " << subtract(first, second) << endl;
                break;
            case'*': cout << "\nYour answer is: " << multiply(first, second) << endl;
                break;
            case'/': cout << "\nYour answer is: " << divide(first, second) << endl;
                break;
        }
        cout << endl << "Thank you so much!" << endl;
        cout << "Would you like to use this calculator? Enter y or n: ";
        cin >> ans;
    }
    while(ans!='n');
        cout << "Thank you! Have a fantastic day!!" << endl;

    return 0;
}



//Calculator functions begin here
//Function for adding
float add(float x, float y)
{
return x+y;
}

//Function for subtraction
float subtract(float x, float y)
{
return x-y;
}

//Function for multiplying
float multiply(float x, float y)
{
return x*y;
}

//Function for dividing
float divide(float x, float y)
{
return x/y;
}
