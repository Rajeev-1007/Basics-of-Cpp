#include <iostream>
using namespace std;

int main()
{
  float num1, num2;
  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  cout << "Addition of two numbers: ";
  int add = num1 + num2;
  cout << add << endl;

  cout << "Subtraction of two numbers: ";
  int sub = num1 - num2;
  cout << sub << endl;

  cout << "Multiplication of two numbers: ";
  int mul = num1 * num2;
  cout << mul << endl;

  cout << "Division of two numbers: ";
  float div = num1 / num2;
  cout << div << endl;
}