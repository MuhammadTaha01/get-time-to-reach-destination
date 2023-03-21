#include<iostream>
using namespace std;
int main()
{
    float d,v,t;
    cout<<"Enter distance __km: ";
    cin>>d;
    cout<<"Enter speed __km/h: ";
    cin>>v;

    t=d/v;
    cout<<"Time to get destination is: "<<t<<"hrs"<<endl;


    return 0;
}
