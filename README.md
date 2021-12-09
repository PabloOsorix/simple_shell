SIMPLE SHELL
![shell1](https://user-images.githubusercontent.com/85521026/145466035-c090d23e-2150-4362-a214-5742ae23513a.png)


SHELL DESCRIPTION

The objective of this project is to create from scratch a simple UNIX command interpreter with limited functionality but applying the core concepts of a more robust shell. In simple words, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. It incorporates many features and generally executes other commands.

How does a shell work.
What is a PID and a ppid, and how to use them.
How to manipulate the environment of the current process.
What is the difference between a function and a system call.
How to create processes.
How does the shell use the PATH to find the programs.
How to execute another program with the execve system call.
How to suspend the execution of a process until one of its children terminates
How it works?


![flow char shell](https://user-images.githubusercontent.com/85521026/145465524-b1567017-272c-4a83-99bb-7a97db784056.jpeg)


REQUIEREMENTS

A Unix computer operating system

PREREQUISITES

Installed gcc (GNU Compiler Collection) version 4.8.4 or newer.

- visit link for more information 
  https://linuxize.com/post/how-to-install-gcc-compiler-on-ubuntu-18-04
  
  1. Clone the repo 
    https://github.com/PabloOsorix/simple_shell.git
    
  2. Compilation 
    gcc -Wall -pedantic -Werror Wextra *.c -o hsh
    
 USAGE
 The command interpreter can be use in two ways.
 
 THE INTERACTIVE MODE
 Execute normaly and it would be show to prompt, feel free to enter your comand.
  ./hsh
![shell 2](https://user-images.githubusercontent.com/85521026/145466767-9806770f-d98d-4030-8f99-f45932304ba4.png)
and always can quit safe, with comand exit or pushin in the keyboard crtl+d.
![shell 3](https://user-images.githubusercontent.com/85521026/145466863-19fca932-48fc-4159-841f-9edc15716638.png)

Non interactive-mode
You can pass the argument with echo option
  echo "ls" | ./hsh
![shell4](https://user-images.githubusercontent.com/85521026/145467009-618dd5d0-cbda-4faf-b62f-c654587ee9ff.png)

CONTRIBUTING
Create a new branch with the name of your feature or fix and make a pull request to develop branch explaining your work.

    1. Fork the Project
    2. Create your Feature Branch (git checkout -b feature/AmazingFeature)
    3. Commit your Changes (git commit -m 'Add some AmazingFeature')
    4. Push to the Branch (git push origin feature/AmazingFeature)
    5. Open a Pull Request
    
CONTACT
- Elizabeth González Payares Artemisse99(Github) -3907@holbertonschool.com
- Pablo Osorio - @Pabllitoosorio - 3387@holbertonschool.com
- Migdalis Lepage - 3519@holbertonschool.com

AUTHORS

- Elizabeth González Payares
- Pablo Osorio
- Migdalis Lepage



  
