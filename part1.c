#include <unistd.h>
#include <stdio.h>

int main() {
    char buf[100];
    getcwd(buf, sizeof(buf)); // 1: getcwd()
    write(1, "Hello\n", 6); // 2: write()
    getpid(); // 3: getpid()
    fork(); // 4: fork()
    sleep(1); // 5: sleep()
    return 0;
}
