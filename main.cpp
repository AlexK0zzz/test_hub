#include <QCoreApplication>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"Hello World!"<<endl;
    for(auto c:"bubu")
    cout<<c;

    cout<<endl<<"Hi! I'm AlexK0zzz ;)"<<endl;
    cout<<"And I don't know how it works"<<endl;

    return a.exec();
}
