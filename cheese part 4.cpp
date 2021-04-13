#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
class cheese
{
    int i,j,face,data[100],k,number;
public:
    void get_cheese(string s[],int n)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=4;j++)
            {
                face=rand()%11;
                data[j]=face;
            }
            cout<< "You can choose any number from the range 1 to 10:"<<endl;
            for(k=1;k<=4;k++)
            {
                cout<<s[k]<< " Please choose:";
                cin>>number;
                if(number==data[k])
                {
                    cout<<s[k]<< " Congrats"<<endl;
                }
                else
                {
                    cout<<s[k]<< " Failed"<<endl;
                }
            }
        }
    }
};
int main()
{
    cheese c1;
    string str1[100];
    for(int i=1;i<=4;i++)
    {
        cout<< "Enter player no."<<i<< ":";
        getline(cin,str1[i]);
    }
    c1.get_cheese(str1,5);
    return 0;
}
