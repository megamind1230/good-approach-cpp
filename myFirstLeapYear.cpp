///code to check wether the date is right? && to say if it's a leap year or not?
#include<iostream>
#include<string>
#include <sstream>
void func_l(int x, int y,int temp);
void func_nl(int x, int y,int temp);
using namespace std;
int main()
{

///x for months, y for days , z for years
int x,y;
string z;
cout<<"enter the date as follows\n";
cout<<"month day year\n";

//get months
do{
    cin>>x;
}while(!(1<=x&&x<=12));


//get days
do
{
        cin>>y;

}while(!(1<=y&&y<=31));

//get years as str
do
{
    cin>>z;
}
while(!(z.size()==4));

///we can use
///int temp = stoi(z);
///or
///#include<sstream>
///int temp;
///stringstream ( z ) >> temp;


int temp;
stringstream ( z ) >> temp;



int a = (temp/100)*100;
int check = temp - a;
///leap or not ? && checking whether the date is CORRECT or not?
if(check==0)
{
    if(temp%400==0)
    {
        cout<<"IT IS A LEAP YEAR \n";
        func_l(x,y,temp);
    }
    else
    {
        cout<<"IT IS * not * A LEAP YEAR \n";
        func_nl(x,y,temp);
    }

}
else
{
    if(temp%4==0)
    {
        cout<<"IT IS A LEAP YEAR \n";
        func_l(x,y,temp);
    }
    else
    {
        cout<<"IT IS * not * A LEAP YEAR \n";
        func_nl(x,y,temp);
    }

}
}
///under main

void func_l(int x, int y,int temp)
{
    switch(x)
    {
                case 1: case 8: case 10: case 3: case 12: case 5: case 7:
                {
                    if(1<=y&&y<=31)
                    {
                        cout<<"and CORRECT GIVEN DATE \n";



                        ///next day's date
                        ///x for months, y for days , z for years

                        if(y<31)
                        ///not last day
                        ///month not finshed then plus the days
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<x<<" "<<++y<<temp;

                        }
                        else
                        ///last day
                        ///y=31


                        {
                            if(x==12)///if last month then 1 ,1, next year
                            {
                                cout<<"NEXT DAY'S DATE IS \n"<<endl;
                               cout<<1<<" "<<1<<" "<<++temp<<endl;

                            }
                            else///but not last month
                            ///then plus the month and day is 1
                            {
                                cout<<"NEXT DAY'S DATE IS \n"<<endl;
                                cout<<++x<<" "<<1<<" "<<temp<<endl;
                            }

                        }
                    }
                    else
                    {
                        cout<<"but WRONG GIVEN DATE \n";
                    }
                }
                break;

                case 9: case 11: case 4: case 6:
                {
                    if(1<=y&&y<=30)
                    {
                        cout<<"and CORRECT GIVEN DATE \n";

                        ///next day
                        ///month not finished
                        if(y<30)
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<x<<" "<<++y<<" "<<temp<<endl;
                        }
                        else
                        ///last day
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<++x<<" "<<1<<" "<<temp<<endl;
                        }
                    }
                    else
                    {
                        cout<<"but WRONG GIVEN DATE \n";
                    }
                }
                break;
                case 2:
                {
                    if(1<=y&&y<=29)
                    {
                        cout<<"and CORRECT GIVEN DATE \n";
                        ///next day
                        if(y<29)
                        ///not last day
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<x<<" "<<++y<<" "<<temp<<endl;
                        }
                        else
                        ///last DAY
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<++x<<" "<<1<<" "<<temp<<endl;
                        }
                    }
                    else
                    {
                        cout<<"but WRONG GIVEN DATE \n";
                    }
                }
                break;




    }
}

void func_nl(int x, int y,int temp)
{
    switch(x)
    {
                case 1: case 8: case 10: case 3: case 12: case 5: case 7:
                {
                    if(1<=y&&y<=31)
                    {
                        cout<<"and CORRECT GIVEN DATE \n";
                        if(y<31)
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<x<<" "<<++y<<" "<<temp<<endl;
                        }
                        else
                        {
                            if(x==12)
                            {
                                cout<<"NEXT DAY'S DATE IS \n"<<endl;
                                cout<<1<<" "<<1<<" "<<++temp<<endl;
                            }
                            else
                            {
                                cout<<"NEXT DAY'S DATE IS \n"<<endl;
                                cout<<++x<<" "<<1<<" "<<temp;
                            }

                        }
                    }
                    else
                    {
                        cout<<"but WRONG GIVEN DATE \n";
                    }
                }
                break;

                case 9: case 11: case 4: case 6:
                {
                    if(1<=y&&y<=30)
                    {
                        cout<<"and CORRECT GIVEN DATE \n";
                        if(y<30)
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<x<<" "<<++y<<" "<<temp<<endl;
                        }
                        else
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<++x<<" "<<1<<" "<<temp<<endl;
                        }
                    }
                    else
                    {
                        cout<<"but WRONG GIVEN DATE \n";
                    }
                }
                break;
                case 2:
                {
                    if(1<=y&&y<=28)
                    {
                        cout<<"and CORRECT GIVEN DATE \n";
                        if(y<28)
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<x<<" "<<++y<<" "<<temp<<endl;
                        }
                        else
                        {
                            cout<<"NEXT DAY'S DATE IS \n"<<endl;
                            cout<<++x<<" "<<1<<" "<<temp<<endl;
                        }
                    }
                    else
                    {
                        cout<<"but WRONG GIVEN DATE \n";
                    }
                }
                break;

    }
}
