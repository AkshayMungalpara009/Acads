#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

stack<int> S;

void insertproper(int kh)
{

    if(S.empty())
        S.push(kh);
    else if(S.top()>=kh)
        S.push(kh);
    else
    {
        int g = S.top();
        S.pop();
        insertproper(kh);
        S.push(g);
    }
}

void sort1()
{
    if(S.empty())
        return;
    int ka = S.top();

    S.pop();
    sort1();
    insertproper(ka);
}

int main()
{
    S.push(17);
    S.push(17777);
    S.push(21);
    S.push(13);

    sort1();

    while(S.size()!=0)
    {
        int p = S.top();
        S.pop();
        cout << p<< "\n";
    }

    return 0;
}
