#ifndef Blockchain_h
#define Blockchain_h

#include <vector>
#include <Block.h>

class Blockchain {
    private:
        Block createGenesisBlock();
        std::vector<Block> chain;

    public:
        Blockchain();
        
        std::vector<Block> getChain();
        Block *getLatestBlock();
        bool isChainValid();
        void addBlock(TransactionData data);
        void printChain();
};

#endif