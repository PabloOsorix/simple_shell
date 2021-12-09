% Man of simple Shell 1.0
% Pablo Garcia, Elizabeth González Payares, Migdalis Migdalis Lepage
% December 2021


#NAME

	--Simple Shell - Command interpreter.

#SYNOPSIS

	--[command_string | file] - #include "shell.h"


#SINTAXIS

	--int main (int argc, char *argv[]);

#DESCRIPTION

--Simple shell is a compatible command language interpreter that executes commands read
from the standard input or from a file, being a system of services for a human user
or other program.

#OPTIONS

--Builtin:

	- exit: It terminaters the calling process inmmediately.
	- env: It show the enviroment.

--No Builtin:

     - cat [filename]: Display file’s contents to the standard output device (usually your monitor).

     -chmod [options]: mode filename: Change a file’s permissions.

     -chown [options] filename: Change who owns a file.

     -clear Clear a command line screen/window for a fresh start.

     -cp [options] source destination: Copy files and directories.

     -date [options]: Display or set the system date and time.

     -df [options]: Display used and available disk space.

     -du [options]: Show how much space each file takes up.



     -echo: used to display line of text/string that are passed as an argument.

     -file [options] filename: Determine what type of data is within a file.

     -find [pathname] [expression]: Search for files matching a provided pattern.

     -grep [options] pattern [filesname]: Search files or output for a particular pattern.

     -less [options] [filename]: View the contents of a file one page at a time.

     -ln [options] source [destination]: Create a shortcut.

     -locate filename: Search a copy of your filesystem for the specified filename.

     -lpr [options]: Send a print job.

     -ls [options]: List directory contents.

     -man [command]: Display the help information for the specified command.

     -mkdir [options] directory: Create a new directory.

     -mv [options] source destination: Rename or move file(s) or directories.

     -passwd [name [password]]: Change the password or allow
     	     (for the system administrator) to change any password.

     -ps [options]: Display a snapshot of the currently running processes.

     -pwd: Display the pathname for the current directory.

     -rm [options] directory: Remove (delete) file(s) and/or directories.

     -rmdir [options] directory: Delete empty directories.

     -ssh [options] user@machine: Remotely log in to another Linux machine,
     over the network. Leave an ssh session      by typing exit.

     -su [options] [user [arguments]]: Switch to another user account.

     -tail [options] [filename]: Display the last n lines of a file (the default is 10).

     -tar [options] filename: Store and extract files from a tarfile (.tar) or
     	  tarball (.tar.gz or .tgz). top Displays the resources being used on
	  your system. Press q to exit. touch filename Create an empty file with
	  the specified name.

     -who [options]: Display who is logged on.

#EXAMPLES

--ls:

'#man_1_simple_shell.md#'    _perror.c   built-in.c   exitf.c      getenv.c   prompt.c       shell     tokenizeinput.c
 README.md              _string.c       dprintf.c      get_stat.c    hsh        read_input.c   shell.h   tokenizepath.c

--ls -la:

total 89
      -rw-r--r-- 1 pablito pablito  2952 Dec  9 15:14 '#man_1_simple_shell.md#'

      drwxr-xr-x 1 pablito pablito   512 Dec  9 15:08  .
      
      lrwxrwxrwx 1 pablito pablito    19 Dec  9 15:06  .#man_1_simple_shell.md -> pablito@OSORIO.2240
      
      drwxr-xr-x 1 pablito pablito   512 Dec  9 15:14  ..
      
      -rw-r--r-- 1 pablito pablito   140 Dec  8 16:02  .gdb_history
      
      drwxr-xr-x 1 pablito pablito   512 Dec  8 23:20  .git

      -rw-r--r-- 1 pablito pablito    19 Dec  8 16:25  README.md

      -rw-r--r-- 1 pablito pablito   610 Dec  6 23:40  _perror.c

      -rw-r--r-- 1 pablito pablito  1554 Dec  8 16:02  _string.c

      -rw-r--r-- 1 pablito pablito   804 Dec  8 22:23  built-in.c

      -rw-r--r-- 1 pablito pablito  1915 Dec  8 22:24  dprintf.c

      -rw-r--r-- 1 pablito pablito   343 Dec  8 22:27  exitf.c

      -rw-r--r-- 1 pablito pablito   984 Dec  8 19:54  get_stat.c

      -rw-r--r-- 1 pablito pablito   585 Dec  8 16:02  getenv.c

      -rwxr-xr-x 1 pablito pablito 22416 Dec  8 22:53  hsh

      -rw-r--r-- 1 pablito pablito  1209 Dec  8 21:37  prompt.c

      -rw-r--r-- 1 pablito pablito   358 Dec  8 19:21  read_input.c

      -rwxr-xr-x 1 pablito pablito 18224 Dec  8 16:02  shell

      -rw-r--r-- 1 pablito pablito  1022 Dec  8 22:26  shell.h

      -rw-r--r-- 1 pablito pablito   643 Dec  8 16:02  tokenizeinput.c

      -rw-r--r-- 1 pablito pablito   578 Dec  8 16:02  tokenizepath.c



--echo:
	echo "hello".
	outuput: hello

	--pwd:

	/home/username/currentdirectory

#EXIT VALUES

       --An exit status of zero indicates success. A non-zero exit status indicates failure
       and if  a  command is not found, the child process created to execute it returns a status of 127.

#RETURN VALUE

--When it return 0 the execution was perfectly done, if it return another number it had a error.

#BUGS

--It can't handle pipes.
--Semicolon is not handled.
--It can´t change current directory.