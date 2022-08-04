#include <iostream>
using namespace std;

int main() {
    long long vk, jk, va, ja, vh, dh, jh;
    cin >> vk >> jk >> va >> ja >> vh >> dh >> jh;
    long long lightK = vk *jk;
    long long lightA = va * ja;
    long long heavy = vh * dh *jh;
    cout << heavy*(lightA+lightK);
}