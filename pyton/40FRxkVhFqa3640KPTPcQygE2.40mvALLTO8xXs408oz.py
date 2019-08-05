
        
                # Arguments
            input_shape: Keras tensor (future input to layer)
                or list/tuple of Keras tensors to reference
                for weight shape computations.
        '''
        self.built = True
    
    # Reverse-lookup token index to decode sequences back to
# something readable.
reverse_input_char_index = dict(
    (i, char) for char, i in input_token_index.items())
reverse_target_char_index = dict(
    (i, char) for char, i in target_token_index.items())
    
    # Compute the gradients of the dream wrt the loss.
grads = K.gradients(loss, dream)[0]
# Normalize gradients.
grads /= K.maximum(K.mean(K.abs(grads)), K.epsilon())
    
    
def test_deconv_length():
    assert conv_utils.deconv_length(None, 1, 7, 'same', None) is None
    assert conv_utils.deconv_length(224, 1, 7, 'same', None) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', None) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', None) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', None) == 67
    assert conv_utils.deconv_length(32, 1, 5, 'full', None) == 28
    assert conv_utils.deconv_length(32, 2, 5, 'full', None) == 59
    assert conv_utils.deconv_length(224, 1, 7, 'same', 0) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', 0) == 447
    assert conv_utils.deconv_length(224, 2, 7, 'same', 1) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', 0) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 0) == 67
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 1) == 68
    assert conv_utils.deconv_length(6, 1, 3, 'full', 0) == 4
    assert conv_utils.deconv_length(6, 2, 3, 'full', 1) == 10
    assert conv_utils.deconv_length(6, 2, 3, 'full', 2) == 11
    
        def __deepcopy__(self, memo):
        result = copy.copy(self)
        memo[id(self)] = result
        result.widget = copy.deepcopy(self.widget, memo)
        result.validators = self.validators[:]
        return result
    
        def test_inline_add_fk_noperm(self):
        response = self.client.get(reverse('admin:admin_inlines_holder2_add'))
        # No permissions on Inner2s, so no inline
        self.assertNotContains(response, '<h2>Inner2s</h2>')
        self.assertNotContains(response, 'Add another Inner2')
        self.assertNotContains(response, 'id='id_inner2_set-TOTAL_FORMS'')
    
    
DEFAULT_CONVERTERS = {
    'int': IntConverter(),
    'path': PathConverter(),
    'slug': SlugConverter(),
    'str': StringConverter(),
    'uuid': UUIDConverter(),
}
    
            # Shorthand boolean flags.
        geodetic = f.geodetic(self.connection)
        geography = f.geography
    
        # Don't worry about making _dec look similar to a list/tuple as it's rather
    # meaningless.
    if not hasattr(decorator, '__iter__'):
        update_wrapper(_dec, decorator)
    # Change the name to aid debugging.
    obj = decorator if hasattr(decorator, '__name__') else decorator.__class__
    _dec.__name__ = 'method_decorator(%s)' % obj.__name__
    return _dec
    
        if configure is not None:
        configure_args = [
            '--prefix=/usr/local',
            '--enable-static',
            '--disable-shared',
            #'CPP=gcc -arch %s -E'%(' -arch '.join(archList,),),
        ]
    
        class PicklePrint:
        def __reduce_ex__(self, p):
            return str, ('Pwned!',)
    
            expected = {9: 1, 18: 2, 19: 2, 27: 3, 28: 3, 29: 3, 36: 4, 37: 4,
                    38: 4, 39: 4, 45: 5, 46: 5, 47: 5, 48: 5, 49: 5, 54: 6,
                    55: 6, 56: 6, 57: 6, 58: 6, 59: 6, 63: 7, 64: 7, 65: 7,
                    66: 7, 67: 7, 68: 7, 69: 7, 72: 8, 73: 8, 74: 8, 75: 8,
                    76: 8, 77: 8, 78: 8, 79: 8, 81: 9, 82: 9, 83: 9, 84: 9,
                    85: 9, 86: 9, 87: 9, 88: 9, 89: 9}
        actual = {k: v for v in range(10) for k in range(v * 9, v * 10)}
        self.assertEqual(k, 'Local Variable')
        self.assertEqual(actual, expected)
    
    Data:
    
        @unittest.skipUnless(hasattr(posix, 'pread'), 'test needs posix.pread()')
    def test_pread(self):
        fd = os.open(support.TESTFN, os.O_RDWR | os.O_CREAT)
        try:
            os.write(fd, b'test')
            os.lseek(fd, 0, os.SEEK_SET)
            self.assertEqual(b'es', posix.pread(fd, 2, 1))
            # the first pread() shouldn't disturb the file offset
            self.assertEqual(b'te', posix.read(fd, 2))
        finally:
            os.close(fd)
    
        def _putcmd(self, line):
        if self._debugging: print('*cmd*', repr(line))
        line = bytes(line, self.encoding)
        self._putline(line)
    
             SMTPNotSupportedError  The options parameter includes 'SMTPUTF8'
                                but the SMTPUTF8 extension is not supported by
                                the server.
        '''
        optionlist = ''
        if options and self.does_esmtp:
            if any(x.lower()=='smtputf8' for x in options):
                if self.has_extn('smtputf8'):
                    self.command_encoding = 'utf-8'
                else:
                    raise SMTPNotSupportedError(
                        'SMTPUTF8 not supported by server')
            optionlist = ' ' + ' '.join(options)
        self.putcmd('mail', 'FROM:%s%s' % (quoteaddr(sender), optionlist))
        return self.getreply()
    
        def put(self, item, block=True, timeout=None):
        '''Put an item into the queue.
    
    py_queue = support.import_fresh_module('queue', blocked=['_queue'])
c_queue = support.import_fresh_module('queue', fresh=['_queue'])
need_c_queue = unittest.skipUnless(c_queue, 'No _queue module found')
    
            'plain_html_alternative': (
            (None, 2, 1),
            (),
            (1, 2),
            textwrap.dedent('''\
                To: foo@example.com
                MIME-Version: 1.0
                Content-Type: multipart/alternative; boundary='==='
    
                    if 'f' in abilities:
                    obj.fileno()
                else:
                    self.assertRaises(OSError, obj.fileno)
    
        def CheckFailedOpen(self):
        YOU_CANNOT_OPEN_THIS = '/foo/bar/bla/23534/mydb.db'
        with self.assertRaises(sqlite.OperationalError):
            con = sqlite.connect(YOU_CANNOT_OPEN_THIS)
    
        for data_set, ann_dir in zip(sets, ann_dirs):
        print('Starting %s' % data_set)
        ann_dict = {}
        images = []
        annotations = []
        ann_dir = os.path.join(data_dir, ann_dir)
        for root, _, files in os.walk(ann_dir):
            for filename in files:
                if filename.endswith(ends_in % data_set.split('_')[0]):
                    if len(images) % 50 == 0:
                        print('Processed %s images, %s annotations' % (
                            len(images), len(annotations)))
                    json_ann = json.load(open(os.path.join(root, filename)))
                    image = {}
                    image['id'] = img_id
                    img_id += 1
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    from caffe2.python import utils as c2_py_utils
    
    
def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--json', dest='json_file',
        help='detections json file',
        default='', type=str)
    parser.add_argument(
        '--output-dir', dest='output_dir',
        help='output directory',
        default='/tmp', type=str)
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    args = parser.parse_args()
    return args
    
            print('Empty input')
        assert_equal(insertion_sort.sort([]), [])
    
        # TODO: It would be better if we had unit tests for each
    # method in addition to the following end-to-end test
    def test_end_to_end(self):
        print('Test: Empty stack')
        stack = Stack()
        assert_equal(stack.peek(), None)
        assert_equal(stack.pop(), None)
    
      # Normally the global step update is done inside of `apply_gradients`.
  # However, `AdamWeightDecayOptimizer` doesn't do this. But if you use
  # a different optimizer, you should probably take this line out.
  new_global_step = global_step + 1
  train_op = tf.group(train_op, [global_step.assign(new_global_step)])
  return train_op
    
          for qa in paragraph['qas']:
        qas_id = qa['id']
        question_text = qa['question']
        start_position = None
        end_position = None
        orig_answer_text = None
        is_impossible = False
        if is_training:
    
    flags.DEFINE_string(
    'output_file', None,
    'Output TF example file (or comma-separated list of files).')
    
        Args:
      text: A single token or whitespace separated tokens. This should have
        already been passed through `BasicTokenizer.
    
        self.assertFalse(tokenization._is_control(u'A'))
    self.assertFalse(tokenization._is_control(u' '))
    self.assertFalse(tokenization._is_control(u'\t'))
    self.assertFalse(tokenization._is_control(u'\r'))
    self.assertFalse(tokenization._is_control(u'\U0001F4A9'))
    
        def test_del_msg_failure_with_link(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        link = MagicMock(spec=Link)
        link.del_on_recipient = False
        link.name = 'msg_2'
    
            # When a Bid is found, assert that auth is called
        with patch('r2.lib.authorize.interaction.Bid.one') as one:
            one_mock = MagicMock()
            one.return_value = one_mock
            auth_freebie_transaction(amount, self.user, link, campaign_id)
            self.assertTrue(one_mock.auth.called)
    
    # TODO: test ConfigValue.messages
# TODO: test ConfigValue.baseplate
# TODO: test ConfigValue.json_dict

    
        def _setSessionCookie(self, days_old=0):
        date = dt.datetime.now() - dt.timedelta(days=days_old)
        date_str = date.strftime(COOKIE_TIMESTAMP_FORMAT)
        session_cookie = self._account.make_cookie(date_str)
        c.cookies[g.login_cookie] = Cookie(
            value=session_cookie,
            dirty=False,
        )
    
            self.amqp.assert_event_item(
            {
                'event_type': event_type,
                'event_topic': 'quarantine',
                'payload': {
                    'domain': request.host,
                    'referrer_domain': self.domain_mock(),
                    'verified_email': context.user.email_verified,
                    'user_id': context.user._id,
                    'sr_name': subreddit.name,
                    'referrer_url': request.headers.get(),
                    'user_agent': request.user_agent,
                    'user_agent_parsed': request.parsed_agent.to_dict(),
                    'sr_id': subreddit._id,
                    'user_name': context.user.name,
                    'oauth2_client_id': context.oauth2_client._id,
                    'oauth2_client_app_type': context.oauth2_client.app_type,
                    'oauth2_client_name': context.oauth2_client.name,
                    'geoip_country': context.location,
                    'obfuscated_data': {
                        'client_ip': request.ip,
                        'client_ipv4_24': '1.2.3',
                        'client_ipv4_16': '1.2',
                    }
                }
            }
        )
    
    
class TestLocalResizer(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.provider = NoOpImageResizingProvider()
    
        def test_unclosed_comment(self):
        self.assertFragmentRaises('<!--', SoupSyntaxError)
    
            for i in xrange(1, 4):
            for j in xrange(i):
                tsb.record(str(i), 0, 0.1 * (j + 1))
        self.assertEquals(
            set([('1', '100.0|ms'),
                 ('2', '150.0|ms'),  # (0.1 + 0.2) / 2
                 ('3', '200.0|ms'),  # (0.1 + 0.2 + 0.3) / 3
                ]), set(tsb.flush()))
    
        def test_different_params(self):
        u = UrlParser('http://example.com/')
        u2 = UrlParser('http://example.com/;foo')
        u3 = UrlParser('http://example.com/;bar')
        self.assertNotEquals(u, u2)
        self.assertNotEquals(u2, u3)