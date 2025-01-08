#pragma once

class ArrayList
{
public:
    ArrayList(int);
    ~ArrayList();

    ArrayList &add(int);

    void print() const;

    friend void somaArray(ArrayList &, int);
    friend void subArray(ArrayList &, int);
    friend void mulArray(ArrayList &, int);
    friend void divArray(ArrayList &, int);

private:
    int *arr;
    int tam;
    int pos;
};
