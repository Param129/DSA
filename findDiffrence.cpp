#include<bits/stdc++.h>
using namespace std;


    char findTheDifference(string s, string t) {
        map<char,int>mp;
        char ans;
        for(char ch:s){
            mp[ch]++;
        }

        for(char ch : t){
            if(--mp[ch]<0){
                return ch;
            }
        }
        return '\0';
    }


int main(){
    
return 0;
}
