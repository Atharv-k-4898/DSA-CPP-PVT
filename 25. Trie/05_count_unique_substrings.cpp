#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Node
{
public:
    unordered_map<char, Node *> children;
    Node() {}
};

class Trie
{
    Node *root;
    int count;

public:
    Trie()
    {
        root = new Node();
        count = 0;
    }
    void insertSuffix(string s)
    {
        Node *tmp = root;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (tmp->children.count(ch) == 0)
            {
                tmp->children[ch] = new Node();
                count++; // New node means new unique substring
            }
            tmp = tmp->children[ch];
        }
    }

    int countDistinctSubstrings(string str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            insertSuffix(str.substr(i)); // Insert all suffixes
        }
        return count + 1; // +1 for empty string
    }
};

int main()
{
    string str = "ababa";
    Trie trie;
    cout << "Total ans " << trie.countDistinctSubstrings(str) << endl;
    return 0;
}
