# Simple Shell

Simple Linux Shell program.

the shell is a program that takes commands from the keyboard and passes them to the machine to execute them through the kernel to perform. We can interact with this program through the terminal.

## Usage

+ All the files are to be compiled on Ubuntu 14.04 LTS.

+ You must download all the files contained in this repository in order for this program to work.

+ This program must be compiled with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o

You can use the flag -o at the end of the command to give the shell a executable name that you will remember.
'gcc -Wall -Werror -Wextra -pedantic *.c -o my_shell'. This way you can execute the program with './my_shell'


## Program execution modes

This Shell has 2 modes of execution: interactive and non-interactive.

This depends on what the user sents to the program.

This program detects if the input is sent through the built in echo with pipes | to execute it, which is the non-interactive Shell.

The interactive mode allows us to input and execute commands for an infinite amount
of times as long as the shell is running and it's not "exit" or "EOF"(Ctrl + d).
This mode has an infinite loop that prints the prompt of our Shell (DANA#) and read any input of the user with getline.

## Example

**Non-interactive mode**

    root@LAPTOP-NC133400:~/simple_shell_test# echo "/bin/ls" | ./hsh
    DANA# 1
    /bin/ls
    README.md     built_func.c  hsh           main.c  of_prompt.c  path.c       word_counter.c
    auxiliares.c  executable.c  is_builtin.c  main.h  parsing.c    read_line.c
    DANA# root@LAPTOP-NC133400:~/simple_shell_test#


**Interactive mode**

    root@LAPTOP-NC133400:~/simple_shell_test# ./hsh
    DANA# /bin/ls
    /bin/ls
    README.md     built_func.c  hsh           main.c  of_prompt.c  path.c       word_counter.c
    auxiliares.c  executable.c  is_builtin.c  main.h  parsing.c    read_line.c
    DANA#


## Licence

No copyright license registered.

## Bugs

No bugs known til the date. This section will be updated when needed.


## Documentation
+ <a href= "https://brennan.io/2015/01/16/write-a-shell-in-c/" target="_blank">Stephen Brennan’s blog</a>
+ <a href= "https://man7.org/tlpi/" target="_blank"> The Linux Programming Interface</a>

You can see more information consulting the **man_1_simple_shell**, using this command:
**man ./man_1_simple_shell**

### Authors 👨‍💻✒

- **<a href="https://www.linkedin.com/in/daniela-botero-restrepo-96b94451/" target="_blank">Daniela Botero Restrepo</a>**

- **<a href="https://www.linkedin.com/in/ana-rocha-b98174216/" target="_blank">Ana Maria Rocha</a>**

#### This project was made for: <a href="https://www.holbertonschool.com/" target="_blank">Holberton School </a>

<a href="https://www.holbertonschool.com/">
<img src="https://blog.holbertonschool.com/wp-content/uploads/2019/04/instagram_feed180.jpg" width=150" height="150" alt="Holberton School"  /></a>
