#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<string> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    stack<ll> nums;
    for (int i = n - 1; i >= 0; i--)
    {
        if (t[i] == "+" || t[i] == "-" || t[i] == "*" || t[i] == "/")
        {
            ll a = nums.top();
            nums.pop();
            ll b = nums.top();
            nums.pop();
            if (t[i] == "+")
                nums.push(a + b);
            else if (t[i] == "-")
                nums.push(a - b);
            else if (t[i] == "*")
                nums.push(a * b);
            else
                nums.push(a / b);
        }
        else
        {
            nums.push(stoll(t[i]));
        }
    }
    cout << nums.top() << "\n";
    nums.pop();

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int idx;
        cin >> idx;
        idx--;
        if (t[idx] == "+")
            t[idx] = "-";
        else if (t[idx] == "-")
            t[idx] = "+";
        else if (t[idx] == "*")
            t[idx] = "/";
        else
            t[idx] = "*";
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (t[i] == "+" || t[i] == "-" || t[i] == "*" || t[i] == "/")
        {
            ll a = nums.top();
            nums.pop();
            ll b = nums.top();
            nums.pop();
            if (t[i] == "+")
                nums.push(a + b);
            else if (t[i] == "-")
                nums.push(a - b);
            else if (t[i] == "*")
                nums.push(a * b);
            else
                nums.push(a / b);
        }
        else
        {
            nums.push(stoll(t[i]));
        }
    }
    cout << nums.top() << "\n";
}