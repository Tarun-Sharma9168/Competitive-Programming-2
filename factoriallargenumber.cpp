#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main()
{
    int number=100;
    boost::multiprecision::cpp_int factorial=1;

    for(int i=1;i<=number;i++){
        factorial*=i;
    }
    cout<<factorial<<"\n";
    return 0;
}