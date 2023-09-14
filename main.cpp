#include <iostream>
#include <fstream>
#include "sum.h"
#include "sub.h"
#include "mlt.h"
#include "div.h"
#include "pow.h"
#include "modulus.h"
#include "history.h"

using namespace std;

int main()
{

    int option = 1;
    do{

        double a,b, result; char opt;
        cout<<"Write Your Expression: "<<endl;
        cin>>a>>opt>>b;
        if (cin.fail()) {
            cin.clear();
            string invalidInput;
            cin >> invalidInput;
            cout << "Invalid input: " << invalidInput <<endl;
            continue;
        }
        else{
            switch(opt)
            {
                case '+': result = cal::sum(a,b);break;
                case '-': result = cal::sub(a,b);break;
                case '*': result = cal::mlt(a,b);break;
                case '/': result = cal::div(a,b);break;
                case '^': result = cal::pw(a,b);break;
                case '%': result = cal::mod(a,b);break;
                default : {cout<<"Invalid Operator:"<<opt<<endl; continue;}
            }
            history::add(a,opt,b,result);
        }
        cout<<"for exit 0 / continue 1:"; cin>>option;
    }
    while(option);

    cout<<"Do you want to see calculation History(1/0): "<<endl;
    bool yes; cin>>yes;
    if(yes){
        history::display();
    }

    return 0;
}
