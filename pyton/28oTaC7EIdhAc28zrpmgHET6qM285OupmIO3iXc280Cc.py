
def convert_to_tfrecord(input_files, output_file):
  '''Converts a file to TFRecords.'''
  print('Generating %s' % output_file)
  with tf.python_io.TFRecordWriter(output_file) as record_writer:
    for input_file in input_files:
      data_dict = read_pickle_from_file(input_file)
      data = data_dict['data']
      labels = data_dict['labels']
      num_entries_in_batch = len(labels)
      for i in range(num_entries_in_batch):
        example = tf.train.Example(features=tf.train.Features(
            feature={
                'image': _bytes_feature(data[i].tobytes()),
                'label': _int64_feature(labels[i])
            }))
        record_writer.write(example.SerializeToString())
    
        super(Cifar10Model, self).__init__(
        resnet_size=resnet_size,
        num_classes=num_classes,
        num_filters=16,
        kernel_size=3,
        conv_stride=1,
        first_pool_size=None,
        first_pool_stride=None,
        second_pool_size=8,
        second_pool_stride=1,
        block_fn=resnet.building_block,
        block_sizes=[num_blocks] * 3,
        block_strides=[1, 2, 2],
        final_size=64,
        data_format=data_format)
    
            # If descriptor already exists, skip its computation.
        out_desc_filename = os.path.splitext(os.path.basename(
            image_paths[i]))[0] + _DELF_EXT
        out_desc_fullpath = os.path.join(cmd_args.output_dir, out_desc_filename)
        if tf.gfile.Exists(out_desc_fullpath):
          tf.logging.info('Skipping %s', image_paths[i])
          continue
    
    import numpy as np
from six.moves import xrange
import tensorflow as tf
    
    
def train(model, optimizer, dataset, log_interval=None):
  '''Trains model on `dataset` using `optimizer`.'''
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    def four_lines_data():
  text = StringIO(FOUR_LINES)
    
        def check_bitop_identities_2(self, x, y):
        eq = self.assertEqual
        with self.subTest(x=x, y=y):
            eq(x & y, y & x)
            eq(x | y, y | x)
            eq(x ^ y, y ^ x)
            eq(x ^ y ^ x, y)
            eq(x & y, ~(~x | ~y))
            eq(x | y, ~(~x & ~y))
            eq(x ^ y, (x | y) & ~(x & y))
            eq(x ^ y, (x & ~y) | (~x & y))
            eq(x ^ y, (x | y) & (~x | ~y))
    
        def test_keys_reuse(self):
        s = '[{'a_key': 1, 'b_\xe9': 2}, {'a_key': 3, 'b_\xe9': 4}]'
        self.check_keys_reuse(s, self.loads)
        self.check_keys_reuse(s, self.json.decoder.JSONDecoder().decode)
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
                self.assertIn('Project-Id-Version', header)
            self.assertIn('POT-Creation-Date', header)
            self.assertIn('PO-Revision-Date', header)
            self.assertIn('Last-Translator', header)
            self.assertIn('Language-Team', header)
            self.assertIn('MIME-Version', header)
            self.assertIn('Content-Type', header)
            self.assertIn('Content-Transfer-Encoding', header)
            self.assertIn('Generated-By', header)
    
    <body>
    %(table)s%(legend)s
</body>
    
        Returns a tuple of the decoded string and the index of the character in s
    after the end quote.'''
    chunks = []
    _append = chunks.append
    begin = end - 1
    while 1:
        chunk = _m(s, end)
        if chunk is None:
            raise JSONDecodeError('Unterminated string starting at', s, begin)
        end = chunk.end()
        content, terminator = chunk.groups()
        # Content is contains zero or more unescaped string characters
        if content:
            _append(content)
        # Terminator is the end of string, a literal control character,
        # or a backslash denoting that an escape sequence follows
        if terminator == ''':
            break
        elif terminator != '\\':
            if strict:
                #msg = 'Invalid control character %r at' % (terminator,)
                msg = 'Invalid control character {0!r} at'.format(terminator)
                raise JSONDecodeError(msg, s, end)
            else:
                _append(terminator)
                continue
        try:
            esc = s[end]
        except IndexError:
            raise JSONDecodeError('Unterminated string starting at',
                                  s, begin) from None
        # If not a unicode escape sequence, must be in the lookup table
        if esc != 'u':
            try:
                char = _b[esc]
            except KeyError:
                msg = 'Invalid \\escape: {0!r}'.format(esc)
                raise JSONDecodeError(msg, s, end)
            end += 1
        else:
            uni = _decode_uXXXX(s, end)
            end += 5
            if 0xd800 <= uni <= 0xdbff and s[end:end + 2] == '\\u':
                uni2 = _decode_uXXXX(s, end + 1)
                if 0xdc00 <= uni2 <= 0xdfff:
                    uni = 0x10000 + (((uni - 0xd800) << 10) | (uni2 - 0xdc00))
                    end += 6
            char = chr(uni)
        _append(char)
    return ''.join(chunks), end
    
        expect_without_sort_keys = textwrap.dedent('''\
    [
        [
            'blorpie'
        ],
        [
            'whoops'
        ],
        [],
        'd-shtaeou',
        'd-nthiouh',
        'i-vhbjkhnth',
        {
            'nifty': 87
        },
        {
            'field': 'yes',
            'morefield': false
        }
    ]
    ''')
    
    
def load_environment(global_conf={}, app_conf={}, setup_globals=True):
    r2_path = get_r2_path()
    root_path = os.path.join(r2_path, 'r2')
    
            controllers = importlib.import_module(self.package_name +
                                              '.controllers')
        controllers.load_controllers()
        self.config['r2.plugins'].load_controllers()
        self._controllers = controllers
        self._check_csrf_prevention()
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)
    
            res = AdminPage(content = AdminAwardGive(award, recipient, desc,
                                                 url, hours),
                        title='give an award').render()
        return res
    
        @csrf_exempt
    def renderurl(self, override=None):
        if override:
            path = override
        else:
            path = request.path
    
        def GET_cachehealth(self):
        results = {}
        behaviors = {
            # Passed on to poll(2) in milliseconds
            'connect_timeout': 1000,
            # Passed on to setsockopt(2) in microseconds
            'receive_timeout': int(1e6),
            'send_timeout': int(1e6),
        }
        for server in cache._CACHE_SERVERS:
            try:
                if server.startswith('udp:'):
                    # libmemcached doesn't support UDP get/fetch operations
                    continue
                mc = pylibmc.Client([server], behaviors=behaviors)
                # it's ok that not all caches are mcrouter, we'll just ignore
                # the miss either way
                mc.get('__mcrouter__.version')
                results[server] = 'OK'
            except pylibmc.Error as e:
                g.log.warning('Health check for %s FAILED: %s', server, e)
                results[server] = 'FAILED %s' % e
        return json.dumps(results)
