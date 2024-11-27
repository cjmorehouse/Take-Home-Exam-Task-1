
#include <iostream>
#include "SentenceConverter.h"
using namespace std;

int main() {
    string sentence;
    cout << "Enter a camel-case sentence: ";
    cin >> sentence;
    cout << "Converted sentence: " << SentenceConverter::convertSentence(sentence) << endl;
    return 0;
}
