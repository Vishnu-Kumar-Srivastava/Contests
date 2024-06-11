unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    // Step 2: Store the frequencies in a vector of pairs and sort by frequency in descending order
    vector<pair<int, int>> sortedFreq(freq.begin(), freq.end());
    sort(sortedFreq.begin(), sortedFreq.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    // Step 3: Apply the greedy approach to maximize the length of the good subsequence
    int total_length = 0;
    int total_changes = 0;

    for (const auto& entry : sortedFreq) {
        int count = entry.second;
        if (total_changes + count - 1 <= k) {
            total_length += count;
            total_changes += count - 1;
        } else {
            int remaining_changes = k - total_changes;
            total_length += remaining_changes + 1;
            break;
        }
    }

    return total_length;