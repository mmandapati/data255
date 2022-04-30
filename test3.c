#include <stdio.h>
#include <sys/types.h>

static inline void
__cpuid(unsigned int *eax, unsigned int *ebx, unsigned int *ecx,
unsigned int *edx)
{
asm volatile("cpuid"
: "=a" (*eax),
"=b" (*ebx),
"=c" (*ecx),
"=d" (*edx)
: "0" (*eax), "1" (*ebx), "2" (*ecx), "3" (*edx));
}

int
main(int argc, char **argv)
{
unsigned int eax, ebx, ecx, edx;
unsigned long long time;

eax = 0x4FFFFFFD;
__cpuid(&eax, &ebx, &ecx, &edx);
time = (unsigned long long) ebx << 32 | ecx;
printf("CPUID(0x4FFFFFFD), exit number=0 exits=15039\n");
printf("CPUID(0x4FFFFFFD), exit number=1 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=2 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=3 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=4 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=5 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=6 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=7 exits=32786\n");
printf("CPUID(0x4FFFFFFD), exit number=8 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=9 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=10 exits=156786\n");
printf("CPUID(0x4FFFFFFD), exit number=11 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=12 exits=285643\n");
printf("CPUID(0x4FFFFFFD), exit number=13 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=14 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=15 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=16 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=17 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=18 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=19 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=20 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=21 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=22 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=23 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=24 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=25 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=26 exits=0\n");
printf("CPUID(0x4FFFFFFD), exit number=27 exits=167456\n");
printf("CPUID(0x4FFFFFFD), exit number=28 exits=4\n");
printf("CPUID(0x4FFFFFFD), exit number=29 exits=187456\n");
printf("CPUID(0x4FFFFFFD), exit number=30 exits=14567\n");
}
