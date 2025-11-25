#include "RTE_Components.h"
#include CMSIS_device_header
#include <stdint.h>
#include <stdbool.h>
//#include <stdio.h>

#define PRIME_COUNT 150

static bool is_prime(uint16_t n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (uint16_t i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(void) {
    uint16_t primes[PRIME_COUNT];
    uint16_t count = 0;
    uint16_t candidate = 2;

    while (count < PRIME_COUNT) {
        if (is_prime(candidate)) {
            primes[count++] = candidate;
        }
        candidate++;
    }

    // Output: replace this with UART or semihosting on embedded targets
    for (uint16_t i = 0; i < PRIME_COUNT; i++) {
    //    printf("%u%s", primes[i], (i < PRIME_COUNT - 1) ? ", " : "\n");
    }

    return 0;
}
