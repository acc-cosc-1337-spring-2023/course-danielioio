#include <iostream>

using std::cout;
using std::string;


int main()
{
    string lang = "C++";
    int num = 5;
    cout<<"Address of lang :"<<&lang<<"\n";
    cout<<"Address of num: "<<&num<<"\n";
    cout<<lang[1]<<"\n";
    cout<<"Address of character at 0 index: "<<static_cast<void *>(&lang[0])<<"\n";
    cout<<"Size is: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";

    //create strings
    string s0("initial string");
    cout<<s0<<"/n";

    string s1;//empty string
    cout<<"Capacity: "<<s1.capacity()<<"\n";
    s1.append("or");
    cout<<"Capacity: "<<s1.capacity()<<"\n";
    s1.append("C++ is great f");
    cout<<"Capacity: "<<s1.capacity()<<"\n";
    

    

    return 0;
}