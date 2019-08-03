FLAG=-std=c++11  -lmysqlcppconn -ljsoncpp -lpthread
.PHONY:all
all:db_test

db_test:db_test.cc db.hpp
	g++ $^ -o $@ $(FLAG)
.PHONY:clean
	rm -rf db_test
