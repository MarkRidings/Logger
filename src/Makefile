CFLAGS=-g -Wall -Wextra -std=c11 -O3
EXEDIR=../bin
OBJDIR=../lib

LOGGER_SRC=logger.c
LOG_TEST_SRC=log_test.c logger.c

all: logger log_test

log_test: $(LOG_TEST_SRC)
	$(CC) $(CFLAGS) $(LOG_TEST_SRC) -o $(EXEDIR)/log_test

logger: logger.o
	$(CC) $(CFLAGS) -shared -o $(OBJDIR)/liblogger.so $(OBJDIR)/logger.o

logger.o: $(LOGGER_SRC)
	$(CC) $(CFLAGS) -fpic -c $(LOGGER_SRC) -o $(OBJDIR)/logger.o

clean:
	-rm ../bin/log_test ../lib/*.so ../lib/*.o
