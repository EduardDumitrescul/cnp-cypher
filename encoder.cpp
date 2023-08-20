#include <iostream>
#include <fstream>
#include <unordered_map>
#include <stdexcept>
#include <string>
#include <sstream>

#include "checkFunctions.h"       
#include "encoder.h"

Encoder::Encoder(std::string key) {
    this->loadKey(key);
}

void Encoder::createMap() {
    bool used[256] = {};
    char currentLetter = 'a';

    for(char letter: this->key) {
        used[letter] = true;
        this->addKeyValue(currentLetter, letter);
        currentLetter ++;
    }
    for(char letter = 'a'; letter <= 'z'; letter ++) {
        if(used[letter] == true) {
            continue;
        }
        this->addKeyValue(currentLetter, letter);
        currentLetter ++;
    }
}

int main(int argc, char* argv[]) {
    try {
          
        checkNumberOfArguments(argc);
            
        std::string key = argv[1];
        std::string filename = argv[2];

        std::ifstream fin(filename);
        std::string text;
        std::string temp;
        
        while(std::getline(fin, temp)) {
            text.append(temp);
        }

        fin.close();
        

        Encoder encoder(key);
        std::cout << encoder.encode(text) << '\n';

    }
    catch (std::string exception) {
        std::cout << "String Exception! - " << exception << '\n';
    }
    catch (std::exception exception){
        std::cout << "Exception! - " << exception.what() << '\n';
    }
    catch(...) {
        std::cout << "Unknown exception!" << '\n';
    }

    return 0;
}