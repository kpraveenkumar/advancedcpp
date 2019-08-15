##### godbolt compiler

-Can compile with different compiler-gcc, clang++

-Can check the assembly code, mangle and de mangle the names

#### template meta programming

1. constexpr can be used for meta programming

2. constexpr can be computed at compile time as well as runtime

3. meta template cannot be evaluated at runtime

4. If value is known at compile time, make it as constexpr not const

5. Exercise: compute prime number at compile time using const expr and templates

#### type_traits

1. enable_if works only for return types and function parameters

2. counter based profiling and trace based profiling

##### compile time if  using constexpr

Works only from C+17

Eg:

if constexpr

##### type traits

1. true_type

2. false_type

integer_constants<type,value>

1. Macro can be replaced by type traits

2. ellipsis catches everything, similar to void *

3. declval creates objects of every type or rvalue reference

4. Generic impl uses type traits and decltype and declvalue

### Meta programming

Template alias

Expression templates


#### smart pointer

1. unique_ptr

2. shared_ptr

3. weak_ptr

##### unique_ptr

1. Does not take any memory when compared with raw pointer, check by sizeof()

2. Cannot copy but can be moved

##### shared_ptr

1. shared_ptr is not thread safe

2. use_count -->only count reference is thread safe(atomic)

3. move semantics does not change the use_count, as ownership is moved to another pointer

4. move means give away data

5. copy means share the data 


##### weak_ptr

1. To connect multiple shared_ptr's, we use weak_ptr, so no memory loss 

2. weak_ptr can be used to create shared_ptr, so it is better than shared_ptr

#### Function and memory alignment

##### Function pointer

using bin=function<int(int,int)>

return type is int

two arguments are int,int
