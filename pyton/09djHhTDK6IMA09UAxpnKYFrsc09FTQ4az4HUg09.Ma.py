print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    import datetime
import io
import json
import textwrap
    
    import youtube_dl
    
        def __init__(self, **kwargs):
        '''
        Use keyword arguments to overwrite
        any of the class attributes for this instance.
    
        @property
    def headers(self):
        '''Return a `str` with the message's headers.'''
        raise NotImplementedError()
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    from httpie.compat import urlopen
from httpie.downloads import (
    parse_content_range, filename_from_content_disposition, filename_from_url,
    get_unique_filename, ContentRangeError, Downloader,
)
from utils import http, MockEnvironment
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        def _get_path(self):
        return os.path.join(self.directory, self.name + '.json')
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
        filename = args[0]
        if not os.path.exists(filename):
            raise UsageError('File not found: %s\n' % filename)
        try:
            module = _import_file(filename)
        except (ImportError, ValueError) as e:
            raise UsageError('Unable to load %r: %s\n' % (filename, e))
        spclasses = list(iter_spider_classes(module))
        if not spclasses:
            raise UsageError('No spider found in file: %s\n' % filename)
        spidercls = spclasses.pop()
    
            spidercls = DefaultSpider
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        elif url:
            spidercls = spidercls_for_request(spider_loader, Request(url),
                                              spidercls, log_multiple=True)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
                elif opt in ('-l', '--playlist', '--playlists'):
                # Download playlist whenever possible.
                conf['playlist'] = True
    
        @classmethod
    def dec_playinfo(cls, info, coeff):
        res = None
        clear = cls.funshion_decrypt_str(info['infohash'], coeff)
        if cls.checksum(clear):
            res = dict(hashid=clear[:40], token=cls.funshion_decrypt_str(info['token'], coeff))
        else:
            clear = cls.funshion_decrypt_str(info['infohash_prev'], coeff)
            if cls.checksum(clear):
                res = dict(hashid=clear[:40], token=cls.funshion_decrypt_str(info['token_prev'], coeff))
        return res
    
        def __solveDP(self, x, y):
        if (x==-1):
            return y+1
        elif (y==-1):
            return x+1
        elif (self.dp[x][y]>-1):
            return self.dp[x][y]
        else:
            if (self.A[x]==self.B[y]):
                self.dp[x][y] = self.__solveDP(x-1,y-1)
            else:
                self.dp[x][y] = 1+min(self.__solveDP(x,y-1), self.__solveDP(x-1,y), self.__solveDP(x-1,y-1))
    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
    * @author chinmoy159
* @version 1.0 dated 10/08/2017
'''