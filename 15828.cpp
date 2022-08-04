#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n;
    cin >> n;
    int packet = 0, packet_size = 0;

    while (packet != -1) {
        cin >> packet;
        if (packet == 0) {
            q.pop();
            packet_size = q.size();
        }
        else if (packet == -1) break;
        else{
            if (q.size() < n) {
                q.push(packet);
                packet_size += 1;
            }
        }
    }
    if (packet_size == 0) {
        printf("empty");
        return 0;
    }
    for (int i = 0; i < packet_size; i++){
        cout << q.front() << " ";
        q.pop();
    }
}