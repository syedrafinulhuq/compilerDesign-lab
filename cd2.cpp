#include <iostream>
#include <cctype>
using namespace std;

void checkNumeric(string userInput)
{

    bool isNumeric = true;

    for (int i = 0; i < userInput.length(); i++)
    {
        if (!(userInput[i] >= 48 && userInput[i] <= 57))
        {
            isNumeric = false;
            break;
        }
    }

    if (!isNumeric)
    {
        cout << "not numeric" << endl;
    }
    else
    {
        cout << "numeric constant" << endl;
    }
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

    if (userInput.size() >= 2 && userInput[0] == '/' && userInput[1] == '/')
    {
        cout << "This is a single line comment" << endl;
    }
    else if (userInput.size() >= 2 && userInput[0] == '/' && userInput[1] == '*')
    {
        int userInputLen = userInput.length();

        if (userInputLen >= 2 && userInput[userInputLen - 2] == '*' && userInput[userInputLen - 1] == '/')
        {
            cout << "This is a multine complete comment" << endl;
        }
        else
        {
            cout << "This is a incomplete multiline comment" << endl;
        }
    }
}

void checkIdentifier(string userInput)
{

    bool isIdentifier = true;

    if (!(userInput[0] == '_' || (userInput[0] >= 'A' && userInput[0] <= 'Z') || userInput[0] >= 'a' && userInput[0] <= 'z'))
    {
        isIdentifier = false;
    }

    for (int i = 1; userInput[i] != '\0'; i++)
    {

        if (!(userInput[i] == '_' || (userInput[i] >= 'A' && userInput[i] <= 'Z') || (userInput[i] >= 'a' && userInput[i] <= 'z') || (userInput[i] >= '0' && userInput[i] <= '9')))
        {
            isIdentifier = false;
            break;
        }
    }

    if (isIdentifier)
    {
        cout << "This is an identifier" << endl;
    }
    else
    {
        cout << "This is not an identifier" << endl;
    }
}

void findAverageValue(int size)
{
    int sum = 0;
    int arrValues[size];
    cout << "Enter array values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arrValues[i];
    }

    for (int i = 0; i < size; i++)
    {
        sum += arrValues[i];
    }

    double average = sum / size;
    cout << "Average value :" << average << endl;
}

void findMaxMin(int size)
{
    cout << "Enter the array to find Max and Min" << endl;
    int arrValues[size];
    cout << "Enter array values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arrValues[i];
    }

    int max = arrValues[0];
    int min = arrValues[0];

    for (int i = 1; i < size; i++)
    {
        if (arrValues[i] > max)
        {
            max = arrValues[i];
        }
        if (arrValues[i] < min)
        {
            min = arrValues[i];
        }
    }

    cout << "Maximum value :" << max << endl;
    cout << "Minimum value :" << min << endl;
}

void concateString()
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    string concatenatedStr = str1 + " " + str2;
    cout << "Concatenated String: " << concatenatedStr << endl;
}

int main()
{

    // string userInput;
    // getline(cin, userInput);

    // checkNumeric(userInput);
    // checkOperator(userInput);
    // checkComment(userInput);
    // checkIdentifier(userInput);

  
    // cout << "Enter array size: ";
    // int arrSize;
    // cin >> arrSize;
    // findAverageValue(arrSize);
    // findMaxMin(arrSize);
    // concateString();

    return 0;
}
