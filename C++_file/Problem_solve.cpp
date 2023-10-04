#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b){if(a==0) return b; if(b==0) return a; return __gcd(a,b);};
#define optimize() ios_base::sync_with_stdio(0);
#define endl '\n'
#define ll long long
#define FOR(i,x) for(ll i=0; i<x; i++)
#define FORN(i,x) for(ll i=1; i<x; i++)
#define pi pair<int,int>
#define vec_st vector<string>
#define vec_I vector<ll>
#define vec_pi vector<pair<int,int>>
#define se set<ll>
#define pb push_back
#define all(x) x.begin(),x.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define tc() ll t; cin >> t; while(t--)
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    #endif
}
bool isBalanced(char c1,char c2)
{
    return (c1=='(' && c2 == ')') || (c1=='{' && c2=='}') ||(c1=='[' && c2==']');
}
void solve1()
{
    /*int temp = upper_bound(v.begin(),v.end(),x)-v.begin();
    int a = min(x,min(y,z));
    int b = max(x,max(y,z));
    reverse(v.begin(),v.end());
    sort(v.begin(),v.end());
    auto it = unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));*/
    // string s = "TamzAid";
    // cout << *max_element(s.begin(),s.end()) << endl;
    // cout << *min_element(s.begin(),s.end()) << endl;
    // s.erase(remove(s.begin(),s.end(),'A'),s.end());
    // cout << s << endl;
 
    string s; cin >> s;
    stack <int> st;
    bool done = 1;
    for(auto u:s)
    {
        if(u=='(' || u =='{' || u=='[') 
        {
            st.push(u);
        }else{
            if(st.empty())
            {
                done = 0;
                break;
            }
            else{
                if(isBalanced(st.top(),u))
                {
                    st.pop();
                }else{
                    done =0;
                    break;
                }
            }
        }
    }
    if(!st.empty()) done =0;
    if(done) cout << "YES" << endl;
    else cout << "NO" << endl; 
}
void solve2()
{
    string s,s1; cin >> s >> s1;
    string d="";
    ll k=s1.length()-s.length();
    for(ll i=0; i<k; i++)
    {
        d+='0';
    }
    d+=s;
    ll ct=0;
    FOR(i,d.size())
    {
        if(d[i]!=s1[i])
        {
            ll x=s1[i]-'0';
            ll y=d[i]-'0';
            ct+=(abs(x-y));
            ct+=(9*(d.size()-i-1));
            break;
        }
    }
    cout << ct << endl;   
}
void solve()
{
    cout << "Hello World" << endl;
}
int main()
{
    optimize();
    file();
    tc()
    {
        solve();
    }
    //solve();
    return 0;
}