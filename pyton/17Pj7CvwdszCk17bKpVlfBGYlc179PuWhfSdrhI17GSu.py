
        
        
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output, help_text, result', [
    ('apt-get isntall vim', invalid_operation('isntall'),
     apt_get_help, 'apt-get install vim'),
    ('apt saerch vim', invalid_operation('saerch'),
     apt_help, 'apt search vim'),
])
def test_get_new_command(set_help, output, script, help_text, result):
    set_help(help_text)
    assert get_new_command(Command(script, output))[0] == result

    
        new_command = get_new_command(Command('apt update', match_output))
    assert new_command == 'apt list --upgradable'

    
    
Invalid choice: 'scn', maybe you meant:
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
            String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
    about = {}
with open(os.path.join(here, 'requests', '__version__.py'), 'r', 'utf-8') as f:
    exec(f.read(), about)
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        def checker(self):
        while True:
            try:
                ip = self.get_ip()
            except Exception as e:
                xlog.info('no ip left')
                return
    
    __file__ = os.path.abspath(__file__)
if os.path.islink(__file__):
    __file__ = getattr(os, 'readlink', lambda x: x)(__file__)
work_path = os.path.dirname(os.path.abspath(__file__))
os.chdir(work_path)
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
            code = '\n'.join((
            'import os, socket, sys, time',
            '',
            'fd = int(sys.argv[1])',
            'family = %s' % int(wr.family),
            'sock_type = %s' % int(wr.type),
            'datas = %r' % datas,
            'sleep_time = %r' % self.sleep_time,
            '',
            'wr = socket.fromfd(fd, family, sock_type)',
            'os.close(fd)',
            '',
            'with wr:',
            '    for data in datas:',
            '        # let the parent block on recv()',
            '        time.sleep(sleep_time)',
            '        wr.sendall(data)',
        ))
    
        def get_events(self):
        '''Remove calls to add_event().'''
        disallowed = [ident(self.add_event.__func__), ident(ident)]
        self.frames = None
    
        def test_PYTHONCOERCECLOCALE_not_zero(self):
        # *Any* string other than '0' is considered 'set' for our purposes
        # and hence should result in the locale coercion being enabled
        for setting in ('', '1', 'true', 'false'):
            self._check_c_locale_coercion('utf-8', 'utf-8', coerce_c_locale=setting)
    
        @unittest.skipIf(os.name != 'posix', 'test needs POSIX semantics')
    def _test_no_stdio(self, streams):
        code = '''if 1:
            import os, sys
            for i, s in enumerate({streams}):
                if getattr(sys, s) is not None:
                    os._exit(i + 1)
            os._exit(42)'''.format(streams=streams)
        def preexec():
            if 'stdin' in streams:
                os.close(0)
            if 'stdout' in streams:
                os.close(1)
            if 'stderr' in streams:
                os.close(2)
        p = subprocess.Popen(
            [sys.executable, '-E', '-c', code],
            stdin=subprocess.PIPE,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            preexec_fn=preexec)
        out, err = p.communicate()
        self.assertEqual(support.strip_python_stderr(err), b'')
        self.assertEqual(p.returncode, 42)
    
        def test_slots(self):
        # check all subclassable types defined in Objects/ that allow
        # non-empty __slots__
        check = self.check_slots
        class BA(bytearray):
            __slots__ = 'a', 'b', 'c'
        check(BA(), bytearray(), '3P')
        class D(dict):
            __slots__ = 'a', 'b', 'c'
        check(D(x=[]), {'x': []}, '3P')
        class L(list):
            __slots__ = 'a', 'b', 'c'
        check(L(), [], '3P')
        class S(set):
            __slots__ = 'a', 'b', 'c'
        check(S(), set(), '3P')
        class FS(frozenset):
            __slots__ = 'a', 'b', 'c'
        check(FS(), frozenset(), '3P')
        from collections import OrderedDict
        class OD(OrderedDict):
            __slots__ = 'a', 'b', 'c'
        check(OD(x=[]), OrderedDict(x=[]), '3P')
    
            out = self.get_output('-X', 'utf8', '-c', code,
                              PYTHONIOENCODING=':namereplace')
        self.assertEqual(out.splitlines(),
                         ['stdin: utf-8/namereplace',
                          'stdout: utf-8/namereplace',
                          'stderr: utf-8/backslashreplace'])
    
    pydoc_topic_labels = [
    'assert', 'assignment', 'async', 'atom-identifiers', 'atom-literals',
    'attribute-access', 'attribute-references', 'augassign', 'await',
    'binary', 'bitwise', 'bltin-code-objects', 'bltin-ellipsis-object',
    'bltin-null-object', 'bltin-type-objects', 'booleans',
    'break', 'callable-types', 'calls', 'class', 'comparisons', 'compound',
    'context-managers', 'continue', 'conversions', 'customization', 'debugger',
    'del', 'dict', 'dynamic-features', 'else', 'exceptions', 'execmodel',
    'exprlists', 'floating', 'for', 'formatstrings', 'function', 'global',
    'id-classes', 'identifiers', 'if', 'imaginary', 'import', 'in', 'integers',
    'lambda', 'lists', 'naming', 'nonlocal', 'numbers', 'numeric-types',
    'objects', 'operator-summary', 'pass', 'power', 'raise', 'return',
    'sequence-types', 'shifting', 'slicings', 'specialattrs', 'specialnames',
    'string-methods', 'strings', 'subscriptions', 'truth', 'try', 'types',
    'typesfunctions', 'typesmapping', 'typesmethods', 'typesmodules',
    'typesseq', 'typesseq-mutable', 'unary', 'while', 'with', 'yield'
]
    
        if (has_actual_code and not has_question_marks):
        linebuffer = clean_trailing_newlines(linebuffer)
        write_with_harness(codefile, sourcefile, start_linenum, linebuffer)
    return (line, linenum)
    
    def check_live_url(url):