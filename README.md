# CMake Tutorials


## Default behaviour

  * go to your example
```
$ cd 01\ -\ simple/
```
  * create build folder if not exists
```
$ mkdir build
```
  * run cmake
```
$ cd build
$ cmake -S ..
```
  * build
```
$ make
```
  * run install (optional)
```
$ sudo make install
```
  * run your executable
```
$ ./simple_test 
Hello World
```


## Parts

### 01 - simple

Just a 'Hello World' example with cmake

### 02 - add libs

```
$ sudo apt install libcurl4-openssl-dev
```

01 with the extension by including libcurl

### 03 - lib project

simple library project with local installation and a header file to include into other projects

