
        
        
class ArrayMinLengthValidator(MinLengthValidator):
    message = ngettext_lazy(
        'List contains %(show_value)d item, it should contain no fewer than %(limit_value)d.',
        'List contains %(show_value)d items, it should contain no fewer than %(limit_value)d.',
        'limit_value')
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        # Auth
    def get_auth_plugins(self):
        return [plugin for plugin in self if issubclass(plugin, AuthPlugin)]
    
    UNICODE = FILE_CONTENT

    
        def test_GET_with_data_auto_JSON_headers(self, httpbin):
        # JSON headers should automatically be set also for GET with data.
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
        :ivar aug: Augeas object
    :type aug: :class:`augeas.Augeas`
    
        @mock.patch('certbot_apache.display_ops.display_util')
    @certbot_util.patch_get_utility()
    @mock.patch('certbot_apache.display_ops.logger')
    def test_small_display(self, mock_logger, mock_util, mock_display_util):
        mock_display_util.WIDTH = 20
        mock_util().menu.return_value = (display_util.OK, 0)
        self._call(self.vhosts)
    
        def test_not_equal(self):
        self.assertFalse(self.addr1 != self.addr2)
        self.assertTrue(self.addr != self.addr1)
    
        def _prepare_configurator(self):
        '''Prepares the Nginx plugin for testing'''
        for k in constants.CLI_DEFAULTS.keys():
            setattr(self.le_config, 'nginx_' + k, constants.os_constant(k))
    
    
# I have written my code naively same as definition of primitive root
# however every time I run this program, memory exceeded...
# so I used 4.80 Algorithm in Handbook of Applied Cryptography(CRC Press, ISBN : 0-8493-8523-7, October 1996)
# and it seems to run nicely!
def primitiveRoot(p_val):
    print('Generating primitive root of p')
    while True:
        g = random.randrange(3,p_val)
        if pow(g, 2, p_val) == 1:
            continue
        if pow(g, p_val, p_val) == 1:
            continue
        return g
    
        for trials in range(5):
        a = random.randrange(2, num - 1)
        v = pow(a, s, num)
        if v != 1:
            i = 0
            while v != (num - 1):
                if i == t - 1:
                    return False
                else:
                    i = i + 1
                    v = (v ** 2) % num
    return True
    
            return new_key

    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
            print()
        print('The minimum Edit Distance is: %d' % (solver.solve(S1, S2)))
        print()
        print('*************** End of Testing Edit Distance DP Algorithm ***************')

    
    '''
The number of partitions of a number n into at least k parts equals the number of partitions into exactly k parts
plus the number of partitions into at least k-1 parts. Subtracting 1 from each part of a partition of n into k parts
gives a partition of n-k into k parts. These two facts together are used for this algorithm.
'''
def partition(m):
	memo = [[0 for _ in xrange(m)] for _ in xrange(m+1)]
	for i in xrange(m+1):
		memo[i][0] = 1
    
    
class SubArray:
    
        Metrics are slightly differentiated. Sometimes squared, rooted,
    even log is used.
    
            a *= a
        b >>= 1
    
        freqOrder = []
    for freqPair in freqPairs:
        freqOrder.append(freqPair[1])
    
        def test_request_line_trimming(self):
        self.con._http_vsn_str = 'HTTP/1.1\n'
        self.con.putrequest('XYZBOGUS', '/')
        self.con.endheaders()
        res = self.con.getresponse()
        self.assertEqual(res.status, HTTPStatus.NOT_IMPLEMENTED)
    
        def test_hash_randomization(self):
        # Verify that -R enables hash randomization:
        self.verify_valid_flag('-R')
        hashes = []
        if os.environ.get('PYTHONHASHSEED', 'random') != 'random':
            env = dict(os.environ)  # copy
            # We need to test that it is enabled by default without
            # the environment variable enabling it for us.
            del env['PYTHONHASHSEED']
            env['__cleanenv'] = '1'  # consumed by assert_python_ok()
        else:
            env = {}
        for i in range(3):
            code = 'print(hash('spam'))'
            rc, out, err = assert_python_ok('-c', code, **env)
            self.assertEqual(rc, 0)
            hashes.append(out)
        hashes = sorted(set(hashes))  # uniq
        # Rare chance of failure due to 3 random seeds honestly being equal.
        self.assertGreater(len(hashes), 1,
                           msg='3 runs produced an identical random hash '
                               ' for 'spam': {}'.format(hashes))
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
    def handleSlideshowTitle(title):
    print('<title>%s</title>' % getText(title.childNodes))
    
    ##
    
            H = act_fn(tf.nn.conv2d(x, W, strides=strides, padding=padding) + b)
        T = sigmoid(tf.nn.conv2d(x, W_T, strides=strides, padding=padding) + b_T)
        o = tf.multiply(H, T) + tf.multiply(x, (1. - T))
    return o
    
    
def attention_flow_self(h, u, T=None, J=None, d=None, name=None, reuse=None):
    '''Attention Flow Self Match Layer
    Input shape:
        h: [N, T, d]  # 原文中的 shape 为 [N, T, 2d], 因为经过了 bi-LSTM, 维度扩了一倍
        u: [N, J, d]
    Output shape:
        [N, T, 4d]
    
    # 可以通过相同的方式获取每个单词以及任一个 n-gram 的向量
print(model.wv['hello'])
print(model.wv['<h'])
'''
[-0.03481839  0.00606661  0.02581969  0.00188777  0.0325358 ]
[ 0.04481247 -0.1784363  -0.03192253  0.07162753  0.16744071]
'''
print()