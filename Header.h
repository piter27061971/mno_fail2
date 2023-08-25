#pragma once

class Counter
{

public:
    void inc();
    void dec();
    int vozvrat();
    Counter();
    Counter(int num);
private:
    int num;
};