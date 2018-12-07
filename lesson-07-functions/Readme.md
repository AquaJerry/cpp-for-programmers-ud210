# Function Guidelines

## Modify Arguments Carefully

To get the same return value every time you call the function with the same
arguments, do not modify the arguments. It has been turned out to be extremely
useful in unit tests where a function may be called lots of times and its
return value is checked against the expected one by machine.

<!-- TODO  An Easy-to-understand Example -->

Since a function you have written so far would be used by anyone (including
yourself in the future) some day when you might not be on the project where the
function is, it's hopeful for him/her to easily know what will happen to every
arguments he/she is going to pass without asking you. If nothing would be done
about one of those arguments (the argument won't change), it's highly
recommended for you to keep a `const` keyword before the definition of that
argument from now on so he/she can see it. Otherwise, he/she needs to be
careful of argument changes after the function call.

We can also find this enforcement at the end of [this rule][1] in the ISO C++
Core Guidelines as below.

> Use `const` consistency (check if member functions modify their object; check
> if functions modify arguments passed by pointer or reference)

[1]: http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#p1-express-ideas-directly-in-code
