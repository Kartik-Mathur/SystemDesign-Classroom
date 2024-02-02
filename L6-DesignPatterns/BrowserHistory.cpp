// https://leetcode.com/problems/design-browser-history/
class BrowserHistory {
public:
    unordered_map<int, string> h;
    int current, mx;
    BrowserHistory(string homepage) {
        current = mx = 1;
        h[current] = homepage;
    }

    void visit(string url) {
        current++;
        h[current] = url;
        mx = current;
    }

    string back(int steps) {
        int x = max(1, current - steps);
        current = x;
        return h[current];
    }

    string forward(int steps) {
        int x = min(mx, current + steps);
        current = x;
        return h[x];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */