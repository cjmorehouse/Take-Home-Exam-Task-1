
#include "SentenceConverter.h"
#include <cctype>
using namespace std;

std::string SentenceConverter::convertSentence(const std::string& input) {
    std::string result;
    for (size_t i = 0; i < input.length(); i++) {
        if (isupper(input[i]) && i != 0) {
            result += ' ';
        }
        result += tolower(input[i]);
    }
    result[0] = toupper(result[0]);
    return result;
}
