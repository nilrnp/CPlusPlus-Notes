#include "HeaderFile.h"

// iomanip is used to display data in different ways
#include <iomanip>

// fstream is used for files
#include <fstream>

int main(int argc, char const *argv[])
{
  // setw() sets the space that output will fit in
  // int value = 23;
  // cout << setw(5) << value << endl;

  // setprecision() controls number of sig figs that will be printed
  // cout << setprecision(5) << 132.364 << endl;
  // cout << setprecision(4) << 132.364 << endl;

  // fixed works with setprecision(), it counts only after the decimal point rather than from before it
  // cout << setprecision(2) << fixed << 5.679 << endl;

  // showpoint works with setprecision(), it allows trailing zeros to be printed
  // cout << setprecision(5) << showpoint << 3.4 << endl;

  // setw can be used to make sure character length isn't exceeded, a space will end the input
  // char name[20];
  // cin >> setw(20) >> name;
  // cout << name << endl;

  // cin.getLine(char[], size) allows inputs until the enter key is pressed
  // char animals[10];
  // cin.getline(animals, 10);
  // cout << animals << endl;

  // cin.get(char) will read a single character
  // char response;
  // cout << "Press any key to continue...";
  // cin.get(response);
  // cout << response << endl;

  // File Input/Output, 1. file must be opened/created, 2. data is saved to file or read from file or both, 3. file must be closed
  // ifstream inputFile;  // creates object that can open files and read data
  // ofstream outputFile; // creates object that can create files and write data
  //
  // int length, width;
  //
  // getline(inputFile, length); //getline reads an entire line with spaces
  //
  // inputFile.open("dimensions.txt"); // creates a file called dimensions.txt
  // outputFile.open("results.txt");   // creates a file called results.txt
  //
  // inputFile >> length >> width; // reads the data from dimensions.txt
  // outputFile << "Rectangle 1: "
  //            << "Length = " << length << ", Width = " << width << ", Area = " << length * width << endl;
  //
  // inputFile >> length >> width;
  // outputFile << "Rectangle 2: "
  //            << "Length = " << length << ", Width = " << width << ", Area = " << length * width << endl;
  //
  // inputFile.close();
  // outputFile.close();
}
