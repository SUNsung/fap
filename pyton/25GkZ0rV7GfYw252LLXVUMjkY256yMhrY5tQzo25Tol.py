
        
            def process_body(self, chunk):
        if not isinstance(chunk, str):
            # Text when a converter has been used,
            # otherwise it will always be bytes.
            chunk = chunk.decode(self.msg.encoding, 'replace')
        chunk = self.formatting.format_body(content=chunk, mime=self.mime)
        return chunk.encode(self.output_encoding, 'replace')
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def test_unicode_form_item(httpbin):
    r = http('--form', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['form'] == {'test': UNICODE}
    
        http://docs.python-requests.org/en/latest/user/advanced/#transport-adapters
    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
    
def import_state_tuples(state_tuples, name, num_replicas):
  restored = []
  for i in range(len(state_tuples) * num_replicas):
    c = tf.get_collection_ref(name)[2 * i + 0]
    h = tf.get_collection_ref(name)[2 * i + 1]
    restored.append(tf.contrib.rnn.LSTMStateTuple(c, h))
  return tuple(restored)
    
        # Compute predictions.
    predicted_classes = tf.argmax(logits, 1)
    if mode == tf.estimator.ModeKeys.PREDICT:
        predictions = {
            'class_ids': predicted_classes[:, tf.newaxis],
            'probabilities': tf.nn.softmax(logits),
            'logits': logits,
        }
        return tf.estimator.EstimatorSpec(mode, predictions=predictions)
    
        # Batch the examples
    assert batch_size is not None, 'batch_size must not be None'
    dataset = dataset.batch(batch_size)
    
    This program creates a graph from a saved GraphDef protocol buffer,
and runs inference on an input JPEG image. It outputs human readable
strings of the top 5 predictions along with their probabilities.
    
          # Get a batch and make a step.
      start_time = time.time()
      encoder_inputs, decoder_inputs, target_weights = model.get_batch(
          train_set, bucket_id)
      _, step_loss, _ = model.step(sess, encoder_inputs, decoder_inputs,
                                   target_weights, bucket_id, False)
      step_time += (time.time() - start_time) / FLAGS.steps_per_checkpoint
      loss += step_loss / FLAGS.steps_per_checkpoint
      current_step += 1
    
    # Regular expressions used to tokenize.
_WORD_SPLIT = re.compile(b'([.,!?\'':;)(])')
_DIGIT_RE = re.compile(br'\d')
    
    Forward-backward pass:
Run on Tesla K40c: 480 +/- 48 ms / batch
Run on Titan X:    244 +/- 30 ms / batch
'''
from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
    from __future__ import print_function
import numpy as np
    
        dense_layer_sizes: List of layer sizes.
        This list has one number for each layer
    filters: Number of convolutional filters in each convolutional layer
    kernel_size: Convolutional kernel size
    pool_size: Size of pooling area for max pooling
    '''
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_one(tensor_shape):
    _runner(initializers.ones(), tensor_shape,
            target_mean=1., target_max=1.)
    
    
