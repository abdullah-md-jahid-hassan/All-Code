 #include <bits/stdc++.h>

using namespace std;

void leftmost (string in, string [][])
{
    string out="S";
    cout<<out<<endl;
    while (in!=out)
    {
        if (in[1]=='\0')
            {
                out="T";
                cout<<out<<endl;
                switch (in[0])
                {
                    case '0':
                    out="NUM";
                    cout<<out<<endl;
                    out="0";
                    cout<<out<<endl;

                    case '2':
                    out="NUM";
                    cout<<out<<endl;
                    out="2";
                    cout<<out<<endl;

                    case '3':
                    out="NUM";
                    cout<<out<<endl;
                    out="3";
                    cout<<out<<endl;

                    case 'a':
                    out="ID";
                    cout<<out<<endl;
                    out="a";
                    cout<<out<<endl;

                    case 'j':
                    out="ID";
                    cout<<out<<endl;
                    out="a";
                    cout<<out<<endl;

                    case 'h':
                    out="ID";
                    cout<<out<<endl;
                    out="a";
                    cout<<out<<endl;
                }
            }
        else if (in[1]=='+')
        {
            out="T+T";
            cout<<out<<endl;
        }
        else if (in[1]=='-')
        {
            out="T-T";
            cout<<out<<endl;
        }
    }
}

void rightmost (string in, string [][])
{
    string out="S";
    cout<<out<<endl;
    while (in!=out)
    {
        if (in[1]=='\0') out="T";
        else if (in[1]=='+') out="T+T";
        else if (in[1]=='-') out="T-T";
    }
}

int main()
{
    int ru, el[20];
    bool ch;
    string line[20], rule[50][50], in;

    ifstream file("grammar.txt");
    for (ru=0; getline(file, line[ru]); ru++)
        for (int j=0; line[ru][j]!='-'; j++)
            rule[ru][0]+=line[ru][j];

    for (int i=0; i<ru; i++)
    {
        bool c=0;
        el[i]=1;
        for (int j=0; line[i][j]!='\0'; j++)
        {
            if (line[i][j]=='>')
                {
                    c=1;
                    j++;
                }
            if (c==1)
            {
                if (line[i][j]=='|') el[i]++;
                else rule[i][el[i]]+=line[i][j];
            }

        }
        el[i]++;
    }

    cout<<"Enter the input Sentance: ";
    cin>>in;
    cout<<"Enter the derivation type.\n0 For Leftmost.\n1 for Rightmost ";
    cin>>ch;

    switch (ch)
    {
        case 0:
            leftmost (in, rule[][]);
        case 0:
            rightmost (in, rule[][]);
    }


    //for (int i=0; i<ru; i++) for (int j=0; j<el[i]; j++) cout<<rule [i][j]<<endl;

    return 0;
}
