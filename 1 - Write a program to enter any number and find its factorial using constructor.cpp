#include <iostream>
using namespace std;
class factorial
{
private:
    int v,fact;
public:
    factorial(int number)
    {
        fact=1;
        v=number;
        for(int i=1;i<=v;i++)
        {
            fact=fact*i;
        }
    }
    void display();
};
void factorial:: display()
    {
        cout<<fact<<endl;
    }
int main()
{
    int number;
    cout<<"Enter an integer number:"<<endl;
    cin>>number;
    factorial f1(number);
    f1.display();
    return 0;
}
