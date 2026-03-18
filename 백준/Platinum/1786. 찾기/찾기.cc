#include <bits/stdc++.h>
using namespace std;
string text,pattern;
int arr[1000001];
vector<int> ans;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    getline(cin, text);
    getline(cin, pattern);

    int T = text.length(), P = pattern.length();
    int length=0, i=1, j;
    arr[0]=0;

    while(i < P){
        if(pattern[i] == pattern[length]){
            length++;
            arr[i]=length;
            i++;
        } 
        else{
            if(length != 0){
                length = arr[length - 1];
            }
            else{
                arr[i] = 0;
                i++;
            }
        }
    }

    i=0, j=0;
    while(i<T){
        if(pattern[j] == text[i]){
            i++;
            j++;
        }
        if(j==P){
            ans.push_back(i-j+1);
            j = arr[j-1];
        }
        else if(i<T && pattern[j] != text[i]){
            if(j!=0)
                j = arr[j-1];
            else
                i++;
        }
    }
    cout << ans.size() <<"\n";
    for(const auto& i:ans)
        cout << i <<"\n";
    return 0;
}

