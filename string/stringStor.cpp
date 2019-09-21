/*************************************************************************
	> File Name: stringStor.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 21 Sep 2019 07:47:59 AM PDT
 ************************************************************************/

#include <iostream>
#include <cassert>
#include <iterator>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    {
        std::string s;
        assert(s.empty() && (s.length() == 0) && (s.size() == 0));
    }
    
    {
        std::string s(4, '=');
        std::cout << s << '\n';
    }

    {
        std::string const other("Exemplary");
        cout << other.length() << '\n';
        std::string s(other, 0, other.length() - 1);
        std::cout << s << '\n';
    }

    {
        std::string s("C-style string", 7);
        std::cout << s << std::endl;
    }

    {
        char mutable_c_str[] = "anothor C-style string";
        std::string s(std::begin(mutable_c_str) + 8, std::end(mutable_c_str) - 1);
        std::cout << s << std::endl;
    }

    {
        std::string other("Exemplar");
        std::string s(other);
        std::cout << s << std::endl;
    }

    {
        // std::string string(string &&str)
        std::string s(string("c++ by") + string(" example"));
        std::cout << s << std::endl;
    }

    {
        // string(std::initializer_list<charT> ilist)
        std::string s({'C', '-', 's', 't', 'y', 'l', 'e'});
        std::cout << s << std::endl;
    }

    {
        // string::string(charT const* s)
        std::string s("C-style\0string");
        std::cout << s << '\n'; // "C-style"
    }


    {
        std::string s = {'1', '2'};
        std::cout << s << std::endl;
    }

    return 0;
}
