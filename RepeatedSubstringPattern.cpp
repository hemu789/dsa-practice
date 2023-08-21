#include<bits/stdc++.h>
using namespace std;

    bool check(string s){

        int n=s.length();

        //n : len of string
        //i : len of substring

        for(int i=1;i<=n/2;i++){ // check for half : repeating
            if(n%i==0){ // 
                string ans="";
                for (int j = 0; j < n / i; j++) 
                {
                    ans += s.substr(0, i); // 1 part of substring for every i
                }
                if (s == ans)
                {
                    return true;
                }
            }
        }
        return false;

    }
        
    int main(){

        string s;
        getline(cin,s);
       if(check(s)){
        cout<<"Pattern follows"<<endl;
       }
       else{
        cout<<"Not Follow"<<endl;
       }

        return 0;
    }