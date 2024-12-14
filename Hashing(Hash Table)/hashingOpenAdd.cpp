#include <iostream>
using namespace std;

struct MyHash
{
    /* data */
    int *arr;
    int cap, size;
    MyHash(int capacity)
    {
        cap = capacity;
        size = 0;
        arr = new int[cap];
        for (int i = 0; i < cap; i++)
            arr[i] = -1;
    }

    int hashFunction(int key)
    {
        return key % cap;
    }
    bool insert(int key)
    {
        int index = hashFunction(key);
        while (arr[index] != -1 && arr[index] != -2 && arr[index] != key)
        {
            index = (index + 1) % cap;
        }
        if (arr[index] == key)
        {
            return false;
        }
        else
        {
            arr[index] = key;
            size++;
            return true;
        }
    }
    bool search(int key)
    {
        if (key == -1)
            return false;
        int index = hashFunction(key);
        int h = index;
        while (arr[index] != -1)
        {
            if (arr[index] == key)
                return true;
            index = (index + 1) % cap;
            if (index == h)
            {
                return false;
            }
        }
        return false;
    }
    bool remove(int key)
    {
        int index = hashFunction(key);
        int h = index;
        while (arr[index] != -1)
        {
            if (arr[index] == key)
            {
                arr[index] = -2;
                size--;
                return true;
            }
            index = (index + 1) % cap;
            if (index == h)
            {
                return false;
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}