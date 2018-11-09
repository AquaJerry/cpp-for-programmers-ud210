# Infinite Loop

Embedded systems often have infinite loops to do a main task. It is because
finite loops will always end and lead to the stop of those systems, which has
no difference of functionality from pulling plugs of those systems but still
consumes the power and costs you some extra money.


## Infinite For Loop

```cpp
for (;;)
{
	// main task
}
```


## Infinite While Loop

```cpp
// or "while (true)"
while (1)
{
	// main task
}
```
