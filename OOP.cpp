#include <iostream>
#include <string>

class info {
    private:
    std::string first_name;
    std::string last_name;
    std::string birthdayy;

    public:
    void setname(std::string first_name, std::string last_name) { this->first_name = first_name; this->last_name = last_name; }
    //void setname2(std::string last_name) { this->last_name = last_name; }

    void print() { std::cout << first_name << " " << last_name << std::endl; }
};

int main() {
    info p;
    p.setname("dentyo", "verity");
    p.print();
}