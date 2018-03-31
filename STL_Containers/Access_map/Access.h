//Done by Henok Seifu
#include <iostream>
#include <set>
#include <map>
using namespace std;

class Access {
  public:
    void activate(unsigned int code, unsigned int level);
    void deactivate(unsigned int code);
    bool isactive(unsigned int code, unsigned int level) const;
  private:
    //multimap for holding the possible passcodes
    //key = level and value = code
    multimap<unsigned int,unsigned int> passcodes;
};