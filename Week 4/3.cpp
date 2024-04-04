#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

bool check(string s){
    int n1 = 0 , n2 = s.size()-1;
    while(n1 <= n2){
        if(s[n1] != s[n2]) return 0;
        n1++;
        n2--;
    }
    return true;
}
int palindromeIndex(string s) {
        if(check(s)){
        return -1;
    }
    
    string ans = "";
    int len = s.size();
    int i = 0;
    int j = len-1;
    while(i<=j){
        if(s[i] != s[j]){
            for(int k = i + 1; k<=j;k++){
                ans += s[k];
            }
            if(check(ans)){
                return i;
            }
            return j;
        }
        i++;
        j--;
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
