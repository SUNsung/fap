
        
        
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
        def __init__(self):
        self.downloaded = 0
        self.total_size = None
        self.resumed_from = 0
        self.time_started = None
        self.time_finished = None
    
    ssl.add_argument(
    '--cert-key',
    default=None,
    type=readable_file_arg,
    help='''
    The private key to use with SSL. Only needed if --cert is given and the
    certificate file does not contain the private key.
    
        def test_cert_file_not_found(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', '/__not_found__',
                 error_exit_ok=True)
        assert r.exit_status == ExitStatus.ERROR
        assert 'No such file or directory' in r.stderr
    
        def __getattr__(self, item):
        return self[item]
    
            if self.args.output_options is None:
            if self.args.verbose:
                self.args.output_options = ''.join(OUTPUT_OPTIONS)
            else:
                self.args.output_options = (
                    OUTPUT_OPTIONS_DEFAULT
                    if self.env.stdout_isatty
                    else OUTPUT_OPTIONS_DEFAULT_STDOUT_REDIRECTED
                )
    
        assert_almost_equal(unweighted_metric * weight, weighted_metric, decimal=decimal)
    
        Optionally loads weights pre-trained
    on ImageNet. Note that when using TensorFlow,
    for best performance you should set
    `image_data_format='channels_last'` in your Keras config
    at ~/.keras/keras.json.
    The model and the weights are compatible with both
    TensorFlow and Theano. The data format
    convention used by the model is the one
    specified in your Keras config file.
    Note that the default input image size for this model is 299x299.
    
        def call(self, inputs):
        return K.repeat(inputs, self.n)
    
    
MOBILENET_LIST = [(applications.MobileNet, 1024),
                  (applications.MobileNetV2, 1280)]
DENSENET_LIST = [(applications.DenseNet121, 1024),
                 (applications.DenseNet169, 1664),
                 (applications.DenseNet201, 1920)]
NASNET_LIST = [(applications.NASNetMobile, 1056),
               (applications.NASNetLarge, 4032)]
    
                    if batch_index == len(batches) - 1:  # Last batch.
                    if do_validation:
                        val_outs = test_loop(model, val_f, val_ins,
                                             batch_size=batch_size,
                                             verbose=0)
                        if not isinstance(val_outs, list):
                            val_outs = [val_outs]
                        # Same labels assumed.
                        for l, o in zip(out_labels, val_outs):
                            epoch_logs['val_' + l] = o
        callbacks.on_epoch_end(epoch, epoch_logs)
        if callback_model.stop_training:
            break
    callbacks.on_train_end()
    return model.history
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        # VAE loss = mse_loss or xent_loss + kl_loss
    if args.mse:
        reconstruction_loss = mse(K.flatten(inputs), K.flatten(outputs))
    else:
        reconstruction_loss = binary_crossentropy(K.flatten(inputs),
                                                  K.flatten(outputs))
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    # If true, `todo` and `todoList` produce output, else they produce nothing.
todo_include_todos = True
    
    # http://docs.readthedocs.org/en/latest/theme.html#how-do-i-use-this-locally-and-on-read-the-docs
# on_rtd is whether we are on readthedocs.org
on_rtd = os.environ.get('READTHEDOCS', None) == 'True'
if not on_rtd:  # only import and set the theme if we're building docs locally
    import sphinx_rtd_theme
    html_theme = 'sphinx_rtd_theme'
    html_theme_path = [sphinx_rtd_theme.get_html_theme_path()]
# otherwise, readthedocs.org uses their theme by default, so no need to specify it
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)