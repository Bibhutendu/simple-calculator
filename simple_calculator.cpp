#include<iostream>
using namespace std;

int main()
{
    double num1,num2;
    char op,n;
    while(1)
    {
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
        cout<<"Enter the operator: ";
        cin>>op;
        switch(op)
        {
            case '+':
            cout<<"Ans = "<<num1+num2<<endl;
            break;
            case '-':
            cout<<"Ans = "<<num1-num2<<endl;
            break;
            case '*':
            cout<<"Ans = "<<num1*num2<<endl;
            break;
            case '/':
            cout<<"Ans = "<<num1/num2<<endl;
            break;
            }
        
        cout<<"To Exit press 'x' "<<endl<<"To Continue press 'c' ";
        cin>>n;
        
        if(n=='x')
        break;
        if(n=='c')
        continue;
        
    
        
    }
}