#include <iostream>

#define Square(x) x*x

int Add(int,int);

void Print (int count, char ch)
{
    using namespace std;
    for (int i=0;i<count;++i){
        cout<<ch;
    }
    cout<<endl;
}

// inline int Square(int x)
// {
//     return x*x;
// }

float Max(float x, float y)
{
    return x>y?x:y;
}

int Max(int x, int y)
{
    return x>y?x:y;
}


int main() {
    int x,y;
//    std::cin>>x>>y;
    x=2;y=3;
    int result;
    result = Add(x,y);

    int a=5;
    int b=Square(a);
    std::cout<<"Square="<<b<<std::endl;


    int xx=8.1;
    float yy=4;

    int *p=new int[5]{1,2,3,4,5};
    yy=6;
    delete[]p;

    return 0;
}

void EndMessage(){
    using namespace std;
    cout<<"End of program"<<endl;
}


int Add(int x, int y){

    atexit(EndMessage);
    void(*pfn)(int, char) = Print;
    (*pfn)(8,'+');
    pfn(8,'-');

    int sum=x+y;
    std::cout<<"Sum is:"<<sum<<std::endl;
    return sum;
}