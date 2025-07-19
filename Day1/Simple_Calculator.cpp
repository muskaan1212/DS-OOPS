#include <iostream>
using namespace std;

class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }

    int sub(int a, int b){
        return a-b;
    }

    int mul(int a, int b){
        return a*b;
    }

    int div(int a, int b){
        if(b==0){
            cout <<  "Cannot divide by zero";
        }
        else{
            return a/b;
        }
    }
};

int main(){
    Calculator calc;
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
        int result;
    switch (op) {
        case '+': result = calc.add(num1, num2);
        break;
        case '-': result = calc.sub(num1, num2); 
        break;
        case '*': result = calc.mul(num1, num2); 
        break;
        case '/': result = calc.div(num1, num2); 
        break;
        default: 
            cout << "Invalid operator!" << endl; 
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;

}
