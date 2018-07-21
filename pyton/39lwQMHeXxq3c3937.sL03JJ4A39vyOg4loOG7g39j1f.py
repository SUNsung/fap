
        
        
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)
    
    
    def getChannel(self):
        return self.channel
    
    def setChannel(self, channel):
        self.channel = channel
    
    
    
##     def specialTransition(self, state, symbol):
##         return 0
    
    	# The current Token when an error occurred.  Since not all streams
	# can retrieve the ith Token, we have to track the Token object.
	# For parsers.  Even when it's a tree parser, token might be set.
        self.token = None
    
        def test_annotations(self):
        eq = self.assertAnnotationEqual
        eq('...')
        eq(''some_string'')
        eq('b'\\xa3'')
        eq('Name')
        eq('None')
        eq('True')
        eq('False')
        eq('1')
        eq('1.0')
        eq('1j')
        eq('True or False')
        eq('True or False or None')
        eq('True and False')
        eq('True and False and None')
        eq('Name1 and Name2 or Name3')
        eq('Name1 and (Name2 or Name3)')
        eq('Name1 or Name2 and Name3')
        eq('(Name1 or Name2) and Name3')
        eq('Name1 and Name2 or Name3 and Name4')
        eq('Name1 or Name2 and Name3 or Name4')
        eq('a + b + (c + d)')
        eq('a * b * (c * d)')
        eq('(a ** b) ** c ** d')
        eq('v1 << 2')
        eq('1 >> v2')
        eq('1 % finished')
        eq('1 + v2 - v3 * 4 ^ 5 ** v6 / 7 // 8')
        eq('not great')
        eq('not not great')
        eq('~great')
        eq('+value')
        eq('++value')
        eq('-1')
        eq('~int and not v1 ^ 123 + v2 | True')
        eq('a + (not b)')
        eq('lambda arg: None')
        eq('lambda a=True: a')
        eq('lambda a, b, c=True: a')
        eq('lambda a, b, c=True, *, d=1 << v2, e='str': a')
        eq('lambda a, b, c=True, *vararg, d=v1 << 2, e='str', **kwargs: a + b')
        eq('lambda x: lambda y: x + y')
        eq('1 if True else 2')
        eq('str or None if int or True else str or bytes or None')
        eq('str or None if (1 if True else 2) else str or bytes or None')
        eq('0 if not x else 1 if x > 0 else -1')
        eq('(1 if x > 0 else -1) if x else 0')
        eq('{'2.7': dead, '3.7': long_live or die_hard}')
        eq('{'2.7': dead, '3.7': long_live or die_hard, **{'3.6': verygood}}')
        eq('{**a, **b, **c}')
        eq('{'2.7', '3.6', '3.7', '3.8', '3.9', '4.0' if gilectomy else '3.10'}')
        eq('{*a, *b, *c}')
        eq('({'a': 'b'}, True or False, +value, 'string', b'bytes') or None')
        eq('()')
        eq('(a,)')
        eq('(a, b)')
        eq('(a, b, c)')
        eq('(*a, *b, *c)')
        eq('[]')
        eq('[1, 2, 3, 4, 5, 6, 7, 8, 9, 10 or A, 11 or B, 12 or C]')
        eq('[*a, *b, *c]')
        eq('{i for i in (1, 2, 3)}')
        eq('{i ** 2 for i in (1, 2, 3)}')
        eq('{i ** 2 for i, _ in ((1, 'a'), (2, 'b'), (3, 'c'))}')
        eq('{i ** 2 + j for i in (1, 2, 3) for j in (1, 2, 3)}')
        eq('[i for i in (1, 2, 3)]')
        eq('[i ** 2 for i in (1, 2, 3)]')
        eq('[i ** 2 for i, _ in ((1, 'a'), (2, 'b'), (3, 'c'))]')
        eq('[i ** 2 + j for i in (1, 2, 3) for j in (1, 2, 3)]')
        eq('(i for i in (1, 2, 3))')
        eq('(i ** 2 for i in (1, 2, 3))')
        eq('(i ** 2 for i, _ in ((1, 'a'), (2, 'b'), (3, 'c')))')
        eq('(i ** 2 + j for i in (1, 2, 3) for j in (1, 2, 3))')
        eq('{i: 0 for i in (1, 2, 3)}')
        eq('{i: j for i, j in ((1, 'a'), (2, 'b'), (3, 'c'))}')
        eq('[(x, y) for x, y in (a, b)]')
        eq('[(x,) for x, in (a,)]')
        eq('Python3 > Python2 > COBOL')
        eq('Life is Life')
        eq('call()')
        eq('call(arg)')
        eq('call(kwarg='hey')')
        eq('call(arg, kwarg='hey')')
        eq('call(arg, *args, another, kwarg='hey')')
        eq('call(arg, another, kwarg='hey', **kwargs, kwarg2='ho')')
        eq('lukasz.langa.pl')
        eq('call.me(maybe)')
        eq('1 .real')
        eq('1.0 .real')
        eq('....__class__')
        eq('list[str]')
        eq('dict[str, int]')
        eq('set[str,]')
        eq('tuple[str, ...]')
        eq('tuple[str, int, float, dict[str, int]]')
        eq('slice[0]')
        eq('slice[0:1]')
        eq('slice[0:1:2]')
        eq('slice[:]')
        eq('slice[:-1]')
        eq('slice[1:]')
        eq('slice[::-1]')
        eq('slice[()]')
        eq('slice[a, b:c, d:e:f]')
        eq('slice[(x for x in a)]')
        eq('str or None if sys.version_info[0] > (3,) else str or bytes or None')
        eq('f'f-string without formatted values is just a string'')
        eq('f'{{NOT a formatted value}}'')
        eq('f'some f-string with {a} {few():.2f} {formatted.values!r}'')
        eq('''f'{f'{nested} inner'} outer'''')
        eq('f'space between opening braces: { {a for a in (1, 2, 3)}}'')
        eq('f'{(lambda x: x)}'')
        eq('f'{(None if a else lambda x: x)}'')
        eq('(yield from outside_of_generator)')
        eq('(yield)')
        eq('(yield a + b)')
        eq('await some.complicated[0].call(with_args=True or 1 is not 1)')
        eq('[x for x in (a if b else c)]')
        eq('[x for x in a if (b if c else d)]')
        eq('f(x for x in a)')
        eq('f(1, (x for x in a))')
        eq('f((x for x in a), 2)')
        eq('(((a)))', 'a')
        eq('(((a, b)))', '(a, b)')
    
            ([event, [lineno[, co_name[, eargs]]]]), (set_type, [sargs])
    
        def test_is_reserved(self):
        P = self.cls
        self.assertIs(False, P('').is_reserved())
        self.assertIs(False, P('/').is_reserved())
        self.assertIs(False, P('/foo/bar').is_reserved())
        self.assertIs(False, P('/dev/con/PRN/NUL').is_reserved())
    
        def supportsFeature(self, name):
        return hasattr(self._options, _name_xform(name))
    
            def b():
            self.assertIsNone(gen_b.gi_yieldfrom)
            yield from a()
            self.assertIsNone(gen_b.gi_yieldfrom)
            yield
            self.assertIsNone(gen_b.gi_yieldfrom)
    
        def test_issue11845(self):
        r = range(*slice(1, 18, 2).indices(20))
        values = {None, 0, 1, -1, 2, -2, 5, -5, 19, -19,
                  20, -20, 21, -21, 30, -30, 99, -99}
        for i in values:
            for j in values:
                for k in values - {0}:
                    r[i:j:k]
    
        exception = ['%s: %s' % (str(etype), str(evalue))]
    for name in dir(evalue):
        value = pydoc.text.repr(getattr(evalue, name))
        exception.append('\n%s%s = %s' % (' '*4, name, value))