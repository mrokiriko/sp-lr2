FROM ubuntu
ADD arr.asm .
RUN apt-get update && apt install -y nasm && apt install -qy build-essential && apt install -y gcc-multilib
CMD nasm -f elf arr.asm && gcc -m32 -o arr arr.o && ./arr
