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

class Car{
    //Data Members
    private:
        int price;
    public:
        int model;
        char *name;
        const int tyres;

    //Member Functions
    public:
        //Constructor - unparameterised
        Car();
        //Constructor - parameterised
        Car(int p,int m,char* n);
        //Copy Constructor (DEEP COPY)
        Car(Car &x){
            cout << "Making a copy..." << endl;
            price = x.price;
            model = x.model;
            name = new char[strlen(x.name)+1];
            strcpy(name,x.name);
        }
        void setName(char* n);
        void start();
        void setPrice(int p);
        void getPrice();
        void describe();

        //Destructor
        ~Car(){
            cout << "Destroying car: " << name << endl;
            if(name!=NULL) delete [] name;
        }
};

Car::Car(){
    name = NULL;
    cout << "Car in the Making..." << endl;
}

Car::Car(int p,int m,char* n){
    cout << "Car in the Making..." << endl;
    price = p;
    model = m;
    name = new char[strlen(n)+1];
    strcpy(name,n);
}

void Car::setName(char* n){
    if(name == NULL){
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }else{
        //later...
    }
}

void Car::start(){
    cout << "Starting..." << endl;
}

void Car::setPrice(int p){
    if(p > 1000) price = p;
    else price = 1000;
}

void Car::getPrice(){
    cout << price << endl;
}

void Car::describe(){
    cout << name << endl;
    cout << model << endl;
    getPrice();
}

int main() {
    ios_base::sync_with_stdio(0);
    int t, i, j, k, p, q, r, x, y, u, v, n, m;
    /*Car C;
    //C.price = 5000;(private)
    C.model = 1002;
    C.setName("Nano");
    C.setPrice(5000);
    C.describe();*/

    Car D(10000,2512,"Ford");
    D.describe();

    Car E(D); //Default copy constructor (shallow copy)
    //Now over-riden by Deep copy constructor made in the class
    E.name[0] = 'C';
    E.describe();
    D.describe();

    //Dynamic car object;
    Car* a = new Car(30000,6766,"Tesla");
    delete a;


    return 0;
}

