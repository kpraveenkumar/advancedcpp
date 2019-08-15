#### narrowing conversion

converting values

--static_assert can be done during compile time

--assert stops the program during run time, it is macro

--value semantics

--'nm' command to see symbols and objects

##### name mangling
Example

nm function_template | grep maxi | c++filt -t
nm -C

1. W is weak symbol
2. T is Text symbol

#### conversion

1. c style casting // dont use
2. call constructor like double(t) // not better
3- static cast // recommended compile time
4. dynamic cast // overhead because of checking during run time
5. const_cast
6. Up cast / downcast


##### templates must be kept in header file not in source files

##### inline functions

--- Creates weak symbol in linking

##### anonymous namespaces

Creates new Translation unit each time and keeps created translation unit every time

##### Packing and unpacking
###### Packing

...r //r is rest

###### Unpacking

sizeof...()

#####type_traits

--used in case of different data types of arguments

common_type

##### template alias

##### ellipsis

we have to format


##### typedef is replaced with 'using'
 
 typedef vs using keyword

 common_type === common_type_t

#### Variadic templates
###### left associative and right associative in type_traits, try this for multiple data_types
 
 left argument is taken out as data_type and right argument is taken_out as data_type

##### fold expressions


#### for type_traits ,can use structs instead of class,as the data member is public

##### Binary operator can be converted to unary operator, so that object acts as first argument

Eg: ostream operator << function


Better way of implementing is using operator[] instead of friend function for ostream operator <<

friend function ostream operator << is replaced/ refactored with operator[] plus operator <<

##### copy stl algorithm

copy is implemented in meta programming, memcpy the memory blocks during compile time

#### difference between endl vs \n

--endl clears the buffer, for printing small line for debugging program

--- \n does not clear the buffer, used in case of printing or writing file for long output

#### explicit constructor

compiler does not allow for implicit constructor

##### constructor delegation

one constructor can call another constructor

#### Use initializer list, when you create new classes and operator "<<" output ostream

this practise is simple and makes write clean code

###### Use bool alpha to print true/false in cout statements

##### proxiom technique

##### template specialisation

 This template specialisation does not inherit anything

 We need to implement from the scratch

 eg code: vector_bool.cpp

##### C++11 implicit constructor call using {}

 Refer vb_proxy class in vector_bool.cpp

##### converting operator
 
 refer bool() in vb_proxy class in vector_bool.cpp

 converting operator does not have return type, as return type is same as as converting operator

##### dependent types

##### Note:

Overload is preferred over the template specialisation by the compiler

##### RAII

If code has more deletes, use RAII

Use valgrind to analyse the memory blocks, which has Heap and Leak summary

#### reference qualifier and const reference qualifier for function

void fun() &

void fun() const &

#### Lvalue and Rvalue

Lvalue has name and address

Rvalue does not have name and address --> temporary objects

any literals is rvalue

const Lvalues are accepted as Rvalues

void lvalue_only(int&)

void rvalue_only(int &&)

++i --> lvalue

i++ --> rvalue

i++++ does not work

++++i works

##### move vs swap

swap does not destroy memory

move safely destroy memory and set the state to empty

Always sets state of the object to empty, when we go with our implementation of move semantics

move is similar to organ donation, organs are donated only after death

#### Return value optimization technique

This avoids copy ctor and move ctor

Eg: vector<double> y{x+v};

sums x and v and creates a new vector

so no copy ctor and move ctor is called here

##### rvalue and move

When rvalue is passed as argument, it becomes lvalue inside that function

Eg: pass_on function in vector_move.cpp
