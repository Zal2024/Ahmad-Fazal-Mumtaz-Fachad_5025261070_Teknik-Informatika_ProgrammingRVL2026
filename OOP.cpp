#include <iostream>
#include <string>

class info {
    private:
    std::string first_name;
    std::string last_name;
    std::string birthdayy;

    public:
    void setname(std::string first_name, std::string last_name) { this->first_name = first_name; this->last_name = last_name; }
    void setbday(std::string birthdayy) { this->birthdayy = birthdayy;}
    //void setname2(std::string last_name) { this->last_name = last_name; }

    void print() { std::cout << first_name << " " << last_name << std::endl; }
    void bdayprinter() { std::cout << birthdayy << std::endl;}
};

int main() {
    info p;
    p.setname("Lord", "Verity");
    p.setbday("1 January 1967");
    
    p.print();
    p.bdayprinter();
}