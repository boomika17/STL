#include <iostream>

#include <fstream>
#include <map>
#include <string>

using namespace std;

int main() {
    ifstream file("word.txt");

    if (!file)
    {
        cout << "File doesn't exist" <<endl;
        return 1;
    }

    map<string, int> count;
    string word;

    while (file >> word) {
        count[word]++;
    }

   file.close();

    for ( auto pair : count) {
        cout << pair.first << ": " << pair.second <<endl;
    }

    return 0;
}
