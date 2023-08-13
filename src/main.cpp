#include "types.h"
#include <unistd.h>

#define LEVEL TD_INFO

using namespace std;
using namespace task_list;

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
	char option, var;
	task_list::task_t task;
	while((option = getopt(argc, argv ,"t:d:m:y")) != -1)
	{
		if(option == 't')
		{
			task.name = (char*)malloc(sizeof(optarg));
			strcpy(task.name ,optarg);
		}
		if (option == 'd')
		{
			TD_I(optarg);
		}
	       	//TD_I(sizeof(task));	
	}
	TD_I(task.name);
	TD_I(task.date);	
	return TD_APP_OK;
}
