
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
    # If your documentation needs a minimal Sphinx version, state it here.
needs_sphinx = '1.0'
    
        def test_include_fullpath(self):
        self.verify_fnmatch(os.path.join(self.config_path,
                                         'test_fnmatch.conf'))
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
]
    
    
def protect(f, p):
    try: f(p)
    except: pass
    
        def setUp(self):
        self.file_name = support.TESTFN.lower()
        self.file_path = FakePath(support.TESTFN)
        self.addCleanup(support.unlink, self.file_name)
        create_file(self.file_name, b'test_genericpath.PathLikeTests')
    
        def test_encoding(self):
        # Test non-default encoding.
        text = self.TEXT.decode('ascii')
        text_native_eol = text.replace('\n', os.linesep)
        with self.open(self.filename, 'wt', encoding='utf-16-le') as f:
            f.write(text)
        with open(self.filename, 'rb') as f:
            file_data = ext_decompress(f.read()).decode('utf-16-le')
            self.assertEqual(file_data, text_native_eol)
        with self.open(self.filename, 'rt', encoding='utf-16-le') as f:
            self.assertEqual(f.read(), text)
    
    class MyManager(BaseManager):
    pass
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())
    
    
def write_with_harness(codefile, sourcefile, start_linenum, linebuffer):
    '''write output with additional lines to make code likely compilable'''
    # add commonly used headers, so that lines can likely compile.
    # This is work in progress, the main issue remains handling class
    # declarations in in-function code differently
    with io.open(codefile, 'w') as code_filehandle:
        code_filehandle.write('''\
#include<stdio.h>      // by md-split
#include<stdlib.h>     // by md-split
#include<tuple>        // by md-split
#include<utility>      // by md-split
#include<limits>       // by md-split
#include<functional>   // by md-split
#include<string>       // by md-split
#include<map>          // by md-split
#include<iostream>     // by md-split
#include<vector>       // by md-split
#include<algorithm>    // by md-split
#include<memory>       // by md-split
using namespace std;   // by md-split
// %s : %s
''' % (sourcefile, start_linenum))
        # TODO: if not toplevel code, wrap inside class
        for codeline in linebuffer:
            code_filehandle.write(codeline)
    
    if __name__ == '__main__':
    num = generateLargePrime()
    print(('Prime number:', num))
    print(('isPrime:', isPrime(num)))

    
            next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
            return new_key

    
        def __prepare__(self, N = 0, M = 0):
        self.dp = [[-1 for y in range(0,M)] for x in range(0,N)]
    
    '''
The number of partitions of a number n into at least k parts equals the number of partitions into exactly k parts
plus the number of partitions into at least k-1 parts. Subtracting 1 from each part of a partition of n into k parts
gives a partition of n-k into k parts. These two facts together are used for this algorithm.
'''
def partition(m):
	memo = [[0 for _ in xrange(m)] for _ in xrange(m+1)]
	for i in xrange(m+1):
		memo[i][0] = 1
    
    
    
        for i in range(1, n+1):
        dp[i][0] = True
    
    	startLength = len(bitString)
	bitString += '1'
	while len(bitString) % 512 != 448:
		bitString += '0'
	lastPart = format(startLength,'064b')
	bitString += rearrange(lastPart[32:]) + rearrange(lastPart[:32]) 
	return bitString
    
    total_time = round(time.time() - start_time, 2)
print(('Done [', total_time, 'seconds ]'))

    
        return res
    
        return res