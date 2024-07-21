#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> vec;
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        string inp;
        cin >> inp;
        if(inp == "push_back") {
            int k;
            scanf("%d", &k);
            vec.push_back(k);
        }
        else if(inp == "get") {
            int k;
            scanf("%d", &k);
            printf("%d\n", vec[k-1]);
        }
        else if(inp == "pop_back") {
            vec.pop_back();
        }
        else if(inp == "size") {
            printf("%d\n", vec.size());
        }
    }
    return 0;
}