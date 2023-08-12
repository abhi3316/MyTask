CC:= g++




build:
	${CC} -Iinclude src/main.cpp -o my_app


clean:
	rm my_app

