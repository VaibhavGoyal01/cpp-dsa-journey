### 1. Check Prime
Given a positive number **N (>1 )**, design an algorithm to **check** if the given number is a **prime number or not** and express it by means of pseudo code.

**Example**

```
Input: N = 5
Output : Prime

Input: N = 4
Output : Not Prime
```

- A number **N** is a **prime no.** if it is **divisible** by only **1** & the **number** itself.

**Solution** 
```
Begin
Read N
i <- 2 
while i < = n - 1
    if n % i == 0 then
        print "not prime"
        end
    else then
        i <- i + 1
    endif
endwhile
    print "Prime No."
end

```
### 2.Largest of N numbers
Given N integer values, design an algorithm to find the largest of the N numbers
and express it by means of pseudo code.

**Example**
```
Input : N = 5
    |2|4|0|6|8|
Output : 8
```
**Solution**
```
Begin 
Read N
Read X
lsf <- x  
i <- 1
While i <= n-1 do
    read X
    if n > lsf then
        lsf <- X
    endif
    i <- i+1
endwhile
print lsf
end

```
```In C++ When we initialize a variable to another variable it will copy the value```

### 3. Printing Stars
Given a positive number N, design an algorithm to print N stars
and express it by means of pseudo code.

**Example**

Input : N = 3
Output :
- - *

Input : N = 5
Output :
- - - - *
**Solution** 
```
Begin
read N
i = 1
while i <= n do
    print '*'
    i = i+1
endwhile
end
```
``` In C++ a char must be written in single quotes```

``` In C++ a string must be written in double quotes```

### 4. Matrix of Stars
Given a positive number N, design an algorithm to print a N x N
matrix of stars and express it by means of pseudo code.

**Example**

N = 3
- - *
- - *
- - *

**Solution**
```
Begin
Read N
i = 1
while i <= n do
//Print n stars
    j = 1
    while j <= n do
        print '*'
        j = j+1
    endwhile
    print newline
    i = i+1
endwhile 
end 
```
### 5. Right-Angled Triangle of Stars
Given a positive number N, design an algorithm to print a right-angled
triangle of stars as shown in the example below and express it by means
of pseudo code.

**Example**

N = 4

*
- *
- - *
- - - *
**Solution**
```
Begin
Read N
i = 1
while i <= n do
//Print n-i spaces 
    j = 1
    while j <= i do
        print '*'
        j = j+1
    endwhile
    print newline
    i = i+1
endwhile 
end
```
### 6. Right-Angled Triangle of Stars - 2
Given a positive number N, design an algorithm to print a right-angled
triangle of stars as shown in the example below and express it by means
of pseudo code.

**Solution**
``` 
Begin
Read N
i = 1
while i <= n do
//Print n stars for ith row 
    j = 1
    while j <= i do
        print '*'
        j = j+1
    endwhile
    //print stars 
    K = 1
    while k <= i do 
        print '*'
        K = K+1
    endwhile 
    print newline
    i = i+1
endwhile 
end 
```
### 7.Pyramid of Stars
Given a positive number N, design an algorithm to print a pyramid of
stars as shown in the e.g. below & express it by means of pseudo code.

**Solution**
```
Begin
Read N
i = 1
while i <= n do
//Print n stars for ith row 
    j = 1
    while j <= i do
        print '*'
        j = j+1
    endwhile
    //print stars 
    K = 1
    while k <= i do 
        print '*'
        K = K+1
    endwhile 
    // print i-1 stars 
    j = 1 
    while j < = i-1 do 
        print '*'
        j = j+1
    end while 
    print newline
    i = i+1
endwhile 
end 
```
