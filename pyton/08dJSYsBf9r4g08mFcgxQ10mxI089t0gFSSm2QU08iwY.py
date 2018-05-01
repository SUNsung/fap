
        
            # Then we call the sorting method
    sort_blocks()
    
    Available hooks:
    
                return self.server_sock.accept()[0]
        except (select.error, socket.error):
            return None
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
    
class HTTPDigestAuth(AuthBase):
    '''Attaches HTTP Digest Authentication to the given Request object.'''
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
            post1 = requests.post(url, data={'some': 'data'})
        assert post1.status_code == 200
    
            if args.test_results:
            path = os.path.join(output_dir, '%s/test.json' % job_number)
            url = 'https://api.shippable.com/jobs/%s/jobTestReports' % job_id
            download(args, headers, path, url)
            extract_contents(args, path, os.path.join(output_dir, '%s/test' % job_number))
    
            return ret
    
        preds = reg.predict(X_test, batch_size=batch_size)
    assert preds.shape == (num_test, )
    
        # by setting the `trainable` argument, in Sequential
    model = Sequential()
    layer = Dense(2, input_dim=1)
    model.add(layer)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
        # concatenation
    merged_concat = legacy_layers.merge([rnn_a, rnn_b], mode='concat', concat_axis=-1)
    model = models.Model([input_a, input_b], [merged_concat])
    model.compile(loss='mse', optimizer='sgd')
    model.fit([rand(2, 3), rand(2, 3)], [rand(2, 3, 6)])
    
        yaml_str = model.to_yaml()
    model_from_yaml(yaml_str)
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=4,
          validation_data=[x_test, y_test])

    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    from mrjob.job import MRJob
    
    def get_api_subtype():
    if is_api() and c.render_style.startswith('api-'):
        return c.render_style[4:]
    
        def live_config(self, name):
        live = self.stacked_proxy_safe_get(g, 'live_config', {})
        return live.get(name)
    
    api('flairlist', FlairListJsonTemplate)
api('flaircsv', FlairCsvJsonTemplate)
api('flairselector', FlairSelectorJsonTemplate)
    
                    errpage = pages.InterstitialPage(
                    _('suspended'),
                    content=pages.InTimeoutInterstitial(
                        timeout_days_remaining=timeout_days_remaining,
                    ),
                )
                request.environ['usable_error_content'] = errpage.render()
    
            c.allow_framing = True
    
    import pylibmc
from pylons import request, response
from pylons import app_globals as g
from pylons.controllers.util import abort