/*
 *******************************************************************************
 *
 *        filename: main.cc
 *     description:
 *         created: 2024/07/09
 *          author: ticktechman
 *
 *******************************************************************************
 */

#include <stdio.h>

int connect_server(const char* server_ip) {
  if (server_ip == NULL) {
    return -1;
  }
  return 0;
}

int main(int argc, char* argv[]) {
  printf("hello from jacky\n");
  connect_server("10.1.1.1");
  return 0;
}

/******************************************************************************/
