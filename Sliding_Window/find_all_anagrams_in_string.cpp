#include<bits/stdc++.h>
using namespace std;

void search(string &pat , string &txt , vector<int>&ans){
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
                ans.push_back(i);
            }
            freq[txt[i]-'a']++;
            i++;
        }
        j++;
    }
}


int main(){
    string txt;
    cout<<"Enter txt: ";
    cin>>txt;

    string pat;
    cout<<"Enter pat: ";
    cin>>pat;

    vector<int>ans;

    search(pat,txt,ans);

    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }

    
    return 0;
}