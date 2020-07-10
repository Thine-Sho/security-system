#include <iostream>
#include "encryption.h"
#include <iterator>
#include <vector>

class Verify : EncryptDecrypt
{
    private:
        std::vector<int> ItoVerify;
        std::vector< std::vector<int> > vItems = startDecryption();

    protected:
        bool isVerified();
        void setItoVerify(const int[]);
        void setNewKey(const int[]);
        int keyLen(){return getKeyLength();};
};

void Verify::setNewKey(const int keys[])
{
    createEncryption(keys);
}

void Verify::setItoVerify(const int newInput[])
{
    for(int i=0; i<getKeyLength(); i++)
    {
        ItoVerify.push_back(newInput[i]);
    }
}

bool Verify::isVerified()
{
    bool verified;

    std::vector< std::vector<int> >::iterator row; 
    std::vector<int>::iterator col; 
    int xal, it;

    for (row = vItems.begin(); row != vItems.end(); row++) {
        xal = 0, it=0;
        for (col = row->begin(); col != row->end(); col++, it++) {
            if(ItoVerify[it] == *col)
            {
                xal++;
                if(xal == getKeyLength())
                {
                    verified = true;
                }
            }
        }
    }
    return verified;
}