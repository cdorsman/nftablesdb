/*
    This is for handling the systemd process of NFtables
*/


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include <systemd/sd-bus.h>

void get_status(){}

bool stop() {
    return true;
}

bool start() {
    return true;
}

bool restart() {
    return true;
}

bool reload() {
    return true;
}
