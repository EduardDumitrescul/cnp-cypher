#ifndef CHECK_FUNCTIONS
#define CHECK_FUNCTIONS

void checkNumberOfArguments(int argc) {
    if(argc != 3) {
        throw std::string("Invalid number of arguments! There should be two arguments, the key used"
                   "for encoding and the text to encode");
    }
}

void checkKeyIsWord(std::string key) {
    for(char chr: key) {
        if(isalpha(chr) == false)
            throw std::string("Invalid key! It must only contain letters from the English alphabet.");
    }
}

void checkDistinctLetters(std::string key) {
    bool used[256] = {};
    for(auto chr: key) {
        if(used[chr] == true) {
            throw std::string("Invalid key! It must have distinct letters");
        }
        used[chr] = true;
    }
}

#endif 