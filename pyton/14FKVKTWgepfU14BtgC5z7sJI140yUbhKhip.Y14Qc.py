
        
            def getChild(self, request, name):
        return self
    
    # Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
        def has_more_configs(self):
        '''Returns true if there are more configs to test'''
        return bool(self._configs)
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_everything_fails(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        proc.communicate.side_effect = OSError('What we have here is a '
                                               'failure to communicate.')
        self.assertFalse(notify('Goose', 'auntrhody@example.com',
                                'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
        # Implement all methods from IAuthenticator, remembering to add
    # 'self' as first argument, e.g. def prepare(self)...
    
        author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
    __all__ = ['ehow_download']
    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')
    
            print_info(site_info, title, type_, size_full)
        if not info_only:
            download_urls(url_list, title, ext, total_size=size_full, output_dir=output_dir, merge=merge, headers=fake_headers)
    else:
        raise NotImplementedError(flashvars)
    
    `Router` interface extends `~.httputil.HTTPServerConnectionDelegate`
to provide additional routing capabilities. This also means that any
`Router` implementation can be used directly as a ``request_callback``
for `~.httpserver.HTTPServer` constructor.
    
        @gen_test
    def test_put_with_getters(self):
        q = queues.Queue()
        get0 = q.get()
        get1 = q.get()
        yield q.put(0)
        self.assertEqual(0, (yield get0))
        yield q.put(1)
        self.assertEqual(1, (yield get1))
    
    
class DigestAuthHandler(RequestHandler):
    def get(self):
        realm = 'test'
        opaque = 'asdf'
        # Real implementations would use a random nonce.
        nonce = '1234'
        username = 'foo'
        password = 'bar'
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)
    
        def call_wrapped(self, count):
        '''Wraps and calls a function at each level of stack depth
        to measure the overhead of the wrapped function.
        '''
        # This queue is analogous to IOLoop.add_callback, but lets us
        # benchmark the stack_context in isolation without system call
        # overhead.
        queue = collections.deque()
        self.call_wrapped_inner(queue, count)
        while queue:
            queue.popleft()()
    
    import bcrypt
import concurrent.futures
import MySQLdb
import markdown
import os.path
import re
import subprocess
import torndb
import tornado.escape
from tornado import gen
import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
import unicodedata
    
    from tornado.options import define, options
    
    
def linear_model_main(_distances, _press_times, target_distance):
    regr = LinearRegression()
    regr.fit(_distances, _press_times)
    predict_press_time = regr.predict(target_distance)
    result = {}
    # 截距 b
    result['intercept'] = regr.intercept_
    # 斜率值 k
    result['coefficient'] = regr.coef_
    # 预估的按压时间
    result['value'] = predict_press_time
    return result
    
        cmd = 'shell input swipe {x1} {y1} {x2} {y2} {duration}'.format(
        x1=swipe_x1,
        y1=swipe_y1,
        x2=swipe_x2,
        y2=swipe_y2,
        duration=press_time + delta_piece_y
    )
    print(cmd)
    adb.run(cmd)
    return press_time
    
            self.client = wda.Client()
        self.session = self.client.session()
    
        if model == 'ip':
        bot_params['TIME_COEFF'] = 2.
        bot_params['COORD_Y_START_SCAN'] = 200
        bot_params['PIECE_BASE_HEIGHT_HALF'] = 13
        bot_params['PIECE_BODY_WIDTH'] = 49
        bot_params['SWIPE_X1'] = 375
        bot_params['SWIPE_Y1'] = 1055
        bot_params['SWIPE_X2'] = 375
        bot_params['SWIPE_Y2'] = 1055
    
        img = cv2.imread('./autojump.png')
    img = cv2.resize(img, (0, 0), fx=scale, fy=scale)
    img, src_x, src_y = search(img)
    return img
    
    def pixel_division(img,w,h):
    pixels = list(img.getdata())
    row_pix=np.zeros([1,h])
    col_pix=np.zeros([1,w])
    for i in range(w):
        for j in range(h):
            if pixels[j*w+i]<100:
                row_pix[0,j]+=1
                col_pix[0,i]+=1
    start_h=0
    end_h=0
    flag=0
    for j in range(h):
        if row_pix[0,j]>=1 and flag==0:
            start_h=j
            flag=1
        if row_pix[0,j]>=1:
            end_h=j
    
    
def on_click(event):
    global update
    global ix, iy
    global click_count
    global cor