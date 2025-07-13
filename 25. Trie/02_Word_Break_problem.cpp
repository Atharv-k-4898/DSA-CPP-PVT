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
    }
    void insert(string key) // TC is O(length)
    {
        Node *tmp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (tmp->children.count(key[i]) == 0) // this means key[i] not exists we need to add any go to key[i+1]
                tmp->children[key[i]] = new Node();
            tmp = tmp->children[key[i]];
        }
        tmp->endOfWord = true;
    }
    bool search(string key) // TC is O(length)
    {
        Node *tmp = root;
        for (int i = 0; i < key.size(); i++)
        {
            if (tmp->children.count(key[i])) // this means key is not there so return false
                tmp = tmp->children[key[i]];
            else
                return false;
        }
        return (tmp->endOfWord = true);
    }
};
bool helper(Trie &trie, string key)
{
    if (key.size() == 0)
        return true;
    for (int i = 0; i < key.size(); i++)
    {
        string first = key.substr(0, i + 1);
        string second = key.substr(i + 1);
        if (trie.search(first) && helper(trie, second))
            return true;
    }
    return false;
}
bool wordBreak(vector<string> dict, string key)
{
    Trie trie;
    for (int i = 0; i < dict.size(); i++)
    {
        trie.insert(dict[i]);
    }
    return helper(trie, key);
}
int main()
{
    vector<string> dictionary = {"i", "like", "sam", "samsung", "mobile", "ice"};
    cout << wordBreak(dictionary, "ilikesamsung") << endl;

    return 0;
}