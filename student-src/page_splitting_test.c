#include "page_splitting.h"
#include <stdio.h>

int main() {
    vaddr_t addr = 0x0fffC001;
    vpn_t page;
    uint16_t offset;
    page = vaddr_vpn(addr);
    offset = vaddr_offset(addr); 
    printf("%i, %i\n", page, offset);
    return 0;
}
