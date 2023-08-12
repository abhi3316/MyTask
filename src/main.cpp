#include "types.h"
#include <unistd.h>

#define LEVEL TD_INFO

using namespace std;

void usage(void)
{
	TD_I("Abhi's ToDo List App");
}

/* with this task engine 
 * task can be added
 * task can be removed
 * listing task */

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
	char option;
	while((option = getopt(argc, argv ,"ab:h::")) != -1)
	{
		switch(option)
		{
			case 'a':
			case 'h':
				TD_I("Cases define here!");
				break;
			default:
				usage();
				break;
		}
	
	}	
/*
        for(int i = 0; i< argc ; i++)
	{
		TD_I(argv[i]);
	}
*/
	//usage();
	return TD_APP_OK;
}
