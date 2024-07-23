#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    list<int> ls;
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        if(s == "push_back") {
            int k;
            scanf("%d", &k);
            ls.push_back(k);
        }
        else if(s== "push_front") {
            int k;
            scanf("%d", &k);
            ls.push_front(k);
        }
        else if(s == "pop_front") {
            printf("%d\n", ls.front());
            ls.pop_front();
        }
        else if(s == "pop_back") {
            printf("%d\n", ls.back());
            ls.pop_back();
        }
        else if(s=="size") {
            printf("%d\n", ls.size());
        }
        else if(s == "empty") {
            printf(ls.empty() ? "1\n" : "0\n");
        }
        else if(s == "front") {
            printf("%d\n", ls.front());
        }
        else if(s == "back") {
            printf("%d\n", ls.back());
        }
    }
    return 0;
}