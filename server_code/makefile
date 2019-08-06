FLAG=-std=c++11  -lmysqlcppconn -ljsoncpp -lpthread
.PHONY:all
all:db_test blog_server

db_test:db_test.cc db.hpp
	g++ $^ -o $@ $(FLAG)
blog_server:blog_server.cc db.hpp
	g++ $^ -o $@ $(FLAG)

.PHONY:clean
clean:
	rm -rf db_test
