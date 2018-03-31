//Done by Henok Seifu
#include <iostream>
#include <sstream>
using namespace std;

void foo(int *array, int n, int *positives) {
	for(int i=0; i<n; i++)
		if (array[i]>0)
			++*positives;
}
class Test {
	private:
		int *a;
		int n;
	public:
		Test() {
			a=NULL;
			n=0;
		}
		Test(int *a, int n) {
			this->n = n;
			if (this->a != NULL) {
				delete this->a;
			}
			this->a = new int[n];
			for(int i=0; i<n; i++)
				this->a[i] = a[i];
		}
		string toString() {
			ostringstream ss;
			ss << "Length: " << n << endl << "Elements: ";
			for(int i=0; i<n; i++)
				ss << a[i] << " ";
			ss << endl;
			return ss.str();
		}
		~Test() {
            if (this->a != NULL) {
				delete this->a;
			}
		}
};

int main() {
	int v[3] = {1, 2, 3};
	int p=0;
	foo(v, 3, &p);
	cout << "Amount of positive values in the array=" << p << endl;
	Test arr[5];
	Test *obj1;
	obj1=&arr[0];
	Test *obj2=new Test(v, 3);
	Test *obj3;
	cout << obj1->toString();
	cout << obj2->toString();
	cout << obj3->toString();
//	delete obj1;
	delete obj2;
//	delete obj3;
	return 0;
}

/*
    -Problem1: Invalid output at line 46
    -debug steps:-put break where the function that produces the output is called 
    (gdb) break 45
    (gdb) step *4 [positives should be incremented by now]
    (gdb) print *positives [outputs 0]
    -Cause1: Pointer is not dereferenced before adding
    -Solution1: Put ++ before *positives

    -Problem2: erorr trying to free memory that was not allocated
    -debug steps:- put breaks on deletes
    (gdb) break 23
    (gdb) break 38
    (gdb) break 55 [first break]
    (gdb) break 56
    (gdb) break 57
    (gdb) step [goes to line 38]
    (gdb) step [trying to delete a pointer to null]
    (gdb) step [program terminates "pointer being freed was not allocated"]
    -Cause2: deleting pointer to null
    -Solution2:  delete only if not null

    -Problem3: trying to delete none dynamically allocated pointer to objects
    -debug steps:
    (gdb) break 57
    (gdb) step [trying to delete none dynamically allocated pointer]
    (gdb) step [program crashes]
    -Cause3: trying to delete none dynamically allocated pointer
    -Solution3: remove the none dynamically allocated pointers obj1 and obj3

    -Problem4: segmentation fault
    -debug steps:
    (gdb) break 56
    (gdb) step [goes to function to string]
    (gdb) step [trying to access n]
    (gdb) print n [prints 0 (automatically assigned by the compiler)]
    (gdb) step [trying to access list that is not assigned: a[i]]
    -Cause4: trying to access list that is not assigned: a[i]





    

*/

/*
    CH08-320143
    a6_p1.cpp
    Henok Seifu
    hseifu@jacobs-university.de
*/