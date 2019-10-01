#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int128_t boost_product(long long A,long long B){
    int128_t ans=(int128_t)A*B;
    return ans;
}
int main()
{
long long first=98871717171717171;
long long second=82828282828282828;
cout<<boost_product(first,second);

return 0;
}