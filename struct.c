#include <stdio.h>
#include <stdbool.h>

#define MAX_IDS 32
#define MAX_EMPLOYEES 1000

__attribute__((__packed__))struct employee_t {
    int id;
    char firstname[64];
    char lastname[64];
    float income;
    bool ismanager;
};

int main(int argc, char *argv[])
{
    struct employee_t employees[MAX_EMPLOYEES];

    printf("Size of employee: %d\n", sizeof(struct employee_t));
}

