#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string readFile1(string path)
{
    string str = "";
    fstream my_file;
    my_file.open(path, ios::in);
    if (!my_file)
    {
        cout << "No such file";
        throw "No such file";
    }
    else
    {
        string s;
        while (getline(my_file, s))
        {
            str += s;
        };
    }
    my_file.close();
    return str;
}

int main()
{
    try
    {
        /* code */
        string s = readFile1("/workspaces/C_or_Cpp_Learning/Files/myFile.txt"); // Need to mention absulate path
        cout << s << endl;
    }
    catch (string e)
    {
        cout << e << '\n';
    }
}