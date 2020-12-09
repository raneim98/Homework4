#include<string>
#include <iostream>
using namespace std;
 
class rectangle 
{
    private:
        int l,w;  
    public:    
        rectangle(int rect_l, int rect_w)
        {
            l=rect_l;
            w=rect_w;
        }
        int getL(){
            return l;
        }
        int getW(){
            return w;
        }
        int area(int l,int w){
            return (l*w);
        }  
};
 
int main()
{

    rectangle rect(5,6);
    cout << "area = " << rect.area(rect.getL(),rect.getW())<<"\n";
    return 0;
}