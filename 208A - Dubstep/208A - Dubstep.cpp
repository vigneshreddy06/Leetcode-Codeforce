#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string remix;
    getline(cin, remix); 

    string delimiter = "WUB";
    size_t pos = 0;
    string token;
    vector<string> words;

    while ((pos = remix.find(delimiter)) != string::npos) {
        token = remix.substr(0, pos);
        if (!token.empty()) {
            words.push_back(token);
        }
        remix.erase(0, pos + delimiter.length());
    }
    if (!remix.empty()) {
        words.push_back(remix);
    }

    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << words[i];
    }
    cout << endl;

    return 0;
}
