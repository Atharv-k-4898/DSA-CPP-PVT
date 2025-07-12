#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>
#include <string>
using namespace std;
// ✦ Question         :
// ✦ Question Link    :
// ✦ Approach         :
// ✦ Time Complexity  :
// ✦ Space Complexity :
// ✦ Dry Run          :

class Node
{
public:
    string key;
    int val;
    Node *next;

    Node(string key, int val)
    {
        this->val = val;
        this->key = key;
        next = NULL;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

class HashTable
{
    int totSize;
    int currSize;
    Node **table;

    int hashFun(string key)
    {
        int idx = 0;
        for (int i = 0; i < key.length(); i++)
        {
            idx = (idx + (key[i] * key[i])) % totSize;
        }
        return idx;
    }

    void rehash()
    { // tc is O(n)
        Node **oldTable = table;
        int oldSize = totSize;
        totSize = 2 * totSize;
        table = new Node *[totSize];
        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL;
        }
        currSize = 0; // reset current size, will be updated during reinsertion

        for (int i = 0; i < oldSize; i++)
        {
            Node *tmp = oldTable[i];
            while (tmp != NULL)
            {
                insert(tmp->key, tmp->val);
                tmp = tmp->next;
            }
            if (oldTable[i] != NULL)
            {
                delete oldTable[i]; // this will recursively delete the entire linked list
            }
        }
        delete[] oldTable;
    }

public:
    HashTable(int size)
    {
        totSize = size;
        currSize = 0;

        table = new Node *[totSize];
        for (int i = 0; i < totSize; i++)
        {
            table[i] = NULL; /// all hash values are initialised with null
        }
    }

    // Insert fun
    void insert(string key, int val)
    {
        int idx = hashFun(key);
        Node *newNode = new Node(key, val);
        Node *head = table[idx];
        newNode->next = head;
        table[idx] = newNode;
        currSize++;
        // taking lambda as a threshold if lambda > 1 then we will double the size of table
        // lowest the size of lambda  < tc else > tc
        // 1 is good val for better tc
        // lambda is currsize/totsize if its > 1 then we rehash this is called rehashing
        double lambda = currSize / (double)totSize;
        if (lambda > 1)
        {
            rehash(); // worst case is O(N), avg case is O(1)
        }
    }

    bool isExists(string key)
    {
        int idx = hashFun(key);
        Node *tmp = table[idx];
        while (tmp != NULL)
        {
            if (tmp->key == key)
                return true;
            tmp = tmp->next;
        }
        return false;
    }

    int search(string key)
    {
        int idx = hashFun(key);
        Node *tmp = table[idx];
        while (tmp != NULL)
        {
            if (tmp->key == key)
                return tmp->val;
            tmp = tmp->next;
        }
        return -1;
    }
    void print()
    {
        for (int i = 0; i < totSize; i++)
        {
            cout << " idx :" << i << "->";
            Node *tmp = table[i];
            while (tmp != NULL)
            {
                cout << "(" << tmp->key << "," << tmp->val << ") ->";
                tmp = tmp->next;
            }
            cout << endl;
        }
    }
    void remove(string key)
    {
        int idx = hashFun(key);
        Node *tmp = table[idx];
        Node *prev = tmp;
        while (tmp != NULL)
        {
            if (tmp->key == key) // erase
            {

                if (prev == tmp)
                {
                    table[idx] = tmp->next;
                }
                else
                {
                    prev->next = tmp->next;
                }
            }
            prev = tmp;
            tmp = tmp->next;
        }
    }
};

int main()
{

    HashTable ht(5);
    ht.insert("India", 150);
    ht.insert("China", 150);
    ht.insert("US", 50);
    ht.insert("Nepal", 10);
    ht.insert("Russia", 20);
    ht.print();
    ht.remove("China");
    cout << "----------------" << endl;
    ht.print();
    if (ht.isExists("India"))
    {
        cout << "India population : " << ht.search("India") << endl;
    }
    return 0;
}
