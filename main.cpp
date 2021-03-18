#include <iostream>

using namespace std;
int counter2 =0, counter1=0;;
void fun(string a){
    swap (a[1],a[2]);
    swap (a[2], a[0]);
    cout<< a<<endl;
    counter1 ++;
    counter2 ++;
    if (counter1 == 2){
        swap(a[0] , a[2]);
        counter1 = 0;
    }
    if(counter2 == (6))
        return;
    fun(a);
}
int main()
{
    string s;cin>>s;
    fun(s);
}

