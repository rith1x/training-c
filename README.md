# DSA - C


### `STRUCT` Datatype

#### Syntax

```c
struct name{
    int a;
    char b;
}

```

- Define above the main fn. since this is an userdefined datatype.

- `Padding` process: During memory `allocation`, the memory is allocated in `multiples of 4`, so, if int + char, it is `8`, not `5`, `3` is `padded` to make the mem size `multiples of 4`.
