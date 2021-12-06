#include <iostream>
#include <vector>
using namespace std;

vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{

        int n = 1e6;
        vector<long long> ans;
        
        int hash[n] = {0};

        for (int i = 0; i < M; i++) {
            hash[B[i]] = 1;
        }

        for (int i = 0; i < N; i++) {
            if(hash[A[i]] == 0) {
                ans.push_back(A[i]);
            }
        }


        return ans;
	}

int main() {

    int n, m;
    cin >> n >> m;

    long long a[n], b[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<long long> ans = findMissing(a, b, n, m);


    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;

}