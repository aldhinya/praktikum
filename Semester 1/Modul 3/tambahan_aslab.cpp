#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int j=0, offs, val;
    char n[50], subs;
    string vok, kons, a, b, re, rsr[25];

    cout<<"Input Teks\t= ";
    cin.getline(n,sizeof(n));

    for(int i=0; i<strlen(n); i++)
    {
        a+=tolower(n[i]);
        b+=toupper(n[i]);
    }
    cout<<"\nlower\t\t= "<<a;
    cout<<"\nupper\t\t= "<<b<<endl;

    a="";
    for(int i=0; i<strlen(n); i++)
    {
        if (isupper(n[i]))
        {
            a+=tolower(n[i]);
        }
        else
        {
            a+=toupper(n[i]);
        }
    }
    cout<<"invert\t\t= "<<a<<endl;

    a="";
    for(int i=0; i<strlen(n); i++)
    {
        if(n[i]=='a' || n[i]=='i' || n[i]=='u' || n[i]=='e' || n[i]=='o')
        {
            vok+=n[i];
            kons+='*';
        }
        else if(isspace(n[i]))
        {
            vok+=n[i];
            kons+=n[i];
        }
        else
        {
            vok+='*';
            kons+=n[i];
        }
    }
    cout<<"\nvokal\t\t= "<<vok<<endl;
    cout<<"non Vokal\t= "<<kons<<endl;

    a="";
    for(int i=strlen(n)-1; i>=0; i--)
    {
        a+=n[i];
    }

    for(int i=0; i<strlen(n); i++)
    {
        if(n[i]!=' ')
        {
            rsr[j]+=n[i];
        }
        else
        {
            j++;
        }
    }
    cout<<"reverse+\t= ";
    for(int i=j; i>=0; i--)
    {
        cout<<rsr[i]<<" ";
    }

    a="";

    cout<<"\n\nsubstitute\t= ";
    cin>>subs;
    cout<<"replace with\t= ";
    cin>>re;
    for(int i=0; i<strlen(n); i++)
    {
        if(n[i]==subs)
        {
            a+=re;
        }
        else
        {
            a+=n[i];
        }
    }
    cout<<"result\t\t= "<<a<<endl;

    a="";

    cout<<"\noffset\t\t= ";
    cin>>offs;
    cout<<"original\t= "<<n<<endl;
    for(int i=0; i<strlen(n); i++)
    {
        if((n[i]>='a' && n[i]<='z')||(n[i]>='A' && n[i]<='Z'))
        {
            val=((int)n[i]+offs);
            if((val>122 || val<97) && (val>90 || val<65))
            {
                val+=26;
            }
            subs=val;
            a+=subs;
        }
        else
            a+=n[i];
    }
    cout<<"result\t\t= "<<a<<endl;

    a="";

    cout<<"\noffset (-)\t= ";
    cin>>offs;
    cout<<"original\t= "<<n<<endl;
    for(int i=0; i<strlen(n); i++)
    {
        if((n[i]>='a' && n[i]<='z')||(n[i]>='A' && n[i]<='Z'))
        {
            val=((int)n[i]+offs);
            if((val>122 || val<97) && (val>90 || val<65))
            {
                val+=26;
            }
            subs=val;
            a+=subs;
        }
        else
            a+=n[i];
    }
    cout<<"result\t\t= "<<a<<endl;
}