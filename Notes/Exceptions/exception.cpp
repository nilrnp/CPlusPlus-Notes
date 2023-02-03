#include <iostream>

using namespace std;

int main()
{
  int num = 0;
  try // specifies what is being tested
  {
    while (num != -1)
    {
      cout << "Input a number (-1 to exit): ";
      cin >> num;
      if (num == 0)
        throw num; // throw statement will call catch
      cout << "5"
           << "/" << num << " = "
           << 5 / num << endl;
    }
  }
  catch (int e) // will run once error is found
  {
    cout << "Division by " << e << endl;
  }
  return 0;
}