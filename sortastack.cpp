#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int x)
{
    if (s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }
    int temp = s.top();
    //popping elements
    s.pop();
    sortedInsert(s, x);
using namespace std;

void sortedInsert(stack<int> &s, int x)
{
    if (s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }
    int temp = s.top();
    //popping elements
    s.pop();
    sortedInsert(s, x);
using namespace std;

void sortedInsert(stack<int> &s, int x)
{
    if (s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }
    int temp = s.top();
    //popping elements
    s.pop();
    sortedInsert(s, x);
using namespace std;

void sortedInsert(stack<int> &s, int x)
{
    if (s.empty() || s.top() < x)
    {
        s.push(x);
        return;
    }
    int temp = s.top();
    //popping elements
    s.pop();
    sortedInsert(s, x);
    s.push(temp);
}

void sort(stack<int> &s, int n)
{
    if (!s.empty())
    {
        int x = s.top();
        s.pop();
        sort(s, n);
        sortedInsert(s, x);
    }
}

int main()
{
    stack<int> s;   s.push(x);
        return;
    }
    int temp = s.top();
    //popping elements
    s.pop();
    sortedInsert(s, x);
    s.push(temp);
}

void sort(stack<int> &s, int n)
{
    if (!s.empty())
    {
        int x = s.top();
        s.pop();
        sort(s, n);
        sortedInsert(s, x);
    }
}

int main()
{
    stack<int> s;   s.push(x);
        return;
    }
    int temp = s.top();
    //popping elements
    s.pop();
    sortedInsert(s, x);
    s.push(temp);
}

void sort(stack<int> &s, int n)
{
    if (!s.empty())
    {
        int x = s.top();
        s.pop();
        sort(s, n);
        sortedInsert(s, x);
    }
}

int main()
{
    stack<int> s;
    int n, i = 0, temp;
    //input elements
    cin >> n;
    while (i < n)
    {
        cin >> temp;
        s.push(temp);
        i++;
    }
    //sorted stack
    sort(s, n);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
