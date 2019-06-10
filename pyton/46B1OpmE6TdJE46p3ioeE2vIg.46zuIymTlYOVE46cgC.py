
        
            def _print_response(self, response, opts):
        if opts.headers:
            self._print_headers(response.request.headers, b'>')
            print('>')
            self._print_headers(response.headers, b'<')
        else:
            self._print_bytes(response.body)
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
    
# XXX: move it to w3lib?
_ajax_crawlable_re = re.compile(six.u(r'<meta\s+name=['\']fragment['\']\s+content=['\']!['\']/?>'))
def _has_ajaxcrawlable_meta(text):
    '''
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment'  content='!'/></head><body></body></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment' content='!'></head></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><!--<meta name='fragment'  content='!'/>--></head><body></body></html>')
    False
    >>> _has_ajaxcrawlable_meta('<html></html>')
    False
    '''
    
    # The name for this set of Sphinx documents.  If None, it defaults to
# '<project> v<release> documentation'.
#html_title = None
    
            # Display results overlaid on an image
        show_prediction_labels_on_image(os.path.join('knn_examples/test', image_file), predictions)

    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
        face_found = False
    is_obama = False
    
        # Load a second sample picture and learn how to recognize it.
    biden_image = face_recognition.load_image_file('biden.jpg')
    biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
    # Display the resulting image
pil_image.show()
    
        def _call(self, x):
        ''''''
        o = self.act_fn(tf.matmul(x, self.W) + self.b)
        return o
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    References:
    https://www.tensorflow.org/api_guides/python/array_ops
    keras.backend
'''
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
    
    from datetime import timedelta
from django.db.models import Max
from django.utils import timezone
    
    import logging
    
    import logging