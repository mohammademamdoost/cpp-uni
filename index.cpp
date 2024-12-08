#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Calculator {
public:
    int floor(double num) {
        return (int)num;  
    }

    int add(int a, int b) {
        return a + b;
    }

    double max1(double a, double b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }

    bool find1(string str, char ch) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ch) {
                return true;
            }
        }
        return false;
    }

    int max2(int arr[], int size) {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    Calculator calc;

    
    cout << "floor(3.7): " << calc.floor(3.7) << "\n";
    cout << "add(5, 7): " << calc.add(5, 7) << "\n";
    cout << "max1(2.3, 3.4): " << calc.max1(2.3, 3.4) << "\n";
    cout << "find1(\"hello\", 'e'): " << calc.find1("hello", 'e') << "\n";

    int arr[] = {1, 5, 3, 9, 2};
    cout << "max2([1, 5, 3, 9, 2]): " << calc.max2(arr, 5) << "\n";

    return 0;
}