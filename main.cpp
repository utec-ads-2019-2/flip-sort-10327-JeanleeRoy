#include <iostream>
using namespace std;

int main() {
    int n, a[1050], ans, t;
    while (scanf("%d", &n) == 1) {
        ans = 0;
        for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        }
        for(int i=1; i<n; i++)
        for(int j=n-1; j>=i; j--)
            if(a[j-1] > a[j]){
                t = a[j-1];
                a[j-1] = a[j];
                a[j] = t;
                ans++;
            }
        cout << "Minimum exchange operations : " << ans << endl;
    }
    return 0;
}
