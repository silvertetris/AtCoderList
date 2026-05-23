#include <bits/stdc++.h>

#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s = "";
        cin >> s;
        int length = s.size();
        vector<int> cnt(26, 0);
        priority_queue<pair<int, char>> pq;
        for (int i = 0; i < length; i++)
        {
            cnt[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > 0)
            {
                pq.push({cnt[i], 'a' + i});
            }
        }
        if (length % 2 == 0)
        {
            if (*max_element(cnt.begin(), cnt.end()) > length / 2)
            {
                cout << "No\n";
                continue;
            }
        }
        else
        {
            if (*max_element(cnt.begin(), cnt.end()) > length / 2 + 1)
            {
                cout << "No\n";
                continue;
            }
        }
        cout << "Yes\n";
        char prev = '\0';
        int prevcnt = 0;
        while (!pq.empty())
        {
            auto [freq, ch] = pq.top();
            pq.pop();

            if (ch == prev)
            {
                auto [freq2, ch2] = pq.top();
                pq.pop();
                cout << ch2;
                pq.push({freq, ch});

                prev = ch2;
                if (freq2 - 1 > 0)
                    pq.push({freq2 - 1, ch2});
            }
            else
            {
                cout << ch;
                prev = ch;
                if (freq - 1 > 0)
                    pq.push({freq - 1, ch});
            }
        }
        cout << "\n";
    }
}