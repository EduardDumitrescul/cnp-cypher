
#include "checkFunctions.h"

std::string stringToLower(std::string word) {
    for(char& letter: word) {
        letter = tolower(letter);
    }
    return word;
}


class Coder {
protected:

    std::string key;
    std::unordered_map<char, char> map;

    void addKeyValue(char currentLetter, char letter);

    virtual void createMap() = 0;

    void loadKey(std::string key);
public:

    std::string encode(std::string text);
};

void Coder::loadKey(std::string key){
    checkKeyIsWord(key);
    key = stringToLower(key);
    checkDistinctLetters(key);

    this->key = key;
    this->createMap();
}

void Coder::addKeyValue(char currentLetter, char letter) {
    currentLetter = tolower(currentLetter);
    letter = tolower(letter);
    this->map[currentLetter] = letter;
    this->map[toupper(currentLetter)] = toupper(letter);
}

std::string Coder::encode(std::string text) {
    for(char& letter: text) {
        if(isalpha(letter) != 0) {
            letter = this->map[letter];
        }
    }
    return text;
}
