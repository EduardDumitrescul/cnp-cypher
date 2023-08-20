#ifndef DECODER
#define DECODER

#include "coder.h"

class Decoder: public Coder {
private:
    void createMap();

public:
    Decoder(std::string key);
};

#endif