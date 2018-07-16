
@keras_test
def test_gaussiannoise_legacy_interface():
    old_layer = keras.layers.GaussianNoise(sigma=0.5, name='gn')
    new_layer = keras.layers.GaussianNoise(stddev=0.5, name='gn')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
    
def test_serialization():
    all_activations = ['max_norm', 'non_neg',
                       'unit_norm', 'min_max_norm']
    for name in all_activations:
        fn = constraints.get(name)
        ref_fn = getattr(constraints, name)()
        assert fn.__class__ == ref_fn.__class__
        config = constraints.serialize(fn)
        fn = constraints.deserialize(config)
        assert fn.__class__ == ref_fn.__class__
    
        result = f([test_values])[0]
    expected = hard_sigmoid(test_values)
    assert_allclose(result, expected, rtol=1e-05)
    
        toplot = track2[i, ::, ::, 0]
    if i >= 2:
        toplot = shifted_movies[which][i - 1, ::, ::, 0]
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Embedding, LSTM, Bidirectional
from keras.datasets import imdb
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
        print('Transformer performance:')
    print('===========================')
    print('Results are averaged over %s repetition(s).' % opts.n_times)
    print('')
    print('%s | %s | %s' % ('Transformer'.ljust(30),
                            'fit'.center(12),
                            'transform'.center(12)))
    print(31 * '-' + ('|' + '-' * 14) * 2)
    
        Only one feature contains discriminative information, the other features
    contain only noise.
    '''
    X, y = make_blobs(n_samples=n_samples, n_features=1, centers=[[-2], [2]])
    
    
def sqr(x):
    return np.sign(np.cos(x))
    
    '''
=========================================================
The Digit Dataset
=========================================================
    
                if point.name == 'p':
                link = point.find('a')
                if link is not None:
                    link = clean_pdf_link(link.attrs['href'])
                    ext = get_extension(link)
                    print(ext)
                    if not ext in forbidden_extensions:
                        print(shorten_title(point.text) + ' (' + link + ')')
                        try:
                            name = clean_text(point.text.split('[' + ext + ']')[0])
                            fullname = '.'.join((name, ext))
                            if not os.path.exists('/'.join((current_directory, fullname)) ):
                                download_pdf(link, current_directory, '.'.join((name, ext)))
                        except KeyboardInterrupt:
                            try:
                                print('Press Ctrl-C in 1 second to quit')
                                time.sleep(1)
                            except KeyboardInterrupt:
                                print('Cancelling..')
                                break
                        except:
                            failures.append(point.text)
                        
        point = point.next_sibling          
    
    
@gen.engine
def run_tests():
    url = options.url + '/getCaseCount'
    control_ws = yield websocket_connect(url, None)
    num_tests = int((yield control_ws.read_message()))
    logging.info('running %d cases', num_tests)
    msg = yield control_ws.read_message()
    assert msg is None
    
    
def handle_sigchld(sig, frame):
    IOLoop.current().add_callback_from_signal(IOLoop.current().stop)
    
    tmpl = Template('''\
<!doctype html>
<html>
  <head>
    <title>{{ page_title }}</title>
  </head>
  <body>
    <div class='header'>
      <h1>{{ page_title }}</h1>
    </div>
    <ul class='navigation'>
    {% for href, caption in [ \
        ('index.html', 'Index'), \
        ('downloads.html', 'Downloads'), \
        ('products.html', 'Products') \
      ] %}
      <li><a href='{{ href }}'>{{ caption }}</a></li>
    {% end %}
    </ul>
    <div class='table'>
      <table>
      {% for row in table %}
        <tr>
        {% for cell in row %}
          <td>{{ cell }}</td>
        {% end %}
        </tr>
      {% end %}
      </table>
    </div>
  </body>
</html>\
''')
    
    
class S3Application(web.Application):
    '''Implementation of an S3-like storage server based on local files.