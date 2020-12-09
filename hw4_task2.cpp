#include<string>
#include <iostream>
using namespace std;
 
class integers 
{
    private:
        int a,b;  
    public:    
        integers(int x, int y)
        {
            a=x;
            b=y;
        }
        int getA(){
            return a;
        }
        int getB(){
            return b;
        }
        int add(int a,int b){
            return (a+b);
        }  
};
 
int main()
{

    integers sum(5,6);
    cout << "sum = " << sum.add(sum.getA(),sum.getB())<<"\n";
    return 0;
}