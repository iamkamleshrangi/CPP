#include <iostream>

using namespace std;

int main()
{
      int num1, num2, choice;
      do {
       //configurations
        cout << "============ Calculator =============="<<endl;
        cout << endl;
        cout << "Enter fist number"<< endl;
        cin >> num1;
        cout << "Enter second number"<<endl;
        cin >> num2;
        cout << endl;
        cout << "Enter 1 to add numbers"<< endl;;
        cout << "Enter 2 to subtract numbers"<< endl;;
        cout << "Enter 3 to Multiply numbers"<< endl;;
        cout << "enter 4 to divide numbers"<< endl;;
        cout << "enter 5 to EXIT"<< endl;;
        cout << endl;
        cout << "Enter you choice .."<< endl;
        cin >> choice;
      switch(choice){
        case 1:
          cout << "Addition of number is :"<<num1 + num2 << endl;
          break;

        case 2:
          cout << "Subtraction fo number is : "<< num1- num2 <<endl;
          break;

        case 3:
          cout << "Multiplication fo number is : "<< num1 * num2 <<endl;
          break;

        case 4:
          cout << "Multiplication fo number is : "<< num1 / num2 <<endl;
          break;

        case 5:
          break;

         default:
          cout << "Enter valid choice" <<endl;
      }
      } while(choice != 5);
      return 0;
}

