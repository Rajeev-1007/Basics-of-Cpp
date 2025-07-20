# Basics-of-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081
Aim: Write a C++ program to print "Hello World" and perform various calculator programs.


Software Used: VS Code.


Theory:  it is used to define several headers used in the program. - usingnamespace std; : it tells the compiler to use the std namespace. - main() : the execution of the program begins. - int main() : it is the main function where the program execution begins. - cout<<"Hello WOrld" : this line cause the message hello world to be displayed on the screen. -return 0 : it terminates the main function & causes it to return the value 0 to the calling process. - // : this is added before a sentence to make it a comment in the code.


CODE: Hello World
    
    #include <iostream>

    using namespace std;

    int main() 

    {
 
    cout<<"Hello World";
    
    return 0;
    
    }


CODE: Calculator programs.


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

Conclusion: This program was very useful for learning the basics of C++ programming.

