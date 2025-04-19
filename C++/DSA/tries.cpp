#include <iostream>
#include <unordered_map>
using namespace std;

// Trie Node structure
class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
    }
};

// Trie class
class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    // Function to insert a word into the Trie
    void insert(string word) {
        TrieNode* currentNode = root;
        for (char ch : word) {
            if (currentNode->children.find(ch) == currentNode->children.end()) {
                currentNode->children[ch] = new TrieNode();
            }
            currentNode = currentNode->children[ch];
        }
        currentNode->isEndOfWord = true;
    }

    // Function to search for a word in the Trie
    bool search(string word) {
        TrieNode* currentNode = root;
        for (char ch : word) {
            if (currentNode->children.find(ch) == nullptr) {
                return false;
            }
            currentNode = currentNode->children[ch];
        }
        return currentNode->isEndOfWord;
    }

    // Function to check if any word starts with a given prefix
    bool startsWith(string prefix) {
        TrieNode* currentNode = root;
        for (char ch : prefix) {//it will iterate the number of times the prefix is there like if he the 2 times
            if (currentNode->children.find(ch) == nullptr) {
                return false;
            }
            currentNode = currentNode->children[ch];
        }
        return true;
    }
};

int main() {
    Trie trie;
    
    // Insert words into the Trie
    trie.insert("hello");
    trie.insert("world");
    trie.insert("hi");
    trie.insert("her");

    // Search for words
    cout << "Search 'hello': " << trie.search("hello") << endl;  // Output: 1 (true)
    cout << "Search 'world': " << trie.search("world") << endl;  // Output: 1 (true)
    cout << "Search 'her': " << trie.search("her") << endl;      // Output: 1 (true)
    cout << "Search 'he': " << trie.search("he") << endl;        // Output: 0 (false)

    // Check prefix
    cout << "Starts with 'he': " << trie.startsWith("he") << endl;  // Output: 1 (true)
    cout << "Starts with 'wo': " << trie.startsWith("wo") << endl;  // Output: 1 (true)
    cout << "Starts with 'a': " << trie.startsWith("a") << endl;    // Output: 0 (false)

    return 0;
}
