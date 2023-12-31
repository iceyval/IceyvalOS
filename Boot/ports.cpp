static inline void outb(uint16_t port, uint8_t value) {
    asm volatile ("outb %0, %1" : : "a"(value), "Nd"(port));
}
static inline uint8_t inb(uint16_t port) {
    uint8_t data;
    asm volatile("inb %1, %0"
        : "=a" (data)
        : "dN" (port));
    return data;
}