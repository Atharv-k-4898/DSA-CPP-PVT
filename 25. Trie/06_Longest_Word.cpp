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

    void longestHelper(Node *root, string &ans, string tmp)
    {
        for (pair<char, Node *> child : root->children)
        {
            if (child.second->endOfWord)
            {
                tmp += child.first;
                if ((tmp.size() == ans.size() && tmp < ans) || (tmp.size() > ans.size()))
                {
                    ans = tmp;
                }
                longestHelper(child.second, ans, tmp);
                tmp = tmp.substr(0, tmp.size() - 1);
            }
        }
    }
    string longestStringWithEOW()
    {
        string ans = "";
        longestHelper(root, ans, "");
        return ans;
    }
};
string longestWord(vector<string> &dict)
{
    Trie trie;
    for (int i = 0; i < dict.size(); i++)
    {
        trie.insert(dict[i]);
    }
    return trie.longestStringWithEOW();
}
int main()
{
    vector<string> words = {"a", "ap", "app", "appl", "apple", "apply", "banana"};
    cout << longestWord(words);
    return 0;
}