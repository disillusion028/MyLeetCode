#define MAX 26
typedef struct Trie   
{   
    Trie *next[MAX];   
    int v;
    bool flag{false};
};   
class Solution {
public: 
    Trie root;
    void createTrie(string str)
    {
        int len = str.length();
        Trie *p = &root, *q;
        for(int i=0; i<len; ++i)
        {
            int id = str[i]-'a';
            if(p->next[id] == NULL)
            {
                q = (Trie *)malloc(sizeof(Trie));
                q->v = 1;    //初始v==1
                q->flag=false;
                for(int j=0; j<MAX; ++j)
                    q->next[j] = NULL;
                p->next[id] = q;
                p = p->next[id];
            }
            else
            {
                p->next[id]->v++;
                p = p->next[id];
            }
        }
        p->v = -1;   //若为结尾，则将v改成-1表示
        p->flag=true;
    }
    string findTrie(string str)
    {
        int len = str.length();
        Trie *p = &root;
        string r;
        for(int i=0; i<len; ++i)
        {
            r+=str[i];
            int id = str[i]-'a';
            p = p->next[id];
            if(p == NULL)   //若为空集，表示不存以此为前缀的串
                return string();
            if(p->v == -1||p->flag==true)   //字符集中已有串是此串的前缀
                return r;
        }
        return r;   //此串是字符集中某串的前缀
    }
    string replaceWords(vector<string>& dict, string sentence) {
        //字典树
        int x;
        for(x=0; x<26; ++x)
            root.next[x] = NULL;
        for(int i=0;i<dict.size();i++){
            createTrie(dict[i]);
        }
        stringstream ss(sentence);
        string temp;
        string res;
        while(getline(ss,temp,' ')){
            string m=findTrie(temp);
            if(!m.empty()){
                res+=m+" ";
            }
            else res+=temp+" ";
        }
        return res.substr(0,res.size()-1);
    }
};
