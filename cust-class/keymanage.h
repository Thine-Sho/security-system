#include <iostream>
#include "system-class/verification.h"
#include <iterator>
#include <vector>

class Key : Verify 
{
    public:
        void createKey(const int[]);
        int keylen = keyLen();
};


void Key::createKey(const int key[])
{
    setItoVerify(key);

    if(!isVerified())
    {
        setNewKey(key);
        std::cout << "Key Created\n";
    }
    else
    {
        std::cout << "ERROR: Cannot re-create Key\n";
    }
}

