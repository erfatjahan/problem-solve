#include <bits/stdc++.h>
using namespace std;
priority_queue<long long> q, p;
int main()
{
    long long t;
    cin >>t;
    while(t--)
    {
        long long n;
        cin >> n;
        while(!q.empty()) q.pop();
        while (!p.empty()) p.pop();
        long long s = 0;
        for (long long i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            s += x;
            p.push(x);
        }
        q.push(s);
        while (!p.empty())
        {
            long long x = q.top();
            q.pop();
            if (x == p.top())
                p.pop();
            else if (x < p.top())
            {
                break;
            }
            else
            {
                q.push(x / 2);
                q.push(x - x / 2);
            }
        }
        if (p.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
