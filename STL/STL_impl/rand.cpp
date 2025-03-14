#include<iostream>
#include<ctime>
using namespace std;
/*
 based on  Linear Congruential Generator (LCG)     seed = (a*seed+c)%m;
​

*/

class Rand{
    private: unsigned long seed;
        static const unsigned long a = 1664525;    // Multiplier
        static const unsigned long c = 1013904223; // Increment
        static const unsigned long m = 4294967296; // Modulus (2^32) for 32 bit 
        public:
          Rand(){
            seed = time(0);
          }
          unsigned long rand(){
            seed = (a*seed+c)%m;
            return seed;
          }
};