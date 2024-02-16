#include<bits/stdc++.h>

using namespace std;



class TestClass{

public:

    void Batch(){

        cout << "Batch method Accessed" <<endl;

    }

};

class ClassOne : public TestClass{

public:

    void SectionA(){

        cout << "Section A Accessed" <<endl;

    }

};



class ClassTwo: public TestClass  {

public:

    void SectionC(){

        cout << "Section C Accessed" <<endl;

    }

    void SectionD(){

        cout << "Section D Accessed " <<endl;

    }

};

class School: public ClassOne, public ClassTwo{

public:

    void getInfo(){

        // Accessing the Batch method using ClassOne

        // Because of ambiguity we have to specify the proper method

        ClassOne ob;

        ob.TestClass :: Batch();

        SectionA();

        SectionC();

        SectionD();

    }

};



int main(){

    School ob;

    ob.getInfo();

    return 0;

}
