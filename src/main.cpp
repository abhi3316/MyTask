#include "types.h"

#define LEVEL TD_INFO

using namespace std;

void usage(void)
{
	TD_I("Abhi's ToDo List App");
}


class TaskEngine {
	private:
		char *name;
	
	public:
		td_rc taskAdd(char *name, u8 day, u8 mon, u64 year);
		td_rc taskDel(char *name, u8 day, u8 mon, u64 year);

};


class TaskDaemon {


};


td_rc main(int argc, char* argv[])
{

        for(int i = 0; i< argc ; i++)
	{
		TD_I(argv[i]);
	}

	//usage();
	return TD_APP_OK;
}
