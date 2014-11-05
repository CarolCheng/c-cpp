
CC=g++

CFLAGS=-c -Wall -Wno-write-strings

all: tcp_async_echo_client tcp_async_echo_server


async_client: async_client.o
	$(CC) async_client.o -lboost_system -lboost_thread -o async_client
async_server: async_server.o
	$(CC) async_server.o -lboost_system -o async_server
	
tcp_async_echo_client: tcp_async_echo_client.o
	$(CC) tcp_async_echo_client.o -lboost_system -lboost_thread -o tcp_async_echo_client
tcp_async_echo_server: tcp_async_echo_server.o
	$(CC) tcp_async_echo_server.o -lboost_system -o tcp_async_echo_server

	
	
async_client.o: async_client.cpp
	$(CC) $(CFLAGS) async_client.cpp	
async_server.o: async_server.cpp
	$(CC) $(CFLAGS) async_server.cpp

tcp_async_echo_client.o: tcp_async_echo_client.cpp
	$(CC) $(CFLAGS) tcp_async_echo_client.cpp

tcp_async_echo_server.o: tcp_async_echo_server.cpp
	$(CC) $(CFLAGS) tcp_async_echo_server.cpp

clean:
	rm -rf *o *_server *_client
