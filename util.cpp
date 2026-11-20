//テンプレートURL(ここが最新盤です)
//https://github.com/nnnnnnekoooooo/ac_template
//使用例
//https://atcoder.jp/contests/abc001/submissions/80039001
//https://atcoder.jp/contests/abc408/submissions/80086061
//引用元
//https://github.com/atcoder/ac-library
//https://www.boost.org/
//https://www.youtube.com/watch?v=d8fk8psRMeU
//https://qiita.com/sorachandu/items/041169d34b9f9b99bcf7
//コードの引用を許可します。

//んんんんんねこおおおおお

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
#if __has_include(<boost/multiprecision/cpp_int.hpp>)
#include <boost/multiprecision/cpp_int.hpp>
namespace multip=boost::multiprecision;
//using lll = multip::cpp_int;   //no limit
using lll = multip::int128_t;   //has limit
#endif
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
#define vii vector<int>
#define vvii vector<vector<int>>
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
#define pii pair<int,int>
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
#define get(n,p) get<p>(n)
template<class T> using pq = priority_queue<T, vc<T>>;//大きい順
template<class T> using pq_g = priority_queue<T, vc<T>, greater<T>>;//小さい順
#define plll tuple<ll,ll,ll>
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

// n行 × K列 を読み込み、列ごとの vector<ll> を返す
template<size_t K>
array<vll,K> read_cols(ll n){
    array<vll,K> r;
    for(auto& v : r) v.resize(n);
    for(ll i=0;i<n;i++) for(size_t j=0;j<K;j++) cin >> r[j][i];
    return r;
}

// 引数の個数を数える(最大16個)
#define MLETV_NARGS_IMPL(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,N,...) N
#define MLETV_NARGS(...) MLETV_NARGS_IMPL(__VA_ARGS__,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0)
#define mletv(n, ...) auto [__VA_ARGS__] = read_cols<MLETV_NARGS(__VA_ARGS__)>(n)

//各要素が素数であるかをvc<bool>に格納する(1:素数　0:素数でない)
vc<bool> primegen(ll N){
    vc<bool> prime(N,1); 

    prime[0]=prime[1]=0;
    for(ll i=2;i<prime.size();i++){
        if(prime[i]){
            for(ll j=2*i;j<prime.size();j+=i){
                prime[j]=0;
            }
        }
    }

    return prime;
}
vll primevector(ll N){
    vc<bool> primeart = primegen(N);
    vll ret;
    rep(i,primeart.size()){
        if(primeart[i]){
            ret.push_back(i);
        }
    }
    return ret;
}



//絶対誤差または相対誤差がep以下の時にTrueを返す
bool errdis(ld submit,ld actual,ld ep=1e-9){
    return abs(submit-actual)<=ep || abs(submit-actual)<=ep*actual;
}

//文字列に対してランレングス圧縮を行う
vc<pair<char,ll>> runlength(str S){
    vc<pair<char,ll>> ret;
    ret.push_back({S[0],1});
    rep(i,S.length()-1){
        if(ret.back().ff==S[i+1]){
            ret.back().ss++;
        }else{
            ret.push_back({S[i+1],1});
        }
    }
    return ret;
}

//a^nをllで求める
ll lpow(ll a, ll n){
    ll ret=1;
    rep(i,n)ret*=a;
    return ret;
}

//外積a x bを求める
ll vcprod(pll a,pll b){
    return a.ff*b.ss-a.ss*b.ff;
}
//点a,bの2点がどちらの偏角が大きいか
bool dsort(pll a,pll b){
    return vcprod(a,b)>0;
}
//(偏角ソート)vc<pll>を(x,y)のvectorとみなして偏角でのソートを行う[0,2pi)
vc<pll> degsort(vc<pll>& d){
    vc<pll> zerotopi,pito2pi;
    for(auto x:d){
        if(x.ss>0 ||x.ss==0 &&x.ff>0){
            zerotopi.push_back(x);
        }else{
            pito2pi.push_back(x);
        }
    }
    sort(vcall(zerotopi),dsort);
    sort(vcall(pito2pi),dsort);
    vc<pll> ret = zerotopi;
    for(auto x:pito2pi){
        ret.push_back(x);
    }
    return ret;
}

// A[i] <= n なる最大の i (なければ -1)
template<typename T>
ll max_idx_le(const vector<T>& A, const T& n){
    return (ll)(upper_bound(A.begin(), A.end(), n) - A.begin()) - 1;
}

// A[i] < n なる最大の i (なければ -1)
template<typename T>
ll max_idx_lt(const vector<T>& A, const T& n){
    return (ll)(lower_bound(A.begin(), A.end(), n) - A.begin()) - 1;
}

// A[i] >= n なる最小の i (なければ A.size())
template<typename T>
ll min_idx_ge(const vector<T>& A, const T& n){
    return (ll)(lower_bound(A.begin(), A.end(), n) - A.begin());
}

// A[i] > n なる最小の i (なければ A.size())
template<typename T>
ll min_idx_gt(const vector<T>& A, const T& n){
    return (ll)(upper_bound(A.begin(), A.end(), n) - A.begin());
}



using i128 = __int128;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// [a, b] の一様乱数 (i128 で受けて LLONG_MIN/MAX にも対応)
i128 rand_range(i128 a, i128 b){
    return a + (i128)uniform_int_distribution<unsigned long long>(0, (unsigned long long)(b - a))(rng);
}
ll digits_of(i128 x){          // x >= 0
    ll d = 1;
    while(x >= 10){ x /= 10; d++; }
    return d;
}
// 絶対値が [lo, hi] (0 <= lo <= hi) で、桁数が d の範囲から一様に選ぶ
i128 pick_mag(i128 lo, i128 hi, ll d){
    i128 dlo = 0, dhi = 1;
    if(d >= 2){ dlo = 1; for(ll i=1;i<d;i++) dlo *= 10; }
    for(ll i=0;i<d;i++) dhi *= 10;
    dhi -= 1;
    return rand_range(max(lo, dlo), min(hi, dhi));
}

// L以上R以下 (負も可) の対数的にランダムな整数
ll log_rand(ll L, ll R){
    assert(L <= R);
    // 負側: 絶対値 [nlo, nhi],  非負側: [plo, phi]
    bool hasN = L < 0, hasP = R >= 0;
    i128 nlo = 0, nhi = 0, plo = 0, phi = 0;
    ll dnl = 0, dnh = 0, dpl = 0, dph = 0, cn = 0, cp = 0;
    if(hasN){
        nlo = (R < 0 ? -(i128)R : 1);
        nhi = -(i128)L;
        dnl = digits_of(nlo); dnh = digits_of(nhi);
        cn = dnh - dnl + 1;
    }
    if(hasP){
        plo = (L >= 0 ? L : 0);
        phi = R;
        dpl = digits_of(plo); dph = digits_of(phi);
        cp = dph - dpl + 1;
    }
    // 「符号 × 桁数」の全クラスから一様に選ぶ
    ll k = (ll)rand_range(0, cn + cp - 1);
    if(k < cn) return (ll)(-pick_mag(nlo, nhi, dnl + k));
    return (ll)pick_mag(plo, phi, dpl + (k - cn));
}




int main(){
    let(N);
    //vc<bool> p = primegen(N);
    vll a=primevector(N);
    printv(a," ");


    return 0;
}
