#include <iostream>
#include "types.h"

using namespace std;

void usage(void)
{
	cout << "Abhi's ToDo List App" << endl;
}


class TaskEngine {
	private:
		char *name;
	
	public:
		int taskAdd(char *name, u8 day, u8 mon, u64 year);
		int taskDel(char *name, u8 day, u8 mon, u64 year);

};


class TaskDaemon {


};


int main(void)
{
	usage();
	return 0;
}
