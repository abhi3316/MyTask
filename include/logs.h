#ifndef __LOGS_H
#define __LOGS_H


typedef enum {
	TD_INFO = 0,
	TD_DEBUG,
	TD_ERROR,
	TD_WARDING
}log_leve_t;

#define TD_I(...) \
	if(LEVEL <= TD_INFO) \
	{ \
		cout << __VA_ARGS__ << endl; \
	}

#endif
