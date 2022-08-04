#include <iostream>
using namespace std;

int main() {
    int t;
    const double RIFLE = 350.34;
    const double VISUAL = 230.90;
    const double AUDITORY = 190.55;
    const double ARM = 125.30;
    const double LEG = 180.90;

    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        double res = a * RIFLE + b * VISUAL + c *AUDITORY + d * ARM + e * LEG;
        printf("$%.2lf\n", res);
    }
}