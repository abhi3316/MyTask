
typedef union {
	char cval;
	uint8_t ival;
} cnvint_t;	

int main(void) {
	char *date = "2024";
	cnvint_t cvint;
	int dt = 0, exp = 0;
	for(int i = (strlen(date) - 1); i >= 0 ; --i) {
		cvint.cval = *(date + i);
        	if(cvint.ival > 47 && cvint.ival < 58) {
		      dt += (((cvint.ival - 48 )) * (pow(10,exp)));
		}
		++exp;	
	}
	cout << dt << endl;
	return 0;
}
