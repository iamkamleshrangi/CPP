#include <iostream>
using namespace std;

class Rect 
    {
        public:
            int length = 12;
            int breadth = 15;
        
        public:
            int get_data(){
                cout << "\nEnter length : something "<<endl;
               
                return 0;
            }
            
            int dis_data(){
                cout << "Length : "<< length << endl;
                cout << "Breadth :" << breadth << endl;
                return 0;
            }
    };
int main(){
    Rect r1;
    cout << r1.length;
    r1.get_data();
    r1.dis_data();
    return 0;
}
