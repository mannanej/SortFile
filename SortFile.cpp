#include <windows.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<std::string> lines;
    std::string path;

    cout << "What's The File Path: \n";
    cin >> path;

    std::ifstream file(path);
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    sort(lines.begin(), lines.end());

    std::ofstream out(path);
    std::ostream_iterator<std::string> iter(out, "\n");
    std::copy(lines.begin(), lines.end(), iter);

    cout << "Finished!";
    return 0;
}