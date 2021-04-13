#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
class cheese
{
    int i,j,face,data[100],k,number,a1,a2,a3,a4,c=0,m1=1,c1=0,c2=0,c3=0,c4=0,GT=1;
    int j1[100],j2[100],j3[100],j4[100],m2=1,m3=1,m4=1,c5,m5=1;
    int p1,p2,p3,p4,p5,j5[100],saitama,saitama1=0,takla,dj=0;
    int p[100],a[100],bc1,bc2,bc3;
public:
    void get_cheese(string s[],int n)
    {
        srand(time(0));
        for(i=1; i<=n; i++)
        {

            m1=1;
            m2=1;
            m3=1;
            m4=1;
            m5=1;
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
                        p[GT]=k;
                        GT++;
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
                            j2[c2]=k;
                            p2=k;
                            c2++;
                            m2++;
                        }
                        if(i==3)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            j3[c3]=k;
                            p3=k;
                            c3++;
                            m3++;
                        }
                        if(i==4)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            j4[c4]=k;
                            p4=k;
                            c4++;
                            m4++;
                        }
                        if(i==5)
                        {
                            cout<<s[k]<< " has reached the cheese in no."<<i<< " attempt"<<endl;
                            j5[c5]=k;
                            p5=k;
                            c5++;
                            m5++;
                        }
                    }
                    if(number<data[k]||number>data[k])
                    {
                        if(number<data[k])
                        {
                            cout<<s[k]<<" could not reach the cheese due to extra "<<data[k]-number<< " cm"<<endl;

                        }
                        else if(number>data[k])
                        {
                            cout<<s[k]<< " jumped "<<number-data[k]<< " cm beyond the reach of the cheese without catching the cheese"<<endl;

                        }
                        if(i==4)
                        {
                            dj++;
                            if(dj==1)
                            {
                                bc1=k;
                            }
                            if(dj==2)
                            {
                                bc2=k;
                            }
                            if(dj==3)
                            {
                                bc3=k;
                            }
                        }
                    }
                }

            }
        }
        cout<<endl<<endl<<endl<<endl;
        int dede=0,dede1=0,g1=0,g2=0,meme=0,meme1=0,che=0,che1=0,pepe=0,pepe1=0,g3=0;
        int g4=0;
        for(i=0; i<c1; i++)
        {
            if(c1==1)
            {
                cout<<s[j1[i]];
            }
            else if(c1>1)
            {
                if(c1-1==i)
                {
                    cout<<s[j1[i]];
                }
                else
                {
                    cout<<s[j1[i]]<< ",";
                }
            }
            g1++;
        }
        if(c1==1)
        {
            cout<< " is the first as he caught the cheese at the first attempt";
            dede++;
        }
        else if(c1>1)
        {
            cout<< " are first because they won the game at the first attempt";
            dede1++;
        }
        cout<<endl<<endl<<endl;
        for(i=0; i<c2; i++)
        {
            if(c2==1)
            {
                cout<<s[j2[i]];
            }
            else if(c2>1)
            {
                if(c2-1==i)
                {
                    cout<<s[j2[i]];
                }
                else
                {
                    cout<<s[j2[i]]<< ",";
                }
            }
            g2++;
        }
        if(c1==0&&c2==1)
        {
            cout<< " is the first despite of catching the cheese at the second attempt"<<endl;
            meme++;
        }
        if(c2>1&&c1==0)
        {
            cout<< " are the first despite of catching the cheese at the second attempt"<<endl;
            meme1++;
        }
        if(c2==1&&dede!=0)
        {
            cout<< " is at the no.2 position by catching the cheese at the second attempt"<<endl;
            che++;
        }
        if(c2>1&&dede!=0)
        {
            cout<< " is at the no.2 position by catching the cheese at the second attempt"<<endl;
            che1++;

        }
        if(c2==1&&dede1!=0)
        {
            cout<< " is at no.2 position by catching the cheese at the second attempt";
            pepe++;
        }
        if(c2>1&&dede1!=0)
        {
            cout<< " are at no.2 position by catching the cheese at the second attempt";
            pepe1++;
        }
        cout<<endl<<endl<<endl;
        for(i=0; i<c3; i++)
        {
            if(c3==1)
            {
                cout<<s[j3[i]];
            }
            else if(c3>1)
            {
                if(c3-1==i)
                {
                    cout<<s[j3[i]];
                }
                else
                {
                    cout<<s[j3[i]]<< ",";
                }
            }
            g3++;
        }
        if(c3==1&&g1==0&&g2==0)
        {
            cout<< " is the first despite of catching the cheese at the third attempt"<<endl;
            meme++;
        }
        if(c3>1&&g1==0&&g2==0)
        {
            cout<< " are the first despite of catching the cheese at the third attempt"<<endl;
            meme1++;
        }
        if(c3==1&&g1!=0&&g2==0)
        {
            cout<< " is at the second position despite catching the cheese at the third attempt"<<endl;
        }
        if(c3==1&&g1==0&&g2!=0)
        {
            cout<< " is at the second position despite catching the cheese at the third attempt"<<endl;
        }
        if(c3>1&&g1==0&&g2!=0)
        {
            cout<< " are at the second position despite catching the cheese at the third attempt"<<endl;
        }
        if(c3>1&&g1!=0&&g2==0)
        {
            cout<< " are at the second position despite catching the cheese at the third attempt"<<endl;
        }
        if(c3==1&&g1!=0&&g2!=0)
        {
            cout<< " is at the third position despite catching the cheese at the third attempt"<<endl;
        }
        if(c3>1&&g1!=0&&g2!=0)
        {
            cout<< " are at the third position despite catching the cheese at the third attempt"<<endl;
        }
        cout<<endl<<endl<<endl;
        for(i=0; i<c4; i++)
        {
            if(c4==1)
            {
                cout<<s[j4[i]];
            }
            else if(c4>1)
            {
                if(c4-1==i)
                {
                    cout<<s[j4[i]];
                }
                else
                {
                    cout<<s[j4[i]]<<endl;
                }
            }
            g4++;
        }
        if(c4==1&&g1==0&&g2==0&&g3==0)
        {
            cout<< " is the first despite of catching the cheese at the fourth attempt"<<endl;
            meme++;
        }
        if(c4==1&&g1!=0&&g2==0&&g3==0)
        {
            cout<< " is at the second position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4==1&&g1==0&&g2!=0&&g3==0)
        {
            cout<< " is at the second position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4==1&&g1==0&&g2==0&&g3!=0)
        {
            cout<< " is at the second position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4==1&&g1!=0&&g2!=0&&g3==0)
        {
            cout<< " is at the third position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4==1&&g1==0&&g2!=0&&g3!=0)
        {
            cout<< " is at the third position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4==1&&g1!=0&&g2==0&&g3!=0)
        {
            cout<< " is at the third position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4==1&&g1!=0&&g2!=0&&g3!=0)
        {
            cout<< " is at the fourth position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4>1&&g1==0&&g2==0&&g3==0)
        {
            cout<< " are the first despite of catching the cheese at the fourth attempt"<<endl;
            meme1++;
        }
        if(c4>1&&g1!=0&&g2==0&&g3==0)
        {
            cout<< " are at the second position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4>1&&g1==0&&g2!=0&&g3==0)
        {
            cout<< " are at the second position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4>1&&g1==0&&g2==0&&g3!=0)
        {
            cout<< " are at the second position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4>1&&g1!=0&&g2!=0&&g3==0)
        {
            cout<< " are at the third position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4>1&&g1!=0&&g2==0&&g3!=0)
        {
            cout<< " are at the third position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c4>1&&g1==0&&g2!=0&&g3!=0)
        {
            cout<< " are at the third position despite catching the cheese at the fourth attempt"<<endl;
        }
        if(c3>1&&g1!=0&&g2!=0&&g3!=0)
        {
            cout<< " are at the fourth position by catching the cheese at the fourth attempt"<<endl;
        }
        cout<<endl;
        if(g1==0&&g2==0&&g3==0&&g4==0)
        {
            cout<<endl<< "Sadly no one could catch the cheese"<<endl;
        }
        else
        {
            if(dj==1)
            {
                cout<< "Sadly "<<s[bc1]<< " could not reach the cheese"<<endl;
            }
            else if(dj==2)
            {
                cout<< "Sadly "<<s[bc1]<< " and "<<s[bc2]<< " could not reach the cheese"<<endl;
            }
            else if(dj==3)
            {
                cout<< "Sadly "<<s[bc1]<< ","<<s[bc2]<< ","<<s[bc3]<< " could not reach the cheese"<<endl;
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
    c1.get_cheese(str1,4);
    return 0;
}
