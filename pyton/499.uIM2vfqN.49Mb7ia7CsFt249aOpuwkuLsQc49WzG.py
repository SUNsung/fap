
        
                return {
            'id': video_id,
            'url': video_url,
            'ext': 'mp4',
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'categories': categories,
            'duration': duration,
            'view_count': view_count,
            'age_limit': 18,
        }

    
                return {
                'id': video_id,
                'title': json_data['title'],
                'description': json_data.get('subtitle'),
                'thumbnail': json_data.get('thumbnail_image', {}).get('file'),
                'timestamp': parse_iso8601(json_data.get('publication_date')),
                'duration': int_or_none(json_data.get('duration')),
                'view_count': int_or_none(json_data.get('view_count')),
                'formats': formats,
            }

    
            # Audiomack wraps a lot of soundcloud tracks in their branded wrapper
        # if so, pass the work off to the soundcloud extractor
        if SoundcloudIE.suitable(api_response['url']):
            return {'_type': 'url', 'url': api_response['url'], 'ie_key': 'Soundcloud'}
    
            webpage = self._download_webpage(url, display_id)
    
        # second blueprint instance
    r = client.get('/pages/hello')
    assert r.status_code == 200
    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
    import pytest
    
      def setUp(self):
    FLAGS.train_data = os.path.join(self.get_temp_dir() + 'test-text.txt')
    FLAGS.eval_data = os.path.join(self.get_temp_dir() + 'eval-text.txt')
    FLAGS.save_path = self.get_temp_dir()
    with open(FLAGS.train_data, 'w') as f:
      f.write(
          '''alice was beginning to get very tired of sitting by her sister on
          the bank, and of having nothing to do: once or twice she had peeped
          into the book her sister was reading, but it had no pictures or
          conversations in it, 'and what is the use of a book,' thought alice
          'without pictures or conversations?' So she was considering in her own
          mind (as well as she could, for the hot day made her feel very sleepy
          and stupid), whether the pleasure of making a daisy-chain would be
          worth the trouble of getting up and picking the daisies, when suddenly
          a White rabbit with pink eyes ran close by her.\n''')
      with open(FLAGS.eval_data, 'w') as f:
        f.write('alice she rabbit once\n')
    
      def _record(self, label, red, green, blue):
    image_size = 32 * 32
    record = bytes(bytearray([label] + [red] * image_size +
                             [green] * image_size + [blue] * image_size))
    expected = [[[red, green, blue]] * 32] * 32
    return record, expected
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    import argparse
import tensorflow as tf
    
    if __name__ == '__main__':
  tf.test.main()

    
    CSV_COLUMN_NAMES = ['SepalLength', 'SepalWidth',
                    'PetalLength', 'PetalWidth', 'Species']
SPECIES = ['Sentosa', 'Versicolor', 'Virginica']
    
        predictions = classifier.predict(
        input_fn=lambda:iris_data.eval_input_fn(predict_x,
                                                labels=None,
                                                batch_size=args.batch_size))
    
    # The CSV features in our training & test data
feature_names = [
    'SepalLength',
    'SepalWidth',
    'PetalLength',
    'PetalWidth']
    
      # conv4
  with tf.name_scope('conv4') as scope:
    kernel = tf.Variable(tf.truncated_normal([3, 3, 384, 256],
                                             dtype=tf.float32,
                                             stddev=1e-1), name='weights')
    conv = tf.nn.conv2d(conv3, kernel, [1, 1, 1, 1], padding='SAME')
    biases = tf.Variable(tf.constant(0.0, shape=[256], dtype=tf.float32),
                         trainable=True, name='biases')
    bias = tf.nn.bias_add(conv, biases)
    conv4 = tf.nn.relu(bias, name=scope)
    parameters += [kernel, biases]
    print_activations(conv4)
    
        ordered_state = collections.OrderedDict(
        sorted(state.items(), key=lambda t: t[0]))
    # For class instance without __repr__, some special cares are required.
    # Otherwise, the object address will be used.
    if '_cluster_spec' in ordered_state:
      ordered_state['_cluster_spec'] = collections.OrderedDict(
         sorted(ordered_state['_cluster_spec'].as_dict().items(),
                key=lambda t: t[0])
      )
    return ', '.join(
        '%s=%r' % (k, v) for (k, v) in six.iteritems(ordered_state)) 
    
        READY = 0
    IN_PROGRESS = 1
    COMPLETE = 2
    
        def __init__(self, cards):
        self.cards = cards
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
        if address_family == socket.AF_INET:
        return ctypes.string_at(addr.ipv4_addr, 4)
    if address_family == socket.AF_INET6:
        return ctypes.string_at(addr.ipv6_addr, 16)
    
            Python does not have any size restrictions, but the compilation of
        such large source files seems to be pretty memory hungry. The memory
        consumption of the python process grew to >1.5GB when importing a
        15MB lexer, eating all my swap space and I was to impacient to see,
        if it could finish at all. With packed initializers that are unpacked
        at import time of the lexer module, everything works like a charm.
        
        '''
        
        ret = []
        for i in range(len(string) / 2):
            (n, v) = ord(string[i*2]), ord(string[i*2+1])
    
        Note that as of Java 1.4, you can access the stack trace, which means
    that you can compute the complete trace of rules from the start symbol.
    This gives you considerable context information with which to generate
    useful error messages.
    
        # Convert n to a 'floating-point' number q * 2**shift, where q is an
    # integer with 'PRECISION' significant bits.  When shifting n to create q,
    # the least significant bit of q is treated as 'sticky'.  That is, the
    # least significant bit of q is set if either the corresponding bit of n
    # was already set, or any one of the bits of n lost in the shift was set.
    shift = n.bit_length() - PRECISION
    q = n << -shift if shift < 0 else (n >> shift) | bool(n & ~(-1 << shift))
    
        For this base class, accept any non-blank string.
    '''
    def __init__(self, parent, title, message, *, text0='', used_names={},
                 _htest=False, _utest=False):
        '''Create popup, do not return until tk widget destroyed.
    
        def test_special_attrs(self):
        # 'expires'
        C = cookies.SimpleCookie('Customer='WILE_E_COYOTE'')
        C['Customer']['expires'] = 0
        # can't test exact output, it always depends on current date/time
        self.assertTrue(C.output().endswith('GMT'))
    
    # Usage: ../../../python bench.py
    
            self.assertAlmostEqual(complex('1+10j'), 1+10j)
        self.assertAlmostEqual(complex(10), 10+0j)
        self.assertAlmostEqual(complex(10.0), 10+0j)
        self.assertAlmostEqual(complex(10), 10+0j)
        self.assertAlmostEqual(complex(10+0j), 10+0j)
        self.assertAlmostEqual(complex(1,10), 1+10j)
        self.assertAlmostEqual(complex(1,10), 1+10j)
        self.assertAlmostEqual(complex(1,10.0), 1+10j)
        self.assertAlmostEqual(complex(1,10), 1+10j)
        self.assertAlmostEqual(complex(1,10), 1+10j)
        self.assertAlmostEqual(complex(1,10.0), 1+10j)
        self.assertAlmostEqual(complex(1.0,10), 1+10j)
        self.assertAlmostEqual(complex(1.0,10), 1+10j)
        self.assertAlmostEqual(complex(1.0,10.0), 1+10j)
        self.assertAlmostEqual(complex(3.14+0j), 3.14+0j)
        self.assertAlmostEqual(complex(3.14), 3.14+0j)
        self.assertAlmostEqual(complex(314), 314.0+0j)
        self.assertAlmostEqual(complex(314), 314.0+0j)
        self.assertAlmostEqual(complex(3.14+0j, 0j), 3.14+0j)
        self.assertAlmostEqual(complex(3.14, 0.0), 3.14+0j)
        self.assertAlmostEqual(complex(314, 0), 314.0+0j)
        self.assertAlmostEqual(complex(314, 0), 314.0+0j)
        self.assertAlmostEqual(complex(0j, 3.14j), -3.14+0j)
        self.assertAlmostEqual(complex(0.0, 3.14j), -3.14+0j)
        self.assertAlmostEqual(complex(0j, 3.14), 3.14j)
        self.assertAlmostEqual(complex(0.0, 3.14), 3.14j)
        self.assertAlmostEqual(complex('1'), 1+0j)
        self.assertAlmostEqual(complex('1j'), 1j)
        self.assertAlmostEqual(complex(),  0)
        self.assertAlmostEqual(complex('-1'), -1)
        self.assertAlmostEqual(complex('+1'), +1)
        self.assertAlmostEqual(complex('(1+2j)'), 1+2j)
        self.assertAlmostEqual(complex('(1.3+2.2j)'), 1.3+2.2j)
        self.assertAlmostEqual(complex('3.14+1J'), 3.14+1j)
        self.assertAlmostEqual(complex(' ( +3.14-6J )'), 3.14-6j)
        self.assertAlmostEqual(complex(' ( +3.14-J )'), 3.14-1j)
        self.assertAlmostEqual(complex(' ( +3.14+j )'), 3.14+1j)
        self.assertAlmostEqual(complex('J'), 1j)
        self.assertAlmostEqual(complex('( j )'), 1j)
        self.assertAlmostEqual(complex('+J'), 1j)
        self.assertAlmostEqual(complex('( -j)'), -1j)
        self.assertAlmostEqual(complex('1e-500'), 0.0 + 0.0j)
        self.assertAlmostEqual(complex('-1e-500j'), 0.0 - 0.0j)
        self.assertAlmostEqual(complex('-1e-500+1e-500j'), -0.0 + 0.0j)
    
            # User-defined class with an __index__ method
        class I:
            def __init__(self, n):
                self.n = int(n)
            def __index__(self):
                return self.n
        self.assertEqual(list(range(I(bignum), I(bignum + 1))), [bignum])
        self.assertEqual(list(range(I(smallnum), I(smallnum + 1))), [smallnum])