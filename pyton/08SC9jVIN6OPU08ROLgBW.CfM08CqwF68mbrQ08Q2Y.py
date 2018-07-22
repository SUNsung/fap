
        
          def testComponentSpecBuilderFixedFeature(self):
    builder = spec_builder.ComponentSpecBuilder('test')
    builder.set_network_unit('FeedForwardNetwork', hidden_layer_sizes='64,64')
    builder.set_transition_system('shift-only')
    builder.add_fixed_feature(name='words', fml='input.word', embedding_dim=16)
    self.assertSpecEqual(r'''
name: 'test'
fixed_feature { name: 'words' fml: 'input.word' embedding_dim: 16 }
backend { registered_name: 'SyntaxNetComponent' }
component_builder { registered_name: 'DynamicComponentBuilder' }
network_unit { registered_name: 'FeedForwardNetwork'
               parameters { key: 'hidden_layer_sizes' value: '64,64' } }
transition_system { registered_name: 'shift-only' }
        ''', builder.spec)
    
    
@keras_test
def test_class_weight_wrong_classes():
    model = create_sequential_model()
    model.compile(loss=loss, optimizer='rmsprop')
    
            # train once so that the states change
        model.train_on_batch(np.ones((num_samples, timesteps)),
                             np.ones((num_samples, units)))
        out2 = model.predict(np.ones((num_samples, timesteps)))
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
    # try using different optimizers and different optimizer configs
model.compile('adam', 'binary_crossentropy', metrics=['accuracy'])
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=15,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test,
                            batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    import re
from ansible.errors import AnsibleParserError, AnsibleError
    
    
class TerminalModule(TerminalBase):
    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    
class _BenchServer(object):
    
            if infos:
            writeln(' (%s)' % (', '.join(infos),))
        else:
            write('\n')
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
            path = self._schemes[scheme]
        try:
            dhcls = load_object(path)
            dh = dhcls(self._crawler.settings)
        except NotConfigured as ex:
            self._notconfigured[scheme] = str(ex)
            return None
        except Exception as ex:
            logger.error('Loading '%(clspath)s' for scheme '%(scheme)s'',
                         {'clspath': path, 'scheme': scheme},
                         exc_info=True,  extra={'crawler': self._crawler})
            self._notconfigured[scheme] = str(ex)
            return None
        else:
            self._handlers[scheme] = dh
        return self._handlers[scheme]
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
            def process_spider_output(result):
            for method in self.methods['process_spider_output']:
                result = method(response=response, result=result, spider=spider)
                assert _isiterable(result), \
                    'Middleware %s must returns an iterable object, got %s ' % \
                    (fname(method), type(result))
            return result
    
        def _debug_set_cookie(self, response, spider):
        if self.debug:
            cl = [to_native_str(c, errors='replace')
                  for c in response.headers.getlist('Set-Cookie')]
            if cl:
                cookies = '\n'.join('Set-Cookie: {}\n'.format(c) for c in cl)
                msg = 'Received cookies from: {}\n{}'.format(response, cookies)
                logger.debug(msg, extra={'spider': spider})
    
        def process_response(self, request, response, spider):
        if not response.body:
            return response
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
    
def mtv81_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_content(url)
    title = HTMLParser().unescape(
        '|'.join(match1(html, r'<title>(.*?)</title>').split('|')[:-2]))
    
        def test_parts_interning(self):
        P = self.cls
        p = P('/usr/bin/foo')
        q = P('/usr/local/bin')
        # 'usr'
        self.assertIs(p.parts[1], q.parts[1])
        # 'bin'
        self.assertIs(p.parts[2], q.parts[3])
    
            s.register(rd, selectors.EVENT_READ)
        s.unregister(rd)
    
    import dataclasses
import typing
    
    
def contents(package: Package) -> Iterable[str]:
    '''Return an iterable of entries in 'package'.
    
            rows = ['<tr><td bgcolor='#d8bbff'>%s%s %s</td></tr>' %
                ('<big>&nbsp;</big>', link, call)]
        if index is not None:
            i = lnum - index
            for line in lines:
                num = small('&nbsp;' * (5-len(str(i))) + str(i)) + '&nbsp;'
                if i in highlight:
                    line = '<tt>=&gt;%s%s</tt>' % (num, pydoc.html.preformat(line))
                    rows.append('<tr><td bgcolor='#ffccee'>%s</td></tr>' % line)
                else:
                    line = '<tt>&nbsp;&nbsp;%s%s</tt>' % (num, pydoc.html.preformat(line))
                    rows.append('<tr><td>%s</td></tr>' % grey(line))
                i += 1