#include <iostream>
#include <list>

using namespace std;

// struct is a way in c++ to group variables or members together
// into a single unit unlike class , struct members are public by default
struct MyHash
{
    /* data */
    int BUCKET;
    list<int> *table; // using list

    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }
    ~MyHash()
    {
        delete[] table;
    }

    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }

    void removeC(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }

    bool search(int key)
    {
        int i = key % BUCKET;
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    MyHash hash(5); // create a hash table with 5 buckets
    hash.insert(10);
    hash.insert(22);
    hash.insert(43);
    hash.removeC(22);
    cout <<boolalpha<< hash.search(11);
    return 0;
}