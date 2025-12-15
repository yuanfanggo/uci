#include "uci.h"
#include "spi.h"

void uci_send(const char *msg)
{
    spi_transfer(msg);
}

