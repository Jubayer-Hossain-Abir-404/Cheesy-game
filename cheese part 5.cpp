#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
class cheese
{
    int i,j,face,data[100],k,number,a1=0,a2=0,a3=0,a4=0,c=1;
public:
    void get_cheese(string s[],int n)
    {
        for(i=1; i<=n; i++)
        {
            cout<< "Run time no."<<i<<endl<<endl<<endl;
            for(j=1; j<=4; j++)
            {
                face=rand()%11;
                data[j]=face;
            }
            cout<< "You can choose any number from the range 1 to 10:"<<endl;
            for(k=1; k<=4; k++)
            {
                if(a1!=k&&a2!=k&&a3!=k&&a4!=k)
                {
                    cout<<s[k]<< " Please choose:";
                    cin>>number;
                    if(number==data[k])
                    {
                        cout<< "Congratulations!!!"<<s[k]<< " has caught the cheese perfectly"<<endl;
                        if(c==1)
                        {
                            a1=k;
                            c++;
                        }
                        if(c==2)
                        {
                            a2=k;
                            c++;
                        }
                        if(c==3)
                        {
                            a3=k;
                            c++;
                        }
                        if(c==4)
                        {
                            a4=k;
                        }
                        if(i==1)
                        {
                            cout<< "Wow!!! Guess "<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                        }
                        if(i==2)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                        }
                        if(i==3)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                        }
                        if(i==4)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                        }
                        if(i==5)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                        }
                    }
                    else if(number<data[k])
                    {
                        cout<<s[k]<<" could not reach the cheese due to extra "<<data[k]-number<< " cm"<<endl;
                    }
                    else if(number>data[k])
                    {
                        cout<<s[k]<< " jumped "<<number-data[k]<< " cm beyond the reach of the cheese without catching the cheese"<<endl;

                    }
                }
            }
        }
    }
};
int main()
{
    cheese c1;
    string str1[100];
    for(int i=1; i<=4; i++)
    {
        cout<< "Enter player no."<<i<< ":";
        getline(cin,str1[i]);
    }
    c1.get_cheese(str1,5);
    return 0;
}

