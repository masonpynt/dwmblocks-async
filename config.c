#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
//    {"sb-mail",    600,  1 },
//    {"sb-music",   0,    2 },
//    {"sb-disk",    1800, 3 },
    {"sb-memory",  10,   4 },
//    {"sb-loadavg", 5,    5 },
//    {"sb-mic",     0,    6 },
//    {"sb-record",  0,    7 },
//    {"sb-volume",  0,    8 },
//    {"sb-boattery", 5,    9 },
    {"~/.local/bin/sb-weather", 600, 12},
    {"sb-bluetooth", 10,   5 },
    {"~/.local/bin/sb-wifi",    5,    11},
    {"sb-date",    1,    10},
    

};

const unsigned short blockCount = LEN(blocks);
