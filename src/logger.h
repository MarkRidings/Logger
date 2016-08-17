#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

int create_logfile(char *logfile, char *heading);
int log_message(char *logfile, char *message, ...);
int log_error(char *logfile, int out_to_stderr, char *message, ...);

#endif //LOGGER_LOGGER_H
