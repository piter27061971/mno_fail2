#include "Header.h"
    void Counter::inc() { this->num++; }
     void Counter::dec() { this->num--; }
    int Counter::vozvrat() { return (this->num); }
    Counter::Counter()
    {
        this->num = 1;
    };
    Counter::Counter(int num)
    {
        this->num = num;
    };
