//Remove vowels from the string 
//Constraints : lowercase ; 

#include <iostream>

using namespace std;

   string removeVowels(string s) {
        //trivial
        string vow = "aeiou";
        string emp = "";
        string out = "";
        for(int i = 0; i < s.length(); i++)
        {
            emp.push_back(s[i]);
            if(vow.find(emp) != string::npos)
            {
                emp.clear();
            }
            out.append(emp);
            emp.clear();
        }
        return out;
    }
int main()
{
    string in = "Hello World";
    string out = removeVowels(in);
    cout << out;

    return 0;
}

//Output :
