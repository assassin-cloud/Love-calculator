#include<iostream>
#include<string>
using namespace std;

void welcome(string& name1, string& name2){
    cout << "=======================" << endl;
    cout << "   Love Calculator    " << endl;
    cout << "=======================" << endl;
    cout << endl;
    cout << "Input first name: " << endl;
    getline(cin, name1);
    cout << "Input second name: " << endl;
    getline(cin, name2);
}

int calculate(string x, string y){
    int name1size = x.size();
    int name2size = y.size();
    return (name1size * name2size * 2);
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
    else if(a>=60){
        cout << "You are in love..." << endl;
    }
    else if(a>=30){
        cout << "Maybe you have a chance..." << endl;
    }
    else{
        cout << "Maybe he/she loves you... idk..." << endl;
    }
}

void getinput(string& end){
    cout << "Type y to run the program or anything to quit:" << endl;
    cin >> end;
    cin.ignore();
}

int main(){
    string end = "y";
    string firstname {};
    string secondname {};
    while(end == "y"){
        welcome(firstname, secondname);
        int lovecalculate = calculate(firstname, secondname);
        if(lovecalculate>100){
            lovecalculate = 100;
            calculating(lovecalculate);
            cout << endl;
            getinput(end);
        }
        else{
            calculating(lovecalculate);
            cout << endl;
            getinput(end);
        }
    }
}