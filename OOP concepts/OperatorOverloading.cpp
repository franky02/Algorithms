#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<=n:i>=n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef set<int>        si;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
const int mod = 1000000007;
const int N = 3e5,M = N;


class Complex{
    private:
        int real;
        int img;
    public:
        Complex();
        Complex(int r,int i);
        void setReal(int r);
        void setImg(int i);
        void getReal();
        void getImg();
        void add(Complex &c1,Complex &c2);
        void print();

        //Overloading + 
        Complex operator+(Complex &x){
            Complex res;
            res.real = real + x.real;
            res.img = img + x.img; 
            return res;
        }

        //Overloading []
        void operator[](string s){
            if(s == "real") cout << real << endl;
            else cout << img << endl;;
        }       
};


//Overload Globally : we do not want to change functions inside iostream header
//Overloading >> and cascading
istream& operator>>(istream &is,Complex &x){
    int r,i;
    is >> r >> i;
    x.setReal(r);
    x.setImg(i);
    return is;
}

//Overloading <<
ostream& operator<<(ostream &os, Complex &x){
    x.print();
    return os;
}

Complex::Complex(){
    real = 0;
    img = 0;
}

Complex::Complex(int r,int i){
    real = r;
    img = i;
}

void Complex::setReal(int r){
    real = r;
}

void Complex::setImg(int i){
    img = i;
}

void Complex::getReal(){
    cout << real << endl;
}

void Complex::getImg(){
    cout << img << endl;
}

void Complex::add(Complex &c1,Complex &c2){
    real = c1.real+c2.real;
    img = c1.img+c2.img;
}


void Complex::print(){
    if(img > 0){
        cout << real << "+" << img << "i" << endl; 
    }else{
        cout << real << "-" << img << "i" << endl;
    }
}



int main() {
    ios_base::sync_with_stdio(0);
    int t, i, j, k, p, q, r, x, y, u, v, n, m;
    /*Complex c1(5,3);
    Complex c2;
    c2.setImg(4);

    c1.print();
    c2.print();

    Complex c3;
    c3.add(c1,c2);
    c3.print();

    //overloaded operator
    Complex c4 = c1+c3;
    c4.print();*/

    Complex c5,c6,c7;
    cin>>c5>>c6;
    c7 = c5+c6;
    cout<<c7;


    
    

    return 0;
}

