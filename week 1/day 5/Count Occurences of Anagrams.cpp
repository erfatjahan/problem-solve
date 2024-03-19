//User function template for C++
class Solution {
public:
    int search(string c, string txt) {
        int Frreq[256] = {0};
        for (char ch :c) {
            Frreq[ch]++;
        }
        int i = 0, j = 0, ans = 0;
        int freq[256] = {0};
        while (j < txt.length()) {
            freq[txt[j]]++;
            if (j - i + 1 <c.length()) {
                j++;
            } else if (j - i + 1 == c.length()) {
                int flag = 1;
                for (int k = 0; k < 256; k++) {
                    if (Frreq[k] != freq[k]) {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                    ans++;
                freq[txt[i]]--;
                i++;
                j++;
            }
        }
        return ans;
    }
};
