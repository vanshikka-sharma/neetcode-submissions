class StockSpanner {
public:
    vector<int> prices;

    StockSpanner() {
    }

    int next(int price) {
        int count = 1;
        for (int i = prices.size() - 1; i >= 0; i--) {
            if (prices[i] <= price) {
                count++;
            }
            else {
                break;
            }
        }
        prices.push_back(price);

        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */