using namespace std;

namespace cal{
    double pw(double a, int b){
        int result = 1;
        for(int i = 1; i<=b; i++){
            result *=a;
        }
         cout<<result<<endl;
         return result;

    }
}

