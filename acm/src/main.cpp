//begin #include <Core>
/*
 * Package: StandardCodeLibrary.Core
 * Last Update: 2012-12-21
 * */
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <utility>
#include <vector>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <bitset>
#include <complex>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <climits>
#if __GNUC__>=4 and __GNUC_MINOR__>=6
	#include <ext/pb_ds/assoc_container.hpp>
	#include <ext/pb_ds/tree_policy.hpp>
	#include <ext/pb_ds/tag_and_trait.hpp>
#endif
using namespace std;

#define lp for(;;)
#define repf(i,a,b) for (int i=(a);i<(b);++i)
#define rep(i,n) repf(i,0,n)
#define ft(i,a,b) for (int i=(a);i<=(b);++i)
#define fdt(i,a,b) for (int i=(a);i>=b;--i)
#define feach(e,s) for (typeof((s).begin()) e=(s).begin();e!=(s).end();++e)
#define fsubset(subset,set) for (int subset=set&(set-1);subset;subset=(subset-1)&set)
#define forin(i,charset) for (cstr i=charset;*i;i++)
#define whl while
#define rtn return
#define fl(x,y) memset((x),char(y),sizeof(x))
#define clr(x) fl(x,char(0))
#define cpy(x,y) memcpy(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define ins insert
#define rnk order_of_key
#define sel find_by_order
#define x first
#define y second
#define sz(x) (int((x).size()))
#define all(x) (x).begin(),(x).end()
#define srt(x) sort(all(x))
#define uniq(x) srt(x),(x).erase(unique(all(x)),x.end())
#define vec vector
#define pr pair
#define que queue
#define prq priority_queue
#define itr iterator
#define sf scanf
#define pf printf
#define pdb(prcs,x) (cout<<setprecision(prcs)<<fixed<<(x))
#ifdef DEBUG
#define prt(x) cerr<<#x"="<<(x)<<endl
#define asrtWA(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtTLE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtMLE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtOLE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define asrtRE(s) do if(!(s))do{cerr<<"assert("#s")"<<endl;}whl(0);whl(0)
#define runtime() cerr<<"Used: "<<db(clock())/CLOCKS_PER_SEC<<"s"<<endl
#define input(in) do{}whl(0)
#define output(out) do{}whl(0)
#else
#define endl (char('\n'))
#define prt(x) (cerr)
#define asrtWA(s) do if(!(s))exit(0);whl(0)
#define asrtTLE(s) do if(!(s))whl(1);whl(0)
#define asrtMLE(s) do if(!(s))whl(new int);whl(0)
#define asrtOLE(s) do if(!(s))whl(1)puts("OLE");whl(0)
#define asrtRE(s) do if(!(s))*(int*)0=0;whl(0)
#define runtime() cerr
#define input(in) freopen(in,"r",stdin)
#define output(out) freopen(out,"w",stdout)
#endif

typedef long long int lli;
typedef double db;
typedef const char* cstr;
typedef string str;
typedef vec<int> vi;
typedef vec<vi> vvi;
typedef vec<bool> vb;
typedef vec<vb> vvb;
typedef vec<str> vs;
typedef pr<int,int> pii;
typedef pr<lli,lli> pll;
typedef pr<db,db> pdd;
typedef pr<str,int> psi;
typedef map<int,int> mii;
typedef map<str,int> msi;
typedef map<char,int> mci;
typedef set<int> si;
typedef set<str> ss;
typedef que<int> qi;
typedef prq<int> pqi;
#if __GNUC__>=4 and __GNUC_MINOR__>=7
	template<typename key,typename value>class ext_map:public __gnu_pbds::tree<key,value,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
	template<typename key>class ext_set:public __gnu_pbds::tree<key,__gnu_pbds::null_type,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
#elif __GNUC__>=4 and __GNUC_MINOR__>=6
	template<typename key,typename value>class ext_map:public __gnu_pbds::tree<key,value,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
	template<typename key>class ext_set:public __gnu_pbds::tree<key,__gnu_pbds::null_mapped_type,less<key>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>{};
#endif

const int oo=(~0u)>>1;
const lli ooll=(~0ull)>>1;
const db inf=1e+10;
const db eps=1e-10;
const db pi=acos(-1.0);
const int MOD=1000000007;

