#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void findNext(string str)
{
    int m = str.length();
    if(m == 0) return;
    int next[m];
    memset(next, 0, sizeof(next));
    for(int i = 1, j = 0; i < m; i++)
    {
        while(j && str[i] != str[j]) j = next[j - 1];
        if(str[i] == str[j]) j++;
        next[i] = j;
    }

    return;
}

int main()
{
    string str = "abcab";
    findNext(str);
    return 0;
}