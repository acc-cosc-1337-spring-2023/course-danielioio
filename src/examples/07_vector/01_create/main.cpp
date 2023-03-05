#include<vector>
#include<iostream>


using std::vector; using std::cout;

int main()
{
    vector<int> nums;//creates an empty vector
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";

    nums.push_back(4);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";

    nums.push_back(10);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n";

    nums.push_back(11);//add 4 to the vector(list)
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n""\n";

    vector<char> letters {"a", "b", "c"};
    cout<<letters.size()<<"\n";
    cout<<letters.capacity()<<"\n""\n";

    letters.push_back("d");
    cout<<letters.size()<<"\n";
    cout<<letters.capacity()<<"\n""\n";

    //create vector
    vector<char> all_As(10, "a");

    for(auto ch: all_As)
    {
        cout<<ch;

    }

    cout<<"/n/n"







    return 0;
}