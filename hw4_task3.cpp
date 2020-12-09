#include<string>
#include <iostream>
using namespace std;
 
class complex 
{
    
    public:   
        int real, img; 
        void sum(complex x, complex y){
            real=x.real+y.real;
            img=x.img+y.img;
        }
        void disp(){
            cout << real<<"+" <<img<<"i\n";
        }  
};

int main()
{
        complex X;
        X.real=1;
        X.img=3;
        complex Y;
        Y.real=4;
        Y.img=6;
        complex C;
        C.sum(X,Y);
        C.disp();
    
    return 0;
}