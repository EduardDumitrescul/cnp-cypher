#ifndef ENCODER
#define ENCODER

#include "coder.h"

class Encoder: public Coder {
private:
    void createMap();

public:
    Encoder(std::string key);
};

#endif