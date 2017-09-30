#include<bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE 26

struct TrieNode
{
	struct TrieNode *children[ALPHABET_SIZE];
	bool isLeaf; 
};

struct TrieNode * getNode(void)
{
	struct TrieNode *pNode = NULL;
	//pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));
	pNode = new TrieNode;
	
	if(pNode)
	{
		int i;
		pNode -> isLeaf = false;
		for(i = 0; i < ALPHABET_SIZE; i++)
		{
			pNode -> children[i] = NULL;
		}	
	}	
	
	return pNode;
}

void insert(struct TrieNode *root, const char *key)
{
	int level;
	int length = strlen(key);
	int index;
	
	struct TrieNode *pCrawl = root;
	for(level = 0; level < length; level++)
	{
			index = key[level] - 'a';
			if(!pCrawl->children[index])
				pCrawl->children[index] = getNode();
			
			pCrawl = pCrawl -> children[index];
	}
	
	pCrawl -> isLeaf = true;
	
}

bool search(struct TrieNode *root, const char *key)
{
	int level;
	int length = strlen(key);
	int index;
	struct TrieNode *pCrawl = root;
	
	for(level = 0; level < length; level++)
	{
		index = key[level] - 'a';
 
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
	}
	
	return (pCrawl != NULL && pCrawl->isLeaf);
	
}

int main()
{
	 char keys[][8] = {"the", "a", "there", "answer", "any",
                     "by", "bye", "their"};

	char output[][32] = {"Not present in trie", "Present in trie"};
	
	struct TrieNode *root = getNode();
	int i;
	for(i = 0; i < 8; i++)
	{
		insert(root, keys[i]);
	}
	
	printf("%s --- %s\n", "the", output[search(root, "the")] );
    printf("%s --- %s\n", "these", output[search(root, "these")] );
    printf("%s --- %s\n", "their", output[search(root, "their")] );
    printf("%s --- %s\n", "thaw", output[search(root, "thaw")] );
 
	return 0;
}
