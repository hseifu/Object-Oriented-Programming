//Done by Henok Seifu
#ifndef _ACCESS_
#define _ACCESS_

#include <iostream>
#include <set>


class Access {
  public:
    void activate(unsigned int code);
    void deactivate(unsigned int code);
    bool isactive(unsigned int code) const;
  private:
    //set for holding the possible passcodes
    std::set<unsigned int> passcodes;
};

#endif