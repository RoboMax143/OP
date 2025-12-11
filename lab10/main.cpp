#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "conv.hpp"


struct letter_count {
    char value;
    int count=0;
};



int main() {
    setlocale(LC_ALL, "Russian");


    std::ifstream in("input.txt");
    if (!in.is_open()) {
        std::cout << "File not open" << std::endl;
        return -1;
    }

    std::ofstream out("output.txt");

    std::string res;
    res.reserve(1000);

    

    while (!in.eof()) {
        //std::string s;
        //std::getline(in, s);

        char c;
        in.get(c);
        std::string l;
        l.push_back(c);
        
        int ind = find_index(alpha, l);
        if (ind >= 0) {
            res+=translit[ind];
            out << translit[ind];
        }
        else {
            out << c;
            res.push_back(c);
        }
        
    }
    //in.close();
    //out.close();

    //const char* c = "Hello";
    //char str[100] = "Hello, world!";
    std::cout << res << std::endl;





    std::ifstream in2("output.txt");
    if (!in2.is_open()) {
        std::cout << "File not open" << std::endl;
        return -1;
    }

    letter_count count[124];
    
    

    for (int i = 65; i < 123; ++i) {
        count[i].value = static_cast<char>(i);
    }
    
    while (!in2.eof()) {
        char c;
        in2 >> c;

        count[static_cast<int>(c)].count += 1;

    }

    std::ofstream out2("stat.txt");

    for (int j = 65; j < 122; ++j) {
        for (int i = 65; i < 122; ++i) {
            if (count[i].count < count[i+1].count) {
                letter_count tmp = count[i];
                count[i] = count[i + 1];
                count[i + 1] = tmp;
            }
        }
    }



    for (int i = 65; i < 123; ++i) {
        if (count[i].count != 0) {
            std::cout << count[i].value << ": " << count[i].count << std::endl;
            out2<< count[i].value<<" - "<< count[i].count << std::endl;
        }
    }

    //in2.close();
    //out2.close();

}