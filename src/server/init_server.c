/*
** EPITECH PROJECT, 2022
** EPITECH-WORKSOP-Chat-Box-in-C
** File description:
** init_server
*/

#include "server.h"

server_t *init_server(char *ip_addr, int port)
{
    server_t *server = malloc(sizeof(server_t));

    server->ip_addr = ip_addr;
    server->port = port;
    server->addr.sin_family = AF_INET;
    server->addr.sin_port = htons(server->port);
    server->addr.sin_addr.s_addr = INADDR_ANY;
    server->socket = socket(AF_INET, SOCK_STREAM, 0);
    bind(server->socket, (struct sockaddr *)&server->addr, sizeof(server->addr));
    listen(server->socket, 99);
    return server;
}