#include<iostream>

using namespace std;

template <typename KEY, typename VALUE>
class Hashmap
{
  public:
    Hashmap()
    {
      
    }
    
    bool empty();
    int add();
    int update();
    int remove();
    int erase();
    void clear();
    
    ~Hashmap()
    {}
    
    template<class KEY, class VALUE>
unsigned int HashMap<KEY, VALUE>::hashCode(KEY key)
{
	unsigned int k = key & 0xffffffff; //error: no match for ‘operator&’ in ‘key & 4294967295u’
	k += ~(k<<9);
	k ^= (k>>14);
	k += (k<<4);
	k ^= (k>>10);
	return k;
};

}