template<typename type>inline bool cmax(type& a,const type& b){rtn a<b?a=b,true:false;}
template<typename type>inline bool cmin(type& a,const type& b){rtn b<a?a=b,true:false;}
template<typename type>inline type sqr(const type& x){rtn x*x;}
inline int dbcmp(const db& a,const db& b){rtn (a>b+eps)-(a<b-eps);}
inline int sgn(const db& x){rtn dbcmp(x,0);}
template<typename ostream,typename type>ostream& operator<<(ostream& cout,const pr<type,type>& x){rtn cout<<"("<<x.x<<","<<x.y<<")";}
template<typename type>pr<type,type> operator-(const pr<type,type>& x){rtn mp(-x.x,-x.y);}
template<typename type>pr<type,type> operator+(const pr<type,type>& a,const pr<type,type>& b){rtn mp(a.x+b.x,a.y+b.y);}
template<typename type>pr<type,type> operator-(const pr<type,type>& a,const pr<type,type>& b){rtn mp(a.x-b.x,a.y-b.y);}
template<typename type>inline type cross(const pr<type,type>& a,const pr<type,type>& b,const pr<type,type>& c){rtn (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);}
template<typename type>inline type dot(const pr<type,type>& a,const pr<type,type>& b,const pr<type,type>& c){rtn (b.x-a.x)*(c.x-a.x)+(b.y-a.y)*(c.y-a.y);}
template<typename type>inline type gcd(type a,type b){if(b)whl((a%=b)&&(b%=a));rtn a+b;}
template<typename type>inline type lcm(type a,type b){rtn a*b/gcd(a,b);}
template<typename type>inline void bit_inc(vec<type>& st,int x,type inc){whl(x<sz(st))st[x]+=inc,x|=x+1;}
template<typename type>inline type bit_sum(const vec<type>& st,int x){type s=0;whl(x>=0)s+=st[x],x=(x&(x+1))-1;rtn s;}
template<typename type>inline type bit_kth(const vec<type>& st,int k){int x=0,y=0,z=0;whl((1<<(++y))<sz(st));fdt(i,y-1,0){if((x+=1<<i)>sz(st)||z+st[x-1]>k)x-=1<<i;else z+=st[x-1];}rtn x;}
inline void make_set(vi& st){rep(i,sz(st))st[i]=i;}
inline int find_set(vi& st,int x){int y=x,z;whl(y!=st[y])y=st[y];whl(x!=st[x])z=st[x],st[x]=y,x=z;rtn y;}
inline bool union_set(vi& st,int a,int b){a=find_set(st,a),b=find_set(st,b);rtn a!=b?st[a]=b,true:false;}
template<typename type>inline void merge(type& a,type& b){if(sz(a)<sz(b))swap(a,b);whl(sz(b))a.insert(*b.begin()),b.erase(b.begin());}
template<typename type>inline void merge(prq<type>& a,prq<type>& b){if(sz(a)<sz(b))swap(a,b);whl(sz(b))a.push(b.top()),b.pop();}

struct Initializer{Initializer(){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}~Initializer(){runtime();}}initializer;
//end #include <Core>

const int MAXN=100000;
pii p[MAXN];
int sax[MAXN],say[MAXN];
int a[9];
int szcut;
pii cut[MAXN];
int r1c[MAXN],r2c[MAXN],r3c[MAXN];

int main()
{
	int n;
	cin>>n;
	rep(i,n) cin>>p[i].x>>p[i].y;

	sort(p,p+n);
	rep(i,n) sax[i]=p[i].x;
	rep(i,n) swap(p[i].x,p[i].y);
	sort(p,p+n);
	rep(i,n) say[i]=p[i].x;
	rep(i,n) swap(p[i].x,p[i].y);

	rep(i,9) cin>>a[i];
	sort(a,a+9);

	rep(i,9) repf(j,i+1,9) repf(k,j+1,9)
	rep(ii,9) if (ii!=i&&ii!=j&&ii!=k)
	repf(jj,ii+1,9) if (jj!=i&&jj!=j&&jj!=k)
	repf(kk,jj+1,9) if (kk!=i&&kk!=j&&kk!=k)
	cut[szcut++]=(mp(a[i]+a[j]+a[k],a[ii]+a[jj]+a[kk]));
	sort(cut,cut+szcut),szcut=unique(cut,cut+szcut)-cut;

	rep(i,szcut)
	{
		int r1=cut[i].x,r2=cut[i].x+cut[i].y,r3=n;
		if (sax[r1-1]==sax[r1]||sax[r2-1]==sax[r2]) continue;
		rep(j,n)
		{
			r1c[j]=j?r1c[j-1]:0;
			r2c[j]=j?r2c[j-1]:0;
			r3c[j]=j?r3c[j-1]:0;
			if (p[j].x<sax[r1]) r1c[j]++;
			if (p[j].x<sax[r2]) r2c[j]++;
			if (true) r3c[j]++;
		}
		rep(j,szcut)
		{
			int c1=cut[j].x,c2=cut[j].x+cut[j].y,c3=n;
			if (say[c1-1]==say[c1]||say[c2-1]==say[c2]) continue;
			int b[9],szb=0;
			b[szb++]=((r1c[c1-1]-0)-0);
			b[szb++]=((r1c[c2-1]-r1c[c1-1])-0);
			b[szb++]=((r1c[c3-1]-r1c[c2-1])-0);
			b[szb++]=((r2c[c1-1]-0)-(r1c[c1-1]-0));
			b[szb++]=((r2c[c2-1]-r2c[c1-1])-(r1c[c2-1]-r1c[c1-1]));
			b[szb++]=((r2c[c3-1]-r2c[c2-1])-(r1c[c3-1]-r1c[c2-1]));
			b[szb++]=((r3c[c1-1]-0)-(r2c[c1-1]-0));
			b[szb++]=((r3c[c2-1]-r3c[c1-1])-(r2c[c2-1]-r2c[c1-1]));
			b[szb++]=((r3c[c3-1]-r3c[c2-1])-(r2c[c3-1]-r2c[c2-1]));
			sort(b,b+szb);
			bool equal=true;
			rep(k,9) if (a[k]!=b[k]) equal=false;
			if (equal)
			{
				rtn pdb(10,sax[r1-1]+0.5)<<" ",
					pdb(10,sax[r2-1]+0.5)<<endl,
					pdb(10,say[c1-1]+0.5)<<" ",
					pdb(10,say[c2-1]+0.5)<<endl,
					0;
			}
		}
	}
	cout<<-1<<endl;
}
