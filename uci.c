#include "uci.h"
#include "spi.h"

void uci_send(const char *msg)
{
    printf("[UCI] send\n");
    spi_transfer(msg);
}

