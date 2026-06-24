#include<bits/stdc++.h>
using namespace std;

int search(string &pat , string &txt){
    vector<int>freq(26,0);
    int result = 0;
    int i = 0 , j = 0;
    for(int i=0 ; i<pat.length() ; i++){
        char ch = pat[i];
        freq[ch-'a']++;
    }

    while(j<txt.length()){
        bool flag = 1;
        freq[txt[j]-'a']--;
        if(j-i+1==pat.length()){
            for(int i=0 ; i<freq.size() ; i++){
                if(freq[i]!=0){
                    flag=0;
                    break;
                }
            }
            if(flag){
                result++;
            }
            freq[txt[i]-'a']++;
            i++;
        }
        j++;
    }
    return result;

}


int main(){
    string txt;
    cout<<"Enter txt: ";
    cin>>txt;

    string pat;
    cout<<"Enter pat: ";
    cin>>pat;


    cout<<" count of the occurrences of anagrams of the word in the text are : "<<search(pat,txt);
    return 0;
}