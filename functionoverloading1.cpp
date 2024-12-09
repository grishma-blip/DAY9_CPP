#include <iostream>
using namespace std;

class Calc
 {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};
int main() 
{
    Calc calculator;
    int result_two = calculator.add(5, 10);
    cout << "Sum of two numbers (5 + 10): " << result_two << endl;
    int result_three = calculator.add(5, 10, 15);
    cout << "Sum of three numbers (5 + 10 + 15): " << result_three << endl;
    return 0;
}