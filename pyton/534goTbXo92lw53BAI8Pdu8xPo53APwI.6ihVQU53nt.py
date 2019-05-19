
        
            publicKey = (n, e)
    privateKey = (n, d)
    return (publicKey, privateKey)
    
            next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
    
class QuadraticProbing(HashTable):
    '''
        Basic Hash Table example with open addressing using Quadratic Probing 
    '''
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
    
            if isinstance(B,bytes):
            B = B.decode('ascii')
    
    try:
	raw_input		#Python 2
except NameError:
	raw_input = input	#Python 3
    
    print(longestSub([4,8,7,5,1,12,2,3,9]))
print(longestSub([9,8,7,6,5,7]))
    
    OLD_REWRITE_HTTPS_ARGS = [
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,QSA,R=permanent]'],
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,QSA,R=permanent]']]
    
    The path to this file can be provided interactively or using the
``--dns-cloudflare-credentials`` command-line argument. Certbot records the path
to this file for use during renewal, but does not store the file's contents.
    
    ========================================  =====================================
``--dns-cloudxns-credentials``            CloudXNS credentials_ INI file.
                                          (Required)
``--dns-cloudxns-propagation-seconds``    The number of seconds to wait for DNS
                                          to propagate before asking the ACME
                                          server to verify the DNS record.
                                          (Default: 30)
========================================  =====================================
    
    def fetch_photo_url_list_impl(url, size, method, id_field, id_parse_func, collection_name):
    page = get_html(url)
    api_key = get_api_key(page)
    ext_field = ''
    if id_parse_func:
        ext_field = '&%s=%s' % (id_field, id_parse_func(url, page))
    page_number = 1
    urls = []
    while True:
        call_url = tmpl_api_call % (api_key, method, ext_field, page_number)
        photoset = json.loads(get_content_headered(call_url))[collection_name]
        pagen = photoset['page']
        pages = photoset['pages']
        for info in photoset['photo']:
            url = get_url_of_largest(info, api_key, size)
            urls.append(url)
        page_number = page_number + 1
        # the typeof 'page' and 'pages' may change in different methods
        if str(pagen) == str(pages):
            break
    return urls, match1(page, pattern_inline_title)
    
    from ..common import *
    
    class Imgur(VideoExtractor):
    name = 'Imgur'
    
            pdf = match1(content, r'name='filename'\s*value='([^']+\.pdf)'')
        if pdf: pdf = 'http://res.infoq.com/downloads/pdfdownloads/%s' % pdf
    
        content = re.sub('MAJOR_VERSION = .*\n',
                     'MAJOR_VERSION = {}\n'.format(major),
                     content)
    content = re.sub('MINOR_VERSION = .*\n',
                     'MINOR_VERSION = {}\n'.format(minor),
                     content)
    content = re.sub('PATCH_VERSION = .*\n',
                     'PATCH_VERSION = '{}'\n'.format(patch),
                     content)
    
        def __init__(self, unpacked, extra):
        self.unpacked = unpacked
        self.extra = extra
    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
    ax = fig.add_axes((0.63, 0.1, 0.16, 0.8))
for i in range(4):
    ax.plot(np.random.rand(8))
ax.set_xticks([])
ax.set_yticks([])
    
    
@pytest.mark.parametrize('grps', [
    ['qux'], ['qux', 'quux']])
@pytest.mark.parametrize('vals', [
    [2, 2, 8, 2, 6],
    [pd.Timestamp('2018-01-02'), pd.Timestamp('2018-01-02'),
     pd.Timestamp('2018-01-08'), pd.Timestamp('2018-01-02'),
     pd.Timestamp('2018-01-06')]])
@pytest.mark.parametrize('ties_method,ascending,pct,exp', [
    ('average', True, False, [2., 2., 5., 2., 4.]),
    ('average', True, True, [0.4, 0.4, 1.0, 0.4, 0.8]),
    ('average', False, False, [4., 4., 1., 4., 2.]),
    ('average', False, True, [.8, .8, .2, .8, .4]),
    ('min', True, False, [1., 1., 5., 1., 4.]),
    ('min', True, True, [0.2, 0.2, 1.0, 0.2, 0.8]),
    ('min', False, False, [3., 3., 1., 3., 2.]),
    ('min', False, True, [.6, .6, .2, .6, .4]),
    ('max', True, False, [3., 3., 5., 3., 4.]),
    ('max', True, True, [0.6, 0.6, 1.0, 0.6, 0.8]),
    ('max', False, False, [5., 5., 1., 5., 2.]),
    ('max', False, True, [1., 1., .2, 1., .4]),
    ('first', True, False, [1., 2., 5., 3., 4.]),
    ('first', True, True, [0.2, 0.4, 1.0, 0.6, 0.8]),
    ('first', False, False, [3., 4., 1., 5., 2.]),
    ('first', False, True, [.6, .8, .2, 1., .4]),
    ('dense', True, False, [1., 1., 3., 1., 2.]),
    ('dense', True, True, [1. / 3., 1. / 3., 3. / 3., 1. / 3., 2. / 3.]),
    ('dense', False, False, [3., 3., 1., 3., 2.]),
    ('dense', False, True, [3. / 3., 3. / 3., 1. / 3., 3. / 3., 2. / 3.]),
])
def test_rank_args(grps, vals, ties_method, ascending, pct, exp):
    key = np.repeat(grps, len(vals))
    vals = vals * len(grps)
    df = DataFrame({'key': key, 'val': vals})
    result = df.groupby('key').rank(method=ties_method,
                                    ascending=ascending, pct=pct)
    
    
@pytest.mark.parametrize('css,inherited,expected', [
    ('font-weight: bold', '',
     {'font': {'bold': True}}),
    ('', 'font-weight: bold',
     {'font': {'bold': True}}),
    ('font-weight: bold', 'font-style: italic',
     {'font': {'bold': True, 'italic': True}}),
    ('font-style: normal', 'font-style: italic',
     {'font': {'italic': False}}),
    ('font-style: inherit', '', {}),
    ('font-style: normal; font-style: inherit', 'font-style: italic',
     {'font': {'italic': True}}),
])
def test_css_to_excel_inherited(css, inherited, expected):
    convert = CSSToExcelConverter(inherited)
    assert expected == convert(css)