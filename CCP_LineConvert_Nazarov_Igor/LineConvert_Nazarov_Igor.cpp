// LineConvert_Nazarov_Igor.cpp : CPP Test 


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line, buffer;
    buffer = "";
    getline(cin, line);

    //Convert line lowercase letters to uppercase letters in new "buffer" string to proper letter comparison

    for (char c : line) {
        if (c >= 'a' && c <= 'z') {
            int num_letter = c - 'a';
            buffer += 'A' + num_letter;
        }
        else {
            buffer += c;
        }
    }

    cout << "------------------------------" << endl;
    cout << "Input line: " << line << endl;
    cout << "Upper registry line: " << buffer << endl;
    cout << "------------------------------" << endl;

    int lenght = buffer.size();



    //Comparing letters between each other & replace with ")", if it matches

    for (int i = 0; i < lenght; i++) {

        for (int j = i + 1; j < lenght; j++) {

            if (buffer[i] == buffer[j]) {
                line[i] = *")";
                line[j] = *")";
            }

            // "(" exeption

            else if (buffer[i] == *")") {
                line[i] = *"(";
            }
        }

    }

    //Replacing single letters with "(" 

    for (int i = 0; i < lenght; i++) {
        if (line[i] != *")") {
            line[i] = *"(";
        }
    }


    cout << endl << "Result: " << line << endl;



    return 0;
}