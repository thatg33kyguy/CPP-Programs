#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to count occurrences of "1543" in a single layer
int countOccurrencesInLayer(const string& layer, const string& target) {
    int count = 0;
    size_t pos = 0;
    while ((pos = layer.find(target, pos)) != string::npos) {
        count++;
        pos++;  // Move to the next character to allow overlapping
    }
    return count;
}

// Function to process the carpet and count occurrences of "1543"
int count1543Occurrences(vector<vector<int>>& carpet, const string& target) {
    int totalCount = 0;
    int n = carpet.size();
    int m = carpet[0].size();
    
    // Traverse the carpet in layers
    for (int layer = 0; layer < (min(n, m) + 1) / 2; ++layer) {
        string currentLayer;

        // Top row (left to right)
        for (int j = layer; j < m - layer; ++j) {
            currentLayer += to_string(carpet[layer][j]);
        }
        
        // Right column (top to bottom)
        for (int i = layer + 1; i < n - layer; ++i) {
            currentLayer += to_string(carpet[i][m - layer - 1]);
        }

        // Bottom row (right to left), if there is a bottom row left
        if (n - layer - 1 > layer) {
            for (int j = m - layer - 2; j >= layer; --j) {
                currentLayer += to_string(carpet[n - layer - 1][j]);
            }
        }

        // Left column (bottom to top), if there is a left column left
        if (m - layer - 1 > layer) {
            for (int i = n - layer - 2; i > layer; --i) {
                currentLayer += to_string(carpet[i][layer]);
            }
        }

        // Count occurrences of "1543" in the current layer
        totalCount += countOccurrencesInLayer(currentLayer, target);
    }
    
    return totalCount;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> carpet(n, vector<int>(m));
    // Read the carpet digits
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> carpet[i][j];
        }
    }

    // Count occurrences of "1543"
    string target = "1543";
    int totalCount = count1543Occurrences(carpet, target);

    cout << totalCount << endl;

    return 0;
}
