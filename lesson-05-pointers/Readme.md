# Pointers

## Bjarne Stroustrup Interview

Bjarne Stroustrup, designer, original implementor of C++

### Why Learn Pointers

> A language like Java also has pointers. They just call them references. And
> in C++ when you deal with the low-level pointers, basically, machine
> addresses and word widths. But then you hide them. We use a vector. You don't
> need a pointer for that. You just have a local variable that's a vector. And
> in that variable the vector handles the memory's changing size and such
> similar changes. It uses pointers for those. But you don't have to use it. So
> vectors, strings and such eliminates pointer use. And actually C++ uses a lot
> of local variables, general local variables. So if you go into generated
> code, there's actually few of pointers. Then you'll find in most languages
> it's one of the reasons it run fast because you don't have to dereference all
> these pointers, chase pointers around. You'll just find data right there in
> stack. Pointers are fundamental to deal with hardware. Then you use that to
> implement higher-level abstractions.

### How Are Pointers Used

> The pointers are all over the place. And they're mostly in the
> implementation. So if you have a linked list, you have pointers for going to
> the next and previous element. If you have a class hierarchy of shapes, you
> have pointers in the base class that goes to the appropriate functions. So a
> lot of it is there. If you're using a vector in C++, it's implemented using
> pointers, three of them actually. Same with the string. But you don't see
> them as much as you do in all the languages. I think if you use pointers
> directly all the time you're probably wrong. They should disappear into
> things that are easier to use. And then leaves to compiler to use them really
> well and to optimize their uses. So, I mean, if you look at this simple
> linked list, that's the way you have pointers.
