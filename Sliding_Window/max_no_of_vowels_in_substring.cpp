#include<bits/stdc++.h>
using namespace std;
int maxVowels(string s, int k) {
        int n = s.size();
        int i = 0, j = 0;
        int cnt = 0, maxi = 0;

        while (j < n) {

            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u')
                cnt++;

            if (j - i + 1 == k) {
                maxi = max(maxi, cnt);

                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u')
                    cnt--;

                i++;
            }

            j++;
        }

        return maxi;
}
int main(){
    string s;
    cout<<"Enter s: ";
    cin>>s;

    int k;
    cout<<"Enter k: ";
    cin>>k;

    cout<<maxVowels(s,k);
    return 0;
}