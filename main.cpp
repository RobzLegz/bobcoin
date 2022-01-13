#include <iostream>
#include <ctime>
#include <vector>

#include "Block.cpp"
#include "Blockchain.cpp"
#include "include/TransactionData.h"

using namespace std;

int main() {
    Blockchain bobCoin;
    
    time_t data1Time;
    TransactionData data1(1.5, "Joe", "Bob", time(&data1Time));
    bobCoin.addBlock(data1);
    
    time_t data2Time;
    TransactionData data2(0.2233, "Amogus", "Bob", time(&data2Time));
    bobCoin.addBlock(data2);
    
    bobCoin.printChain();
    
    printf("\nIs chain still valid? %d\n", bobCoin.isChainValid());
    
    return 0;
}