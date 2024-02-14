#include <bits/stdc++.h> 

using namespace std; 
#define ll long long  
#define ld long double  
const int M=1e9+7;
#define rep(i,a,b) for(int i=a;i<=b;i++)


#include <random>
ld randomFloat() {
    // std::random_device rd;  // Obtain a random number from hardware
    // std::mt19937 gen(rd()); // Seed the generator
    // std::uniform_real_distribution<float> dis(min, max); // Define the range

    // return dis(gen); // Generate a random float

    return ((double) rand() / (RAND_MAX));
}





void solve(){
    
    ll sq=1, cir=1;

    for(ll i=0;1;i++){
        if(i%100000000==0){cout<< 4*(float)cir/(float)sq<<endl;flush(cout);}
        ld x=randomFloat();
        ld y=randomFloat();
        if( 0<=x && x<=1  && 0<=y && y<=1){sq++;}

        if( (x-(ld).5)*(x-(ld).5) + (y-(ld).5)*(y-(ld).5) <=(ld).25 ){cir++;}


    }

    cout<< 4*cir/sq<<endl;
    flush(cout);


    
}

// pi r*2
// 2r *2r


int main(){
    #ifndef Beautify
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;
   cout<<fixed<<setprecision(10);//**for more digits in decimal ,fixed will add 0's to make decimal of that precision size
  // cin>>t;
  t=1;
  cout<<"de";

  
    while(t--){
         solve();
    }

}
    

