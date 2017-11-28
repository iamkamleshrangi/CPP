#include<iostream>
using namespace std;

class Rect{
    private:
        int a = 52;
        int b = 33;
    public:
        int add(){
            return a + b;
        }
        int sub(){
            return a - b;
        }
        int multi(){
            return a * b;;
        }
        int divi(){
            return a / b;
        }
};

int main(){
    Rect r;
    cout << "Additon of number is " << r.add() << endl;
    
    cout << "Subtraction of number is " << r.sub() << endl;
    
    cout << "Multiplication of number is " << r.multi() <<endl;
    
    cout << "Division of number is " << r.divi() << endl;
    
    return 0;
}
