/**
//solution2
#include<iostream>
using namespace std;
int main()
{
    int x, y,z;
    cin>>x>>y>>z;
    if (x>y)
    {

        if (z>x)
        {
            //z>x>y
            cout<<x;
        }
        else
        {
            if(z<y)
            {
                //x>z>y
                cout<<z;
            }
            else
            {
                //x>y>z
                cout<<y;
            }
        }

    }
    else
    {
        if(z>y)
        {
            //z>y>x
            cout<<y;
        }
        else
        {
            if(z>x)
            {
                //y>z>x
                cout<<z;
            }
            else
            {
                //y>x>z
                cout<<x;
            }
        }
    }

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///solution1
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int x,y,z,h,i,j,k;
cout<<"enter 3  nums :\n";
cin>> x>>y>>z;
///i is max
h= max(x,y);
i=max(h,z);
///k is mim
j = min(x,y);
k = min(j, z);
/// some if statments

///if they're all eqaul
    if (x==y && y==z )
    {
        cout<<"median is : \n"<<x;
    }

///if two of them are equal
    if (x == y&& x!=z)
        cout<<"median is : \n"<<x;
    if(y==z && y!= x)
        cout<<"median is : \n"<<y;
    if(x==z && x!=y)
        cout<<"median is : \n"<<x;

///if they're 3 different nums
    if (x !=i && x!= k )
        cout <<"median is : \n"<<x;
    if (y !=i && y!= k )
        cout <<"median is : \n"<<y;
    if (z !=i && z!= k )
        cout <<"median is : \n"<<z;
}
