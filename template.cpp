#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
#include <boost/multiprecision/cpp_int.hpp>
namespace multip=boost::multiprecision;
//using lll = multip::cpp_int;   //no limit
using lll = multip::int128_t;   //has limit
using ll = long long;
using ull = unsigned long long;
using ld = long double;
#define Yes cout << "Yes" << "\n"
#define No cout << "No" << "\n"
#define YES cout << "YES" << "\n"
#define NO cout << "NO" << "\n"
#define YN {cout<<"Yes\n";}else{cout<<"No\n";}
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define el "\n"
#define rep(i,n) for(ll i=0;i<(ll)(n);++i)
#define REP(i,n) for(ll i=0;i<=(ll)(n);++i)
#define rrep(i,n) for(ll i=n-1;i>=0;--i)
#define RREP(i,n) for(ll i=n;i>=0;--i)
#define hrep(i,b,e) for(ll i=b;(b<e? i<=e:i>=e);(b<e? i++:i--))             //[b,e] or [e,b]の間をforループ
#define let(n) ll n;cin>>n
#define letv(V,n) vll V(n);rep(i,n){cin>>V[i];}
#define tlet(type,n) type n;cin>>n
#define extenddigit setprecision(15)
#define vc vector
#define str string
#define printv(V,c) for(auto it=V.begin();it!=V.end();it++){if(next(it)!=V.end())cout<<*it<<c;else cout<<*it;}cout<<el
#define vcall(v) v.begin(),v.end()
#define vcrall(v) v.rbegin(),v.rend()
#define pll pair<ll,ll>
#define bye(a) do{cout<<a<<el;return 0;}while(0)

const double pi = 3.141592653589793238;
const int inf = 1073741823;
const ll infl = 1LL << 60;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
const int dx4[4] = {1,0,-1, 0};
const int dy4[4] = {0,1, 0,-1};
const int dx8[8] = {1,1,0,-1,-1,-1, 0, 1};
const int dy8[8] = {0,1,1, 1, 0,-1,-1,-1};
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
bool is_out_field(ll i,ll j,ll H,ll W){return (i<0)||(H<=i)||(j<0)||(W<=j);}
#define ff first
#define ss second
template<typename T>
void read(T &a) {
    cin >> a;
}
template<typename T, typename... Args>
void read(T &a, Args&... args) {
    cin >> a;
    read(args...);
}
// letマクロ:宣言 + 一括読み込み
#define mlet(...) ll __VA_ARGS__; read(__VA_ARGS__)

int main(){


    return 0;
}
