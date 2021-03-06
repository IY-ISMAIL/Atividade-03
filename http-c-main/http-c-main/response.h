/**
 *  response.h
 */

// Response Codes Value
#define OK 0
#define NOT_FOUND 1
#define BAD_REQUEST 2

void response(int sock_fd, int status_code);

int get_response_code(char *method, char *path);

void response_body(int sock_fd, char *path, int status_code);