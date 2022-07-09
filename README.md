# ft_printf
[![tclement's 42 ft_printf Score](https://badge42.vercel.app/api/v2/cl59lbrtc003009jqom2qgm4z/project/1905261)](https://github.com/JaeSeoKim/badge42)<br>
***The aim of this project is to recode the printf function from the C Library.***

In this project, you learn how to use variadic arguments. 

## Technical considerations

- Allowed functions: ```malloc```, ```free```, ```write```, ```va_start```, ```va_arg```, ```va_copy```, ```va_copy```
- All heap allocated memory space must be properly freed when necessary
- It will manage the following conversions: ```cspdiuxX%```
- It will manage any combination of ```-0.*``` flags and minimum field width with all conversions
- It will manage the ```+#(space)``` flags and the ```l,ll,h,hh``` length specifiers

## How to test
> Run the following commands. You can replace the ```test.c``` with your own test file

```shell
$ git clone https://github.com/qingqingqingli/ft_printf
$ cd ft_printf
$ make
$ gcc test.c libftprintf.a
$ ./a.out
```