@keras_test
def test_convert_weights():
    def get_model(shape, data_format):
        model = Sequential()
        model.add(Conv2D(filters=2,
                         kernel_size=(4, 3),
                         input_shape=shape,
                         data_format=data_format))
        model.add(Flatten())
        model.add(Dense(5))
        return model
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
            #out = subprocess.check_output(cmd, startupinfo=startupinfo)
        process = subprocess.Popen(cmd, stdout=subprocess.PIPE, startupinfo=startupinfo)
        out, unused_err = process.communicate()
        retcode = process.poll()
        if retcode:
            return out + '\n retcode:%s\n unused_err:%s\n' % (retcode, unused_err)
    except Exception as e:
        out = 'Exception:%r' % e
    
        def __init__(self):
        self.reset_appid()
    
                https_manager.save_ssl_connection_for_reuse(response.ssl_sock, host)
            response.close()
            xlog.info('DIRECT chucked t:%d s:%d %d %s %s', (time.time()-time_request)*1000, length, response.status, host, url)
            return
    
            if self.input is None:
            return None
        
        return self.input.substring(self.start, self.stop)
    
            # larger second argument
        self.assertEqual(round(-150, -2), -200)
        self.assertEqual(round(-149, -2), -100)
        self.assertEqual(round(-51, -2), -100)
        self.assertEqual(round(-50, -2), 0)
        self.assertEqual(round(-49, -2), 0)
        self.assertEqual(round(-1, -2), 0)
        self.assertEqual(round(0, -2), 0)
        self.assertEqual(round(1, -2), 0)
        self.assertEqual(round(49, -2), 0)
        self.assertEqual(round(50, -2), 0)
        self.assertEqual(round(51, -2), 100)
        self.assertEqual(round(149, -2), 100)
        self.assertEqual(round(150, -2), 200)
        self.assertEqual(round(250, -2), 200)
        self.assertEqual(round(251, -2), 300)
        self.assertEqual(round(172500, -3), 172000)
        self.assertEqual(round(173500, -3), 174000)
        self.assertEqual(round(31415926535, -1), 31415926540)
        self.assertEqual(round(31415926535, -2), 31415926500)
        self.assertEqual(round(31415926535, -3), 31415927000)
        self.assertEqual(round(31415926535, -4), 31415930000)
        self.assertEqual(round(31415926535, -5), 31415900000)
        self.assertEqual(round(31415926535, -6), 31416000000)
        self.assertEqual(round(31415926535, -7), 31420000000)
        self.assertEqual(round(31415926535, -8), 31400000000)
        self.assertEqual(round(31415926535, -9), 31000000000)
        self.assertEqual(round(31415926535, -10), 30000000000)
        self.assertEqual(round(31415926535, -11), 0)
        self.assertEqual(round(31415926535, -12), 0)
        self.assertEqual(round(31415926535, -999), 0)
    
        def test_create_widgets(self):
        self.dialog.create_entries = Func()
        self.dialog.create_option_buttons = Func()
        self.dialog.create_other_buttons = Func()
        self.dialog.create_command_buttons = Func()
    
        def entry_ok(self):
        'Return sensible ConfigParser section name or None.'
        self.entry_error['text'] = ''
        name = self.entry.get().strip()
        if not name:
            self.showerror('no name specified.')
            return None
        elif len(name)>30:
            self.showerror('name is longer than 30 characters.')
            return None
        elif name in self.used_names:
            self.showerror('name is already in use.')
            return None
        return name
    
        def test_empty(self):
        r = range(0)
        self.assertNotIn(0, r)
        self.assertNotIn(1, r)
    
    _STATE_TO_DESCRIPTION_MAP = {
    PENDING: 'pending',
    RUNNING: 'running',
    CANCELLED: 'cancelled',
    CANCELLED_AND_NOTIFIED: 'cancelled',
    FINISHED: 'finished'
}
    
    import sys, os
    
    def is_prime(n):
    if n % 2 == 0:
        return False
    
        def test_pending_calls_race(self):
        # Issue #14406: multi-threaded race condition when waiting on all
        # futures.
        event = threading.Event()
        def future_func():
            event.wait()
        oldswitchinterval = sys.getcheckinterval()
        sys.setcheckinterval(1)
        try:
            fs = set(self.executor.submit(future_func) for i in range(100))
            event.set()
            futures.wait(fs, return_when=futures.ALL_COMPLETED)
        finally:
            sys.setcheckinterval(oldswitchinterval)
    
      with patch( 'ycm.client.event_notification.EventNotification.'
              'PostDataToHandlerAsync' ) as post_data_to_handler_async:
    with CurrentWorkingDirectory( unicode_dir ):
      with MockVimBuffers( [ current_buffer ], current_buffer, ( 1, 5 ) ):
        ycm.OnFileReadyToParse()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def main():
    options = parse_args(sys.argv[1:])
    if options.report == 'regression':
        command = regression_report
    elif options.report == 'junit':
        command = junit_report
    elif options.report == 'report':
        command = human_report
    assert_tools_available()
    sys.exit(command(options))
    
        if setup_globals:
        g.setup_complete()
    
        def current_subdomain(self):
        return self.stacked_proxy_safe_get(c, 'subdomain')
    
        from pylons import tmpl_context as c
    
        @validate(VAdmin(),
              award = VAwardByCodename('awardcn'),
              recipient = nop('recipient'),
              desc = nop('desc'),
              url = nop('url'),
              hours = nop('hours'))
    def GET_give(self, award, recipient, desc, url, hours):
        if award is None:
            abort(404, 'page not found')
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
        def test_car_shall_make_loud_noise(self):
        noise = self.car.make_noise(1)
        expected_noise = 'vroom!'
        self.assertEqual(noise, expected_noise)
    
        def test_parrot_eng_localization(self):
        self.assertEqual(self.e.get('parrot'), 'parrot')
    
        def update(self, subject):
        print(u'HexViewer: Subject %s has data 0x%x' %
              (subject.name, subject.data))