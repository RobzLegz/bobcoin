#include <stdio.h>
#include <string>

#include "include/Block.h"
#include "include/TransactionData.h"

Block::Block(int idx, TransactionData d, size_t prevHash) {
    index = idx;
    data = d;
    previousHash = prevHash;
    blockHash = generateHash();
}

int Block::getIndex() {
    return index;
}

size_t Block::generateHash() {
    std::string toHashS = std::to_string(data.amount) + data.receiverKey + data.senderKey + std::to_string(data.timestamp);
    
    std::hash<std::string> tDataHash; 
    std::hash<std::string> prevHash;
    
    return tDataHash(toHashS) ^ (prevHash(std::to_string(previousHash)) << 1);
}

size_t Block::getHash() {
    return blockHash;
}

size_t Block::getPreviousHash() {
    return previousHash;
}

bool Block::isHashValid() {
    return generateHash() == getHash();
}