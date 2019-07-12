
        
        
def plot_lfads(train_bxtxd, train_model_vals,
               train_ext_input_bxtxi=None, train_truth_bxtxd=None,
               valid_bxtxd=None, valid_model_vals=None,
               valid_ext_input_bxtxi=None, valid_truth_bxtxd=None,
               bidx=None, cf=1.0, output_dist='poisson'):
    
    # This flag is used for an experiment where one sees if training a model with
# many days data can be used to learn the dynamics from a held-out days data.
# If you don't care about that particular experiment, this flag should always be
# false.
flags.DEFINE_boolean('do_train_io_only', DO_TRAIN_IO_ONLY,
                     'Train only the input (readin) and output (readout) \
                     affine functions.')
    
    import os
import h5py
import numpy as np
from six.moves import xrange
    
      def assign_probs(self, sentences, test_data_name='wsc273'):
    '''Return prediction accuracy using this LM for a test.'''
    
      Returns:
    predictions:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.discriminator_model == 'cnn':
    predictions = cnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'fnn':
    predictions = feedforward.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn':
    predictions = rnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional':
    predictions = bidirectional.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional_zaremba':
    predictions = bidirectional_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'seq2seq_vd':
    predictions = seq2seq_vd.discriminator(
        hparams,
        inputs,
        present,
        sequence,
        is_training=is_training,
        reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_zaremba':
    predictions = rnn_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_nas':
    predictions = rnn_nas.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_vd':
    predictions = rnn_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  elif FLAGS.discriminator_model == 'bidirectional_vd':
    predictions = bidirectional_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  else:
    raise NotImplementedError
  return predictions
    
    '''We calculate n-Grams from the training text. We will use this as an
evaluation metric.'''
    
        >>> extract_array(pd.Series([1, 2, 3]))
    <PandasArray>
    [1, 2, 3]
    Length: 3, dtype: int64
    
    
def test_iloc_nonunique():
    s = Series([0, 1, 2], index=[0, 1, 0])
    assert s.iloc[2] == 2

    
        def get_allowed_errors(self):
        return super(GzipHTTPTest, self).get_allowed_errors() + [
            # TODO: The Etag is supposed to change when Content-Encoding is
            # used.  This should be fixed, but it's difficult to do with the
            # way GZipContentEncoding fits into the pipeline, and in practice
            # it doesn't seem likely to cause any problems as long as we're
            # using the correct Vary header.
            rs.VARY_ETAG_DOESNT_CHANGE,
        ]
    
    from tornado.options import options, define, parse_command_line
from tornado.template import Template
    
    _watched_files = set()
_reload_hooks = []
_reload_attempted = False
_io_loops = weakref.WeakKeyDictionary()  # type: ignore
_autoreload_is_main = False
_original_argv = None  # type: Optional[List[str]]
_original_spec = None
    
    linkify_tests = [
    # (input, linkify_kwargs, expected_output)
    (
        'hello http://world.com/!',
        {},
        u'hello <a href='http://world.com/'>http://world.com/</a>!',
    ),
    (
        'hello http://world.com/with?param=true&stuff=yes',
        {},
        u'hello <a href='http://world.com/with?param=true&amp;stuff=yes'>http://world.com/with?param=true&amp;stuff=yes</a>',  # noqa: E501
    ),
    # an opened paren followed by many chars killed Gruber's regex
    (
        'http://url.com/w(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa',
        {},
        u'<a href='http://url.com/w'>http://url.com/w</a>(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa',  # noqa: E501
    ),
    # as did too many dots at the end
    (
        'http://url.com/withmany.......................................',
        {},
        u'<a href='http://url.com/withmany'>http://url.com/withmany</a>.......................................',  # noqa: E501
    ),
    (
        'http://url.com/withmany((((((((((((((((((((((((((((((((((a)',
        {},
        u'<a href='http://url.com/withmany'>http://url.com/withmany</a>((((((((((((((((((((((((((((((((((a)',  # noqa: E501
    ),
    # some examples from http://daringfireball.net/2009/11/liberal_regex_for_matching_urls
    # plus a fex extras (such as multiple parentheses).
    (
        'http://foo.com/blah_blah',
        {},
        u'<a href='http://foo.com/blah_blah'>http://foo.com/blah_blah</a>',
    ),
    (
        'http://foo.com/blah_blah/',
        {},
        u'<a href='http://foo.com/blah_blah/'>http://foo.com/blah_blah/</a>',
    ),
    (
        '(Something like http://foo.com/blah_blah)',
        {},
        u'(Something like <a href='http://foo.com/blah_blah'>http://foo.com/blah_blah</a>)',
    ),
    (
        'http://foo.com/blah_blah_(wikipedia)',
        {},
        u'<a href='http://foo.com/blah_blah_(wikipedia)'>http://foo.com/blah_blah_(wikipedia)</a>',
    ),
    (
        'http://foo.com/blah_(blah)_(wikipedia)_blah',
        {},
        u'<a href='http://foo.com/blah_(blah)_(wikipedia)_blah'>http://foo.com/blah_(blah)_(wikipedia)_blah</a>',  # noqa: E501
    ),
    (
        '(Something like http://foo.com/blah_blah_(wikipedia))',
        {},
        u'(Something like <a href='http://foo.com/blah_blah_(wikipedia)'>http://foo.com/blah_blah_(wikipedia)</a>)',  # noqa: E501
    ),
    (
        'http://foo.com/blah_blah.',
        {},
        u'<a href='http://foo.com/blah_blah'>http://foo.com/blah_blah</a>.',
    ),
    (
        'http://foo.com/blah_blah/.',
        {},
        u'<a href='http://foo.com/blah_blah/'>http://foo.com/blah_blah/</a>.',
    ),
    (
        '<http://foo.com/blah_blah>',
        {},
        u'&lt;<a href='http://foo.com/blah_blah'>http://foo.com/blah_blah</a>&gt;',
    ),
    (
        '<http://foo.com/blah_blah/>',
        {},
        u'&lt;<a href='http://foo.com/blah_blah/'>http://foo.com/blah_blah/</a>&gt;',
    ),
    (
        'http://foo.com/blah_blah,',
        {},
        u'<a href='http://foo.com/blah_blah'>http://foo.com/blah_blah</a>,',
    ),
    (
        'http://www.example.com/wpstyle/?p=364.',
        {},
        u'<a href='http://www.example.com/wpstyle/?p=364'>http://www.example.com/wpstyle/?p=364</a>.',  # noqa: E501
    ),
    (
        'rdar://1234',
        {'permitted_protocols': ['http', 'rdar']},
        u'<a href='rdar://1234'>rdar://1234</a>',
    ),
    (
        'rdar:/1234',
        {'permitted_protocols': ['rdar']},
        u'<a href='rdar:/1234'>rdar:/1234</a>',
    ),
    (
        'http://userid:password@example.com:8080',
        {},
        u'<a href='http://userid:password@example.com:8080'>http://userid:password@example.com:8080</a>',  # noqa: E501
    ),
    (
        'http://userid@example.com',
        {},
        u'<a href='http://userid@example.com'>http://userid@example.com</a>',
    ),
    (
        'http://userid@example.com:8080',
        {},
        u'<a href='http://userid@example.com:8080'>http://userid@example.com:8080</a>',
    ),
    (
        'http://userid:password@example.com',
        {},
        u'<a href='http://userid:password@example.com'>http://userid:password@example.com</a>',
    ),
    (
        'message://%3c330e7f8409726r6a4ba78dkf1fd71420c1bf6ff@mail.gmail.com%3e',
        {'permitted_protocols': ['http', 'message']},
        u'<a href='message://%3c330e7f8409726r6a4ba78dkf1fd71420c1bf6ff@mail.gmail.com%3e'>'
        u'message://%3c330e7f8409726r6a4ba78dkf1fd71420c1bf6ff@mail.gmail.com%3e</a>',
    ),
    (
        u'http://\u27a1.ws/\u4a39',
        {},
        u'<a href='http://\u27a1.ws/\u4a39'>http://\u27a1.ws/\u4a39</a>',
    ),
    (
        '<tag>http://example.com</tag>',
        {},
        u'&lt;tag&gt;<a href='http://example.com'>http://example.com</a>&lt;/tag&gt;',
    ),
    (
        'Just a www.example.com link.',
        {},
        u'Just a <a href='http://www.example.com'>www.example.com</a> link.',
    ),
    (
        'Just a www.example.com link.',
        {'require_protocol': True},
        u'Just a www.example.com link.',
    ),
    (
        'A http://reallylong.com/link/that/exceedsthelenglimit.html',
        {'require_protocol': True, 'shorten': True},
        u'A <a href='http://reallylong.com/link/that/exceedsthelenglimit.html''
        u' title='http://reallylong.com/link/that/exceedsthelenglimit.html'>http://reallylong.com/link...</a>',  # noqa: E501
    ),
    (
        'A http://reallylongdomainnamethatwillbetoolong.com/hi!',
        {'shorten': True},
        u'A <a href='http://reallylongdomainnamethatwillbetoolong.com/hi''
        u' title='http://reallylongdomainnamethatwillbetoolong.com/hi'>http://reallylongdomainnametha...</a>!',  # noqa: E501
    ),
    (
        'A file:///passwords.txt and http://web.com link',
        {},
        u'A file:///passwords.txt and <a href='http://web.com'>http://web.com</a> link',
    ),
    (
        'A file:///passwords.txt and http://web.com link',
        {'permitted_protocols': ['file']},
        u'A <a href='file:///passwords.txt'>file:///passwords.txt</a> and http://web.com link',
    ),
    (
        'www.external-link.com',
        {'extra_params': 'rel='nofollow' class='external''},
        u'<a href='http://www.external-link.com' rel='nofollow' class='external'>www.external-link.com</a>',  # noqa: E501
    ),
    (
        'www.external-link.com and www.internal-link.com/blogs extra',
        {
            'extra_params': lambda href: 'class='internal''
            if href.startswith('http://www.internal-link.com')
            else 'rel='nofollow' class='external''
        },
        u'<a href='http://www.external-link.com' rel='nofollow' class='external'>www.external-link.com</a>'  # noqa: E501
        u' and <a href='http://www.internal-link.com/blogs' class='internal'>www.internal-link.com/blogs</a> extra',  # noqa: E501
    ),
    (
        'www.external-link.com',
        {'extra_params': lambda href: '    rel='nofollow' class='external'  '},
        u'<a href='http://www.external-link.com' rel='nofollow' class='external'>www.external-link.com</a>',  # noqa: E501
    ),
]  # type: List[Tuple[Union[str, bytes], Dict[str, Any], str]]
    
        @gen_test
    def test_http10_no_content_length(self):
        # Regression test for a bug in which can_keep_alive would crash
        # for an HTTP/1.0 (not 1.1) response with no content-length.
        conn = HTTP1Connection(self.client_stream, True)
        self.server_stream.write(b'HTTP/1.0 200 Not Modified\r\n\r\nhello')
        self.server_stream.close()