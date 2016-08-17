#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "logger.h"

int main() {

    char *logfile = "log/test_log.log";
    char *testfile = "testfile.txt";

    printf("creating logfile: %s\n", logfile);
    create_logfile(logfile, "This is the log header");

    int i;
    for (i = 0; i < 2; i++) {
        log_message(logfile, "in for loop, iteration->i: %d\n", i);
    }

    FILE *f = fopen(testfile, "r");

    if (!f) {
        log_error(logfile, 1, "could not open: %s  error: %s\n",testfile, strerror(errno));
    }

    log_error(logfile, 0, "THIS DID NOT GO TO STDERR!!!\n");
    log_message(logfile, "exiting program\n");

    return 0;
}

