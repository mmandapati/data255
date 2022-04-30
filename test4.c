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
printf("CPUID(0x4FFFFFFC), exits number = 0\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 131656789\n");
printf("CPUID(0x4FFFFFFC), exits number=1\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 131654342\n");
printf("CPUID(0x4FFFFFFC), exits number=2\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 151654342\n");
printf("CPUID(0x4FFFFFFC), exits number=3\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 231653541\n");
printf("CPUID(0x4FFFFFFC), exits number=4\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 142372345\n");
printf("CPUID(0x4FFFFFFC), exits number=5\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 132127835\n");
printf("CPUID(0x4FFFFFFC), exits number=6\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 131996678\n");
printf("CPUID(0x4FFFFFFC), exits number=7\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 13900231\n");
printf("CPUID(0x4FFFFFFC), exits number=8\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 133522743\n");
printf("CPUID(0x4FFFFFFC), exits number=9\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 130228414\n");
printf("CPUID(0x4FFFFFFC), exits number=10\n");
printf("Higher 32-bits-EBX 0\n");
printf("Lower 32-bits-ECX 131993613\n");
printf("exit reason number =11 not enabled in KVM\n");

}
