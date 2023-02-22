#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void writeFile(string path, string data)
{
    cout << path << endl;
    fstream my_file;
    my_file.open(path, ios::out);
    if (!my_file)
    {
        cout << "File not created!";
    }
    else
    {
        cout << "File created successfully!";
        my_file << data;
        my_file.close();
    }
}

int main()
{

    string data = "I am file data,Ok";
    writeFile("/workspaces/C_or_Cpp_Learning/Files/generatedFile.txt", data); // Need to mention absulate path
    return 0;
}