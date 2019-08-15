##### type deduction for template functions

typeinfo

decltype


##### Table for T and arg

~~~~~~~~~~~~~~~~~~~~~~~~
|T     | T&    |  T&&  |
------------------------
|int   | int&  | int&& |
------------------------
|int&  | int&  | int&  |
------------------------
|int&& | int&  | int&& |
~~~~~~~~~~~~~~~~~~~~~~~~

--> This is forward reference

Try overloading template function and normal function and delete function

Practise with lvalue and rvlaue reference
 
Practise with type traits

##### Note:

rvalue ref (Reference to rvalue) is lvalue

If we use move, all are rvalues even for lvalue

So perfect forwarding, will respect lvalue and rvalue, can expect the same lvalue and rvalue

-------------------------------------------------------------------------------------------------------------------

#### Note :

Forward is not variadic,so forward<Args>(args)... but not forward<Args...>(args...)

Ellipsis is "..."

#### Index_sequence

indices as template parameters 

part of c+14

##### auto types

1. const is not only safer but makes the code faster // compiler does it 

2. check decltype and decl_value

3. decltype(auto)

##### functors

Constructor of base class are not inherited in derived class

But in C+11, using Base::Base in derived class, will inherit all constructors of base class


#### lambda expressions

1. Try call lambda recursively, (Not good practise of programming it is horrible)

2. We can store one lambda into another lambda

3. Call lambda functions one by one

4. Generic capture in lambda in C+14

5. Capturing the unique_ptr by value(no copy ctor available in unique_ptr) and reference is not possible

6. So move ctor is used to move unique_ptr to maintain the scope of the variable

#### unique pointer

no copy ctor in unique_pointer

#### Sub-matrix

sub_matrix exists in C+11

#### pre-increment and post-increment

Post increment creates temporary object

Check difference between pre increment and post increment

Where post increment is essential for implementation
