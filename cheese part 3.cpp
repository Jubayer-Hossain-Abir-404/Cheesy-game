#include<bits/stdc++.h>
using namespace std;
class cheese
{
private:
    int x,a,b;
    string player;
public:
    int just_catch_it(int y,string n)
    {
        b=y;
        player=n;
        srand(time(0));
        x=40;
        a=rand()%11;
        cout<< "a = "<<a<<endl;
        if(b==a)
        {
            return 1;
        }
        if(b>a)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
    void successful_attempt()
    {
        cout<< "                                        *"<<endl;
        cout<< "                                        *"<<endl;
        cout<< "                                        *"<<endl;
        cout<< "                                        *"<<endl;
        cout<< "                                        *"<<endl;
        cout<< "                                        *"<<endl;
        cout<< "                                        *"<<endl;
        cout<< "                                      ******"<<endl;
        cout<< "                                      *    *"<<endl;
        cout<< "                                      *    *"<<endl;
        cout<< "                                   *  ******  *"<<endl;
        cout<< "                                  *            *"<<endl;
        cout<< "                                   ***      ***"<<endl;
        cout<< "                                    **      **"<<endl;
        cout<< "                                      *     *"<<endl;
        cout<< "                                         *"<<endl;
        cout<< "Congratulations!!! "<<player<< " has caught the cheese perfectly";
    }
    int hard_try()
    {
        int result;
        if(x+a>x+b)
        {
            result=(x+a)-(x+b);
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                      ******"<<endl;
            cout<< "                                      *    *"<<endl;
            cout<< "                                      *    *"<<endl;
            cout<< "                                      ******";
            for(int i=0; i<result; i++)
            {
                cout<<endl;
            }
            cout<< "                                      *    *"<<endl;
            cout<< "                                     *      *"<<endl;
            cout<< "                                     ***  ***"<<endl;
            cout<< "                                      **  **"<<endl;
            cout<< "                                       *  *"<<endl;
            cout<< "                                        *"<<endl;
            cout<<player<<" could not reach the cheese due to extra "<<result<< " cm"<<endl;
            system("pause");
            system("cls");
        }
        else
        {
            result=(x+b)-(x+a);
            cout<< "                                      *    *"<<endl;
            cout<< "                                     *      *"<<endl;
            cout<< "                                     ***  ***"<<endl;
            cout<< "                                      **  **"<<endl;
            cout<< "                                       *  *"<<endl;
            cout<< "                                        *";
            for(int i=0; i<result; i++)
            {
                cout<<endl;
            }
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                        *"<<endl;
            cout<< "                                      ******"<<endl;
            cout<< "                                      *    *"<<endl;
            cout<< "                                      *    *"<<endl;
            cout<< "                                      ******"<<endl;
            cout<<player<< " jumped "<<result<< " cm beyond the reach of the cheese without catching the cheese"<<endl;
            system("pause");
            system("cls");
        }

    }

};
int main()
{
    cheese c1;
    int c=0,value,ans;
    string name;
    cout<< "                               Welcome to the world of cheese"<<endl<<endl<<endl<<endl;
    cout<< "Enter the name of the player:";
    getline(cin,name);
    cout<<endl<<"So Mr."<<name<<" Enter the approximate value of distance to catch the cheese"<<endl;
    cout<< "The range of input is granted from 0 to 10"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<< "Input:";
        cin>>value;
        if(value<0||value>10)
        {
            if(i==0)
            {
                i=0;
            }
            else
            {
                i--;
            }
            cout<< "Error!!! Your input is invalid"<<endl;
            continue;
        }
        ans=c1.just_catch_it(value,name);
        if(ans==0)
        {
            c1.hard_try();
        }
        else if(ans==1)
        {
            c++;
            break;
        }
        else if(ans==2)
        {
            int cd=c1.hard_try();
        }
    }
    if(c==1)
    {
        c1.successful_attempt();
    }
    return 0;
}
