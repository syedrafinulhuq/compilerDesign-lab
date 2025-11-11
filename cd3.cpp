#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    cout << "Token Identifier Program" << endl;

    vector<string> keywords = {
        "int", "float", "if", "else", "while", "for", "return", "char", "double", "void"};

    vector<string> operators = {
        "+", "-", "*", "/", "=", "==", "<", "<=", ">", ">=", "!="};

    ifstream file("E:/Compiler Design/4th lab/tokens.txt");
    if (!file.is_open()){
        cout<< "File is not opening"<<endl;
    };
    
    string word;
    while (file>>word)
    {

        bool isKeyword = false;
        for (const string & keyword : keywords){
            if (word == keyword){
                cout << word << ": a keyword." << endl;
                isKeyword = true;
                break;
            }
        }
        if (isKeyword) continue;
        bool isOperator = false;
        for (const string & op : operators){
            if (word == op){
                cout << word << ": an operator." << endl;
                isOperator = true;
                break;
            }
        }

        if (isOperator) continue;
        bool isLiteral = false;
        if (isdigit(word[0]) || (word[0] == '"' && word.back() == '"')) {
            cout << word << ": a literal." << endl;
            isLiteral = true;
        }

        if (isLiteral) continue;
        cout << word << ": an identifier." << endl;
    
    }
    

    return 0;
}
