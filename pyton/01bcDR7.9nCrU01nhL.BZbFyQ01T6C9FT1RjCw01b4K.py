
        
            states_t_bxn, outputs_t_bxn = sess.run([states_t, outputs_t],
                                           feed_dict=feed_dict)
    states_nxt = np.transpose(np.squeeze(np.asarray(states_t_bxn)))
    outputs_t_bxn = np.squeeze(np.asarray(outputs_t_bxn))
    r_sxt = np.dot(P_nxn, states_nxt)
    
          else:
        to_fill_in = num_steps - len(example)
        final_x = example + [EOS_INDEX] * to_fill_in
        final_y = final_x[1:] + [EOS_INDEX]
        w[i] = [1] * len(example) + [0] * to_fill_in
    
          for s in xrange(t, FLAGS.sequence_length):
        cum_advantage += missing_list[s] * np.power(gamma,
                                                    (s - t)) * rewards_list[s]
      cum_advantage -= baselines[t]
      # Clip advantages.
      cum_advantage = tf.clip_by_value(cum_advantage, -FLAGS.advantage_clipping,
                                       FLAGS.advantage_clipping)
      advantages.append(missing_list[t] * cum_advantage)
      final_gen_objective += tf.multiply(
          log_probability, missing_list[t] * tf.stop_gradient(cum_advantage))
    
      def decoder_fn(time, cell_state, cell_input, cell_output, context_state):
    '''Decoder function used in the `dynamic_rnn_decoder` for inference.
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
            if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
    
setup(
    name='httpie',
    version=httpie.__version__,
    description=httpie.__doc__.strip(),
    long_description=long_description(),
    url='http://httpie.org/',
    download_url='https://github.com/jakubroztocil/httpie',
    author=httpie.__author__,
    author_email='jakub@roztocil.co',
    license=httpie.__licence__,
    packages=find_packages(),
    entry_points={
        'console_scripts': [
            'http = httpie.__main__:main',
        ],
    },
    extras_require=extras_require,
    install_requires=install_requires,
    tests_require=tests_require,
    cmdclass={'test': PyTest},
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.1',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Environment :: Console',
        'Intended Audience :: Developers',
        'Intended Audience :: System Administrators',
        'License :: OSI Approved :: BSD License',
        'Topic :: Internet :: WWW/HTTP',
        'Topic :: Software Development',
        'Topic :: System :: Networking',
        'Topic :: Terminals',
        'Topic :: Text Processing',
        'Topic :: Utilities'
    ],
)

    
    
def test_auth_plugin_require_auth_false_and_auth_provided(httpbin):
    
        def test_POST_with_data_auto_JSON_headers(self, httpbin):
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
    
filenames = list(rst_filenames())
assert filenames
    
    def acfun_download_by_vid(vid, title, output_dir='.', merge=True, info_only=False, **kwargs):
    '''str, str, str, bool, bool ->None
    
    
def get_file_path(merge, output_dir, title, url):
    mime, ext, size = url_info(url)
    file_name = get_output_filename([], title, ext, output_dir, merge)
    file_path = os.path.join(output_dir, file_name)
    return file_name, file_path
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
                if not info_only:
                try:
                    download_urls([real_url], title, ext, size, output_dir, merge = merge)
                except:
                    pass
    
    from ..common import *
import json