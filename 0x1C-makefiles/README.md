# 0x1C. C - Makefiles
Makefile (or makefile), which defines set of tasks to be executed.
## Basic examples
```
hello:
        echo "Hello World"
```
Now run the file by typing make
```
$ make
echo "Hello World"
Hello World
```
In the example above, ```hello``` behaves like a function name, as in any programming language.
This is called the **target**. The **prerequisites or dependencies** follow the target. The command 
```echo "Hello World"``` is called the **recipe**. 
The **recipe** uses prerequisites to make a target. The target, prerequisites, and recipes together make a **rule**.

below is the syntax of a typical rule:
```
target: prerequisites
<TAB> recipe
```
