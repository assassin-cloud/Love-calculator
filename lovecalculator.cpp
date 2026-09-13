#include<iostream>
#include<string>
using namespace std;

void welcome(int& input){
    cout << "======================" << endl;
    cout << "   Love Calculator    " << endl;
    cout << "======================" << endl;
    cout << "DON'T TAKE THIS SERIOUSLY" << endl;
    cout << endl;
    cout << "1. Calculate" << endl;
    cout << "2. Exit" << endl;
    cout << "Input:" << endl;
    cin >> input;
    cin.ignore();
}

void getuserinput(string& name1, string& name2){
    cout << endl;
    cout << "Enter your names to calculate" << endl;
    cout << "Input first name: " << endl;
    getline(cin, name1);
    cout << "Input second name: " << endl;
    getline(cin, name2);
}

void wait(){
    cout << "Type anything to continue" << endl;
    string anything;
    cin >> anything;
    cin.ignore();
}

int calculate(string x, string y){
    int name1size = x.size();
    int name2size = y.size();
    return (((name1size * name2size)%100)*2);
}

void calculating(int a){
    cout << "Calculating..." << endl;
    cout << endl;
    cout << "Checking compatibility..." << endl;
    cout << endl;
    cout << a << " %" << endl;
    cout << endl;
    if(a>=80){
        cout << "You are meant for each other..." << endl;
    }
    else if(a>=65){
        cout << "He/She definitly loves you..." << endl;
    }
    else if(a>=35){
        cout << "Maybe you have a chance..." << endl;
    }
    else{
        cout << "Maybe he/she loves you... idk..." << endl;
    }
}

int main(){
    int input {};
    string firstname {};
    string secondname {};
    while(true){
        welcome(input);
        if(cin.fail()){
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else{
            if(input == 1){
                getuserinput(firstname, secondname);
                cout << endl;
                double calculatelove = calculate(firstname, secondname);
                if(calculatelove>100){
                    calculatelove = 100;
                    calculating(calculatelove);
                    cout << endl;
                    wait();
                }
                else{
                    calculating(calculatelove);
                    wait();
                }
            }
            else if(input == 2){
                break;
            }
            else {
                cout << "Invalid Input!" << endl;
            }
        }
    }
}
