#ifndef Block_h
#define Block_h

#include "TransactionData.h"

class Block {
    private:
        int index;
        size_t blockHash;
        size_t previousHash;
        size_t generateHash();
        
    public:
        Block(int idx, TransactionData d, size_t prevHash);
        
        int getIndex();
        size_t getHash();
        size_t getPreviousHash();
        TransactionData data;
        bool isHashValid();
};

#endif