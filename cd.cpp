#include <iostream>
#include <string>
using namespace std;

void checkNumeric(string userInput)
{
    bool isNumeric = true;
    for (int i = 0; i < userInput.length(); i++)
    {
        if (!(userInput[i] >= '0' && userInput[i] <= '9'))
        {
            isNumeric = false;
            break;
        }
    }
    if (isNumeric)
        cout << "numeric constant" << endl;
    else
        cout << "not numeric" << endl;
}

void checkOperator(string userInput)
{
    for (int i = 0; i < userInput.length(); i++)
    {
        if (userInput[i] == '+' ||
            userInput[i] == '-' ||
            userInput[i] == '*' ||
            userInput[i] == '/' ||
            userInput[i] == '%' ||
            userInput[i] == '=')
        {
            cout << "Operator : " << userInput[i] << endl;
        }
    }
}

void checkComment(string userInput)
{
    if (userInput.length() >= 2)
    {
        if (userInput[0] == '/' && userInput[1] == '/')
        {
            cout << "This is a single line comment" << endl;
        }
        else if (userInput[0] == '/' && userInput[1] == '*')
        {
            int len = userInput.length();
            if (len >= 4 && userInput[len - 2] == '*' && userInput[len - 1] == '/')
            {
                cout << "This is a complete multiline comment" << endl;
            }
            else
            {
                cout << "This is an incomplete multiline comment" << endl;
            }
        }
        else
        {
            cout << "Not a comment" << endl;
        }
    }
    else
    {
        cout << "Not a comment" << endl;
    }
}

int main()
{
    string userInput;
    getline(cin, userInput);
    checkComment(userInput);
}
