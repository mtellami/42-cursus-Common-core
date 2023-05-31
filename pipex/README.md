<div align="center">

# 42cursus: Pipex
### 🔥UNIX mechanism🔥
</div>

> This project will let you discover in detail a UNIX mechanism.
---

### ♦️  Topic
  - #### System call ?</br>
  In computing, a system call is the programmatic way in which a computer program requests a service from the kernel of the operating system it is executed on. A system call is a way for programs to interact with the operating system. A computer program makes a system call when it makes a request to the operating system’s kernel.
  - #### Pipes, Fds, I/O ?</br>
  Conceptually, a pipe is a connection between two processes, such that the standard output from one process becomes the standard input of the other process. In UNIX Operating System, Pipes are useful for communication between related processes.

### ♦️  Mandatory
  - 🔹 Redirecte reading from STDIN to file1.
  - 🔹 Create the pipe for comunication between processes.
  - 🔹 Create the first child process & redirecte STDOUT to the pipe (fd[1]) & execute cmd1.
  - 🔹 Create the secound child process & redirecte STDIN to the pipe (fd[0]) and STDOUT to file2 & execute cmd2.
  
```
    Systax : ./pipex file1 cmd1 cmd2 file2
    In bash : < file1 cmd1 | cmd2 > file2
```

### ♦️  Bonus
  - 🔹 Multiple pipes .
  
```
    Systax : ./pipex file1 cmd1 cmd2 cmd3 ... cmdn file2
    In bash : < file1 cmd1 | cmd2 | cmd3 ... | cmdn > file2
```

  - 🔹 Handling << (Here_doc) and >> (Append).
  
```
    Systax : ./pipex here_doc LIMITER cmd cmd1 file
    In bash : cmd << LIMITER | cmd1 >> file
```
