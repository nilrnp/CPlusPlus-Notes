// iostream allows input and outputs to work
// #include <iostream>

// cmath allows the use of sqrt, pow, abs, ceil, and floor functions
// #include <cmath>

// Preprocessors, occur before program is compiled, #define creates constants
// #define PI 3.14159265359

// namespace std allows us to write input/outputs without extra code
// using namespace std;

// Header files, can be used to include all the function declarations and other inclusions (kind of like a interface), functions in header file must be implemented
#include "HeaderFile.h"

// Functions (methods), syntax: return_type function_name (parameters), can be written before main function
// void addition(int a, int b)
// {
//   cout << "Sum is " << a + b << endl;
// }

// Programmer defined functions, can be made after the main function
// void subtraction(int a, int b);

// Structures, mini class with objects
// struct Person
// {
//   string firstName;
//   string lastName;
//   int age;
// };

// main function, int is the return type, parameters are within parenthesis, every program must have a main function
// The two parameters in the main function are to read command line arguments, int argc counts number of command line strings, char** argv is an array that stores command line strings
// stuff within braces {} is considered a block of code
int main(int argc, char **argv)
{
  // variables
  // string firstName, lastName;
  // int age = 0;

  // output, endl skips to the next line
  // cout << "Enter your full name: " << endl;

  // takes input
  // cin >> firstName >> lastName;
  // cout << "How old are you?" << endl;
  // cin >> age;

  // prints out sentence with entered input, \n skips to next line
  // cout << "Hello " << firstName << " " << lastName << ", you are " << age << " years old! \n";

  // Variable Types
  // int i = 1;
  // char letter = 'a';
  // double pi = 3.14;
  // float pi = 3.14
  // string name = "Nil";
  // boolean correct = true;

  // Arithmetic
  // int a = 20;
  // int b = 30;
  // cout << a + b;
  // cout << b - a;
  // cout << a * b;
  // cout << b / a;
  // cout << b % a;

  // Assignment math
  // int a = 200;
  // a++;
  // a--;
  // a += 256;
  // a -= 256;
  // a *= 2;
  // a /= 2;
  // a %= 2;

  // enums: integer constants that are represented by identifies that start at 0 unless specified
  // enum months
  // {
  //   Jan = 1,
  //   Feb,
  //   Mar,
  //   Apr,
  //   May,
  //   Jun,
  //   Jul,
  //   Aug,
  //   Sep,
  //   Oct,
  //   Nov,
  //   Dec
  // };
  // cout << Jan;

  // Relational Operators, return true or false
  //==, !=, <, <=, >, >=

  // Logical Operators
  //!  : not
  //&& : and
  //|| : or

  // if statements
  // int cost = 120;
  // if (cost > 150)
  // {
  //   cout << "cost is greater than 150";
  // }
  // else if (cost > 100)
  // {
  //   cout << "cost is greater than 100";
  // }
  // else
  // {
  //   cout << "cost is less than 100";
  // }
  //
  // short hand for if-else statements
  // int a = 3;
  // int b = 5;
  // a > b ? cout << a : cout << b;

  // Switch statement
  // int months = 1;
  // switch (months)
  // {
  // case 1:
  //   cout << "Jan" << endl;
  //   break;
  // case 2:
  //   cout << "Feb" << endl;
  //   break;
  // case 3:
  //   cout << "Mar" << endl;
  //   break;
  // default:
  //   cout << "Every Month" << endl;
  // }

  // While Loops
  // int a = 1;
  // while (a < 6)
  // {
  //   cout << a << endl;
  //   a++;
  // }

  // For Loops
  // for (int a = 0; a < 10; ++a)
  // {
  //   cout << a << endl;
  // }

  // Do While Loops, runs at least once before testing condition
  // int a = 0;
  // do
  // {
  //   cout << a << endl;
  //   a++;
  // } while (a < 10);

  // Nested Loops
  // for (int i = 0; i < 10; ++i)
  // {
  //   for (int j = 0; j < 5; ++j)
  //   {
  //     cout << i << "*" << j << " = " << i * j << endl;
  //   }
  // }

  // Break statement, exits a loop
  // int data = 0;
  // int sum = 0;
  // while (cin >> data)
  // {
  //   if (data < 0)
  //   {
  //     cout << "Invalid input data : " << data << endl;
  //     break; // exit the loop
  //   }
  //   sum += data;
  // }

  // Continue statement, skips ahead in a loop
  // int data;
  // int sum = 0;
  // while (cin >> data)
  // {
  //   if (data < 0)
  //     continue; // skip to the next data input
  //   sum += data;
  // }

  // Type casting, static_cast<Type>(variable)
  // int a = 5;
  // int b = 2;
  // double result = static_cast<double>(a) / b;
  // cout << result << endl;

  // Calling a function
  // addition(7, 4);
  // subtraction(25, 5);

  // Arrays, type name[]
  // int nums[] = {1234, 234, 34, 4};
  // cout << nums[0] << endl;

  // Multi-D arrays
  //  int screen[2][3] = {{2,3,4},{5,4,9}};

  // Structures, must be defined above main method or in a sepearate file
  // Person N_Patel = {"Nil", "Patel", 20};
  // cout << N_Patel.firstName << endl;

  // C Strings, strings are arrays of characters, last character will be \0
  // char fn[4] = "Nil";
  // char name[4];
  // char ln[6] = "Patel";
  // cout << fn << endl;
  // strcpy(name, fn); // copies value from string
  // cout << name << endl;
  // cout << strcat(fn, ln) << endl; // concatenates two strings
  // cout << strlen(ln) << endl; // returns length of string without \0
  // cout << strcmp(fn, ln) << endl; // returns positive value if strings are same

  //
}

// Defining function after main function, must have prototype above main function
// void subtraction(int a, int b)
// {
//   cout << "Difference is " << a - b << endl;
// }

//