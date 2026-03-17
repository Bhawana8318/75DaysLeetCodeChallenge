class Solution {
public:


vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;

    //  Count frequency
    for (int num : nums) {
        freq[num]++;
    }

    //  Max heap based on frequency
    priority_queue<pair<int, int>> pq; // {frequency, number}

    for (auto& it : freq) {
        pq.push({it.second, it.first});
    }

    // Extract top k elements
    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;
}
};