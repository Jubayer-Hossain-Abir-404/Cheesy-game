#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
class cheese
{
    int i,j,face,data[100],k,number,a1,a2,a3,a4,c=0,m1=1,c1,c2,c3,c4;
    int j1[100],j2[100],j3[100],j4[100],m2=1,m3=1,m4=1,c5,m5=1;
    int p1,p2,p3,p4,p5,j5[100];
public:
    void get_cheese(string s[],int n)
    {
        srand(time(0));
        for(i=1; i<=n; i++)
        {
            c1=0;
            c2=0;
            c3=0;
            c4=0;
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
                        c++;
                        cout<< "Congratulations!!!"<<s[k]<< " has caught the cheese perfectly"<<endl;
                        if(c==1)
                        {
                            a1=k;
                        }
                        if(c==2)
                        {
                            a2=k;
                        }
                        if(c==3)
                        {
                            a3=k;
                        }
                        if(c==4)
                        {
                            a4=k;
                            c=0;
                        }
                        if(i==1)
                        {
                            cout<< "Wow!!! Guess "<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            j1[c1]=k;
                            p1=k;
                            c1++;
                            m1++;
                        }
                        if(i==2)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            c2=i;
                            j2[c2]=k;
                            p2=k;
                            c2++;
                            m2++;
                        }
                        if(i==3)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            c3=i;
                            j3[c3]=k;
                            p3=k;
                            c3++;
                            m3++;
                        }
                        if(i==4)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            c4=i;
                            j4[c4]=k;
                            p4=k;
                            c4++;
                            m4++;
                        }
                        if(i==5)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            c5=i;
                            j5[c5]=k;
                            p5=k;
                            c5++;
                            m5++;
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
                if(i==1&&m1==2)
                {
                    cout<<s[p1]<< " is the winner of all as he won the game in first attempt"<<endl;
                    m1=1;
                }
                if(i==2&&m2==2)
                {
                    cout<<s[p2]<< " is the winner as he won the game in the second  attempt"<<endl;
                    m2=1;
                }
                if(i==3&&m3==2)
                {
                    cout<<s[p3]<< " is the winner as he won the game in the third attempt"<<endl;
                    m3=1;
                }
                if(i==4&&m4==2)
                {
                    cout<<s[p4]<< " is the winner as he won the game in the game at fourth attempt"<<endl;
                    m4=1;
                }
                if(i==5&&m5==2)
                {
                    cout<<s[p5]<< " is the winner as he won the game at the fifth attempt"<<endl;
                    m5=1;
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
