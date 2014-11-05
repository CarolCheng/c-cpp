
CC=g++

CFLAGS=-c -Wall -Wwrite-strings

all: tcp_async_echo_client tcp_async_echo_server


#tcp_async_echo_client
tcp_async_echo_client: tcp_async_echo_client.o
        $(CC) tcp_async_echo_client.o -lboost_system -lboost_thread -o tcp_async_echo_client
#tcp_async_echo_server
tcp_async_echo_server: tcp_async_echo_server.o
        $(CC) tcp_async_echo_server.o -lboost_system -o tcp_async_echo_server


tcp_async_echo_client.o: tcp_async_echo_client.cpp
        $(CC) $(CFLAGS) tcp_async_echo_client.cpp

tcp_async_echo_server.o: tcp_async_echo_server.cpp
        $(CC) $(CFLAGS) tcp_async_echo_server.cpp

clean:
        rm -rf *o *sync_server *sync_client
