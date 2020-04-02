/* In the standard MicroPython build system, this file is autogenerated from the
 * reset of the sources and called qstrdefs.preprocessed.h. We're bypassing this
 * step in our build system, so if you need a QSTR just add it below.
 *
 * How to update this file with a new MicroPython release
 * - Get a clean copy of MicroPython
 * - Copy our mpconfigport.h over the "bare-arm" port of MicroPython
 * - clone ulab into extmod/ulab/
 * - "make" the bare-arm port of MicroPython with "USER_C_MODULES=../../extmod/ulab" (don't worry if it doesn't finish)
 * - "cat build/genhdr/qstrdefs.preprocessed.h|grep '^Q'|uniq". CAUTION: the
 *   order is important, don't sort.
 * - Insert the result below in the MicroPython QSTRs section
 * - remove "QSTR(urandom)" as we renamed it to random */

// Global configuration
QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

// Ion QSTR
Q(ion)
Q(keydown)
Q(KEY_LEFT)
Q(KEY_UP)
Q(KEY_DOWN)
Q(KEY_RIGHT)
Q(KEY_OK)
Q(KEY_BACK)
Q(KEY_HOME)
Q(KEY_ONOFF)
Q(KEY_SHIFT)
Q(KEY_ALPHA)
Q(KEY_XNT)
Q(KEY_VAR)
Q(KEY_TOOLBOX)
Q(KEY_BACKSPACE)
Q(KEY_EXP)
Q(KEY_LN)
Q(KEY_LOG)
Q(KEY_IMAGINARY)
Q(KEY_COMMA)
Q(KEY_POWER)
Q(KEY_SINE)
Q(KEY_COSINE)
Q(KEY_TANGENT)
Q(KEY_PI)
Q(KEY_SQRT)
Q(KEY_SQUARE)
Q(KEY_SEVEN)
Q(KEY_EIGHT)
Q(KEY_NINE)
Q(KEY_LEFTPARENTHESIS)
Q(KEY_RIGHTPARENTHESIS)
Q(KEY_FOUR)
Q(KEY_FIVE)
Q(KEY_SIX)
Q(KEY_MULTIPLICATION)
Q(KEY_DIVISION)
Q(KEY_ONE)
Q(KEY_TWO)
Q(KEY_THREE)
Q(KEY_PLUS)
Q(KEY_MINUS)
Q(KEY_ZERO)
Q(KEY_DOT)
Q(KEY_EE)
Q(KEY_ANS)
Q(KEY_EXE)

// Kandinsky QSTRs
Q(kandinsky)
Q(color)
Q(draw_string)
Q(fill_rect)
Q(get_pixel)
Q(set_pixel)
Q(wait_vblank)
Q(get_keys)

// Keys QSTRs
Q(left)
Q(up)
Q(down)
Q(right)
Q(OK)
Q(back)

Q(home)
Q(onOff)
Q(shift)
Q(alpha)
Q(xnt)
Q(var)
Q(toolbox)
Q(backspace)

Q(exp)
Q(ln)
Q(log)
Q(imaginary)
Q(comma)
Q(power)

Q(sin)
Q(cos)
Q(tan)
Q(pi)
Q(sqrt)
Q(square)

Q(7)
Q(8)
Q(9)
Q(()
Q())

Q(4)
Q(5)
Q(6)
Q(*)
Q(/)

Q(1)
Q(2)
Q(3)
Q(+)
Q(-)

Q(0)
Q(.)
Q(EE)
Q(Ans)
Q(EXE)

// Matplotlib QSTRs
Q(arrow)
Q(axis)
Q(bar)
Q(grid)
Q(grid)
Q(hist)
Q(plot)
Q(matplotlib)
Q(matplotlib.pyplot)
Q(pyplot)
Q(scatter)
Q(show)
Q(text)

