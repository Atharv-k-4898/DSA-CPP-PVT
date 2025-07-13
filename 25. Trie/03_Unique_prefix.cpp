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
// ✦ Dry Run
class Node
{
public:
    unordered_map<char, Node *> children;
    bool endOfWord;
    int freq;
    Node()
    {
        endOfWord = false;
    }
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node;
        root->freq = -1;
    }
    void insert(string key) // TC is O(length)
    {
        Node *tmp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (tmp->children.count(key[i]) == 0)
            { // this means key[i] not exists we need to add any go to key[i+1]
                tmp->children[key[i]] = new Node();
                tmp->children[key[i]]->freq = 1; // new
            }
            else
            {
                tmp->children[key[i]]->freq++; // new
            }
            tmp = tmp->children[key[i]];
        }
        tmp->endOfWord = true;
    }
    // string getPrefix(string key)
    // {
    //     Node *tmp = root;
    //     string ans = "";
    //     for (int i = 0; i < key.size(); i++)
    //     {
    //         ans += key[i];
    //         if (tmp->children[key[i]]->freq == 1)
    //             break;
    //         tmp->children[key[i]];
    //     }
    //     return ans;
    // }
    string getPrefix(string key)
    {
        Node *tmp = root;
        string ans = "";
        for (int i = 0; i < key.size(); i++)
        {
            ans += key[i];
            if (tmp->children[key[i]]->freq == 1)
                break;
            tmp = tmp->children[key[i]]; // Fixed line
        }
        return ans;
    }
};
void prefixProblem(vector<string> dict)
{
    Trie trie;
    for (int i = 0; i < dict.size(); i++)
    {
        trie.insert(dict[i]);
    }
    for (int i = 0; i < dict.size(); i++)
    {
        cout << trie.getPrefix(dict[i]) << endl;
    }
}
int main()
{
    vector<string> dictionary = {"zebra", "dog", "dove", "duck"};
    prefixProblem(dictionary);

    return 0;
}