#include<iostream>
using namespace std;
class calculator{
    public:
    int add(int a, int b){
        return a+b;
    }

    int subtract(int a, int b){
        return a-b;
    }

    int multiply(int a, int b){
        return a*b;
    }

    int divide(int a, int b){
        if(b!=0){
            return a/b;
        }

        else{
            cout<<"error in division by zero";
            return 0;
        }
    }
};

int main(){
    calculator calc;
    int num1,num2;
    char op;

    cout<<"enter first number:";
    cin>>num1;

    cout<<"enter second number:";
    cin>>num2;

    cout<<"enter case number for operation: )";
    cin>>op;

    switch(op){
        case '1':
        cout<<"result:"<<calc.add(num1,num2)<<endl;
        break;

        case '2':
        cout<<"result:"<<calc.subtract(num1,num2)<<endl;
        break;
        
        case '3':
        cout<<"result:"<<calc.multiply(num1,num2)<<endl;
        break;
        
        case '4':
        cout<<"result:"<<calc.divide(num1,num2)<<endl;
        break;
        
        default:
        cout<<"invalid operator"<<endl;
        break;
    }
}