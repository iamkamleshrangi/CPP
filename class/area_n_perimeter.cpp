#include<iostream>
using namespace std;

class Rect {
    private:
        int length = 10;
        int breadth = 12;
        
    public:
        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2 * (length + breadth);
        }
};

int main(){
    Rect r1;
    cout << "Area of rectangle is :" << r1.area() << endl;
    cout << "Perimeter of rectangle is :" << r1.perimeter() << endl;
    return 0;
}
