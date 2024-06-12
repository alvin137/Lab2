#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {

    if (vec.size() == M) {
        for (auto e: vec) {
            cout << e << " ";
        }
        cout << endl;
    }

    for (int i = cnt + 1; i <= N; i++) {
        vec.emplace_back(i);
        func(i);
        vec.pop_back();
    }
}

int main() {
    cin >> N >> M;
    func(0);
}
