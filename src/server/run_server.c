/*
** EPITECH PROJECT, 2022
** EPITECH-WORKSOP-Chat-Box-in-C
** File description:
** run_server
*/

#include <sys/select.h>
#include <signal.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <unistd.h>
#include <stdbool.h>
#include <uuid/uuid.h>
#include "server.h"

void run_server(server_t *server)
{
    int state = 0;
    fd_set fd_write;
    fd_set fd_read;
    fd_set fd_save;

    while (state != 84) {
    FD_ZERO(&fd_read);
    FD_ZERO(&fd_read);
    FD_SET(server->socket, &fd_save);
        fd_read = fd_save;
        if (select(server->socket + 1, &fd_read, &fd_write, NULL, NULL) == -1)
            perror("select error");
        else {
            printf("client connected\n GGWP\n");
        }

    }
}
