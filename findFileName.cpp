#include <iostream>

using namespace std;

int main()
{
    string fileName, extension;
    unsigned int i;
    int indexOfPeriod;

    cout << "Enter file name" << endl;
    cin >> fileName;

    for(i = 0; i < fileName.length(); i++)
        if(fileName[i] == '.')
            indexOfPeriod = i;

    for(i = 0; i < fileName.length(); i++)
        if(i >= indexOfPeriod)
            extension += fileName[i];

    cout << extension; 

    return 0;
}