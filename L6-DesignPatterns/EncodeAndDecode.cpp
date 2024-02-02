// https://leetcode.com/problems/encode-and-decode-tinyurl/
class Solution {
public:
    unordered_map<string, string> h;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string x = "";
        for (char s : longUrl) {
            int randomNo = floor(rand() % 255);
            x.push_back(randomNo);
        }
        h[x] = longUrl;
        return x;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return h[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));