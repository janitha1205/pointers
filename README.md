# pointers , lecture note:

To understand pointers, you need have a idea of computer science, nothing but have knowledge of how computer operate, like do calculation and fetch data and all

pointers nothing but label of one's veriable stored in memory space,
pointer point out, this is notation of data stored in area. 
so when do programing, need not to defined varibles in vain, so that, if you know the lable, that tell us where in the space stored such data.

* '&' notaion tell us to pass the address of such data has been stored
* '*' notation tell us the value of data stored in a paticular addressed

## supose in other words

int k =10(value to assign such memory space)

int j = &k(address of assigned value)

int l = *j(value of paticular addressed located space stored, nothing but 10)

these are the so-called pointer do

## usage

when you passing the values through function, function itself, do not need to return value, so in other words, if you know adress of paticular variable, when you pass the adress other than value stored,
function itself have an accesse to paticlar memory area through its body, so do not need to define global varible, its simply doing programers life easier.
