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

//blue print of the car
class Car{
    private:
        int price;
        int model;
        string name;
    public:
        //constructor : overrides default constructor
        Car(); 
        //parameterised constructor
        Car(int price,int model,string name);  
        //Copy constructor(user defined)
        Car(Car &X){
            price = X.price;
            model = X.model;
            name = X.name;
        }
        //use pass by reference (Dont pass a copy to copy constructor)

        void start();
        //setter -> (price is a private data member) 
        void setPrice(int p);
        //getter -> get the price 
        void getPrice();
};

// :: => scope resolution operator
Car::Car(){
    cout << "Making a car..." << endl;
}

Car::Car(int p,int m,string n){
    price = p;
    model = m;
    name = n;
}

void Car::start(){
    cout << "Starting..." << endl;
}

void Car::setPrice(int p){
    price = p;
}

//able to impose constraints
void Car::getPrice(){
    if(price > 0) cout << price << endl;
    else cout << "Not defined" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t, i, j, k, p, q, r, x, y, u, v, n, m;
    Car c;
    c.setPrice(100000);
    c.getPrice();

    //Parameterised constructor
    Car E(350000,10023,"Jaguar");
    E.getPrice();

    //copy constructor : exists by default(inbuilt)
    Car F(E);
    F.getPrice();

    Car G(F);
    G.start();

    //Car a[100]; //array of cars
    return 0;
}