// Turtle QSTRs
Q(turtle)
Q(forward)
Q(fd)
Q(backward)
Q(bk)
Q(back)
Q(right)
Q(rt)
Q(left)
Q(lt)
Q(goto)
Q(setpos)
Q(setposition)
Q(setheading)
Q(seth)
Q(circle)
Q(speed)
Q(position)
Q(pos)
Q(heading)
Q(pendown)
Q(pd)
Q(down)
Q(penup)
Q(pu)
Q(up)
Q(pensize)
Q(width)
Q(isdown)
Q(pencolor)
Q(reset)
Q(showturtle)
Q(st)
Q(hideturtle)
Q(ht)
Q(isvisible)

// utime QSTRs
Q(time)
Q(sleep)
Q(monotonic)

// MicroPython QSTRs
Q()
Q(*)
Q(_)
Q(/)
Q(%#o)
Q(%#x)
Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
#if __EMSCRIPTEN__
Q(pystack exhausted)
#endif
Q(ArithmeticError)
Q(AssertionError)
Q(AttributeError)
Q(BaseException)
Q(C)
Q(EOFError)
Q(Ellipsis)
Q(Exception)
Q(GeneratorExit)
Q(ImportError)
Q(IndentationError)
Q(IndexError)
Q(KeyError)
Q(KeyboardInterrupt)
Q(LookupError)
Q(M)
Q(MemoryError)
Q(NameError)
Q(NoneType)
Q(NotImplementedError)
Q(OSError)
Q(OverflowError)
Q(RuntimeError)
Q(StopIteration)
Q(SyntaxError)
Q(SystemExit)
Q(TypeError)
Q(UnicodeError)
Q(ValueError)
Q(ZeroDivisionError)
Q(_0x0a_)
Q(__add__)
Q(__bool__)
Q(__build_class__)
Q(__call__)
Q(__class__)
Q(__contains__)
Q(__delitem__)
Q(__enter__)
Q(__eq__)
Q(__exit__)
Q(__ge__)
Q(__getattr__)
Q(__getitem__)
Q(__gt__)
Q(__hash__)
Q(__iadd__)
Q(__import__)
Q(__init__)
Q(__int__)
Q(__isub__)
Q(__iter__)
Q(__le__)
Q(__len__)
Q(__lt__)
Q(__main__)
Q(__module__)
Q(__name__)
#if __EMSCRIPTEN__
Q(__ne__)
#endif
Q(__new__)
Q(__next__)
Q(__path__)
Q(__qualname__)
Q(__repl_print__)
Q(__repr__)
Q(__reversed__)
Q(__setitem__)
Q(__str__)
Q(__sub__)
Q(__traceback__)
Q(__version__)
Q(_brace_open__colon__hash_b_brace_close_)
Q(_lt_dictcomp_gt_)
Q(_lt_genexpr_gt_)
Q(_lt_lambda_gt_)
Q(_lt_listcomp_gt_)
Q(_lt_module_gt_)
Q(_lt_setcomp_gt_)
Q(_lt_string_gt_)
Q(_percent__hash_o)
Q(_percent__hash_x)
Q(_space_)
Q(_star_)
Q(a)
Q(abs)
Q(acos)
Q(acosh)
Q(add)
Q(all)
Q(any)
Q(append)
Q(arctan2)
Q(argmax)
Q(argmin)
Q(args)
Q(argsort)
Q(around)
Q(array)
Q(asin)
Q(asinh)
Q(atan)
Q(atan2)
Q(atanh)
Q(axis)
Q(bin)
Q(bool)
Q(bound_method)
Q(builtins)
Q(bytecode)
Q(bytes)
Q(callable)
Q(ceil)
Q(choice)
Q(cholesky)
Q(chr)
Q(classmethod)
Q(clear)
Q(close)
Q(closure)
Q(cmath)
Q(complex)
Q(const)
Q(convolve)
Q(copy)
Q(copysign)
Q(cos)
Q(cosh)
Q(count)
Q(ddof)
Q(decimals)
Q(default)
Q(degrees)
Q(det)
Q(dict)
Q(dict_view)
Q(diff)
Q(difference)
Q(difference_update)
Q(dir)
Q(discard)
Q(divmod)
Q(dot)
Q(dtype)
Q(e)
Q(eig)
Q(end)
Q(endpoint)
Q(endswith)
Q(enumerate)
Q(erf)
Q(erfc)
Q(eval)
Q(exec)
Q(exp)
Q(expm1)
Q(extend)
Q(extras)
Q(eye)
Q(fabs)
Q(fft)
Q(filter)
Q(find)
Q(flatten)
Q(flip)
Q(float)
Q(floor)
Q(fmod)
Q(format)
Q(frexp)
Q(from_bytes)
Q(fromkeys)
Q(frozenset)
Q(function)
Q(gamma)
Q(generator)
Q(get)
Q(getattr)
Q(getrandbits)
Q(globals)
Q(hasattr)
Q(hash)
Q(heap_lock)
Q(heap_unlock)
Q(hex)
Q(id)
Q(ifft)
Q(imag)
Q(index)
Q(input)
Q(insert)
Q(int)
Q(int16)
Q(int8)
Q(intersection)
Q(intersection_update)
Q(inv)
Q(ion)
Q(isalpha)
Q(isdigit)
Q(isdisjoint)
Q(isfinite)
Q(isinf)
Q(isinstance)
Q(islower)
Q(isnan)
Q(isspace)
Q(issubclass)
Q(issubset)
Q(issuperset)
Q(isupper)
Q(items)
Q(itemsize)
Q(iter)
Q(iterator)
Q(join)
Q(k)
Q(kandinsky)
Q(kbd_intr)
Q(key)
Q(keys)
Q(ldexp)
Q(len)
Q(lgamma)
Q(linalg)
Q(linspace)
Q(list)
Q(little)
Q(locals)
Q(log)
Q(log10)
Q(log2)
Q(lower)
Q(lstrip)
Q(map)
Q(math)
Q(max)
Q(maximum_space_recursion_space_depth_space_exceeded)
Q(mean)
Q(micropython)
Q(min)
Q(modf)
Q(module)
Q(n)
Q(ndarray)
Q(next)
Q(num)
Q(numerical)
Q(object)
Q(oct)
Q(ones)
Q(open)
Q(opt_level)
Q(ord)
Q(order)
Q(pend_throw)
Q(phase)
Q(pi)
Q(polar)
Q(poly)
Q(polyfit)
Q(polyval)
Q(pop)
Q(popitem)
Q(pow)
Q(print)
#if __EMSCRIPTEN__
Q(pystack_space_exhausted)
Q(pystack_use)
#endif
Q(radians)
Q(randint)
Q(random)
Q(randrange)
Q(range)
Q(real)
Q(rect)
Q(remove)
Q(replace)
Q(repr)
Q(reshape)
Q(retstep)
Q(reverse)
Q(reversed)
Q(rfind)
Q(rindex)
Q(roll)
Q(round)
Q(rsplit)
Q(rstrip)
Q(seed)
Q(send)
Q(sep)
Q(set)
Q(setattr)
Q(setdefault)
Q(shape)
Q(sin)
Q(sinh)
Q(size)
Q(slice)
Q(sort)
Q(sorted)
Q(spectrogram)
Q(split)
Q(sqrt)
Q(start)
Q(startswith)
Q(staticmethod)
Q(std)
Q(step)
Q(stop)
Q(str)
Q(strip)
Q(sum)
Q(super)
Q(symmetric_difference)
Q(symmetric_difference_update)
Q(tan)
Q(tanh)
Q(throw)
Q(time)
Q(to_bytes)
Q(transpose)
Q(trunc)
Q(tuple)
Q(turtle)
Q(type)
Q(uarray)
Q(uint16)
Q(uint8)
Q(ulab)
Q(uniform)
Q(union)
Q(update)
Q(upper)
Q(v)
Q(value)
Q(values)
Q(vector)
Q(zeros)
Q(zip)
