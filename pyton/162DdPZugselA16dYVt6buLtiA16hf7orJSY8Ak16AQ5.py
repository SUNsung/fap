
        
        
class ArrayMinLengthValidator(MinLengthValidator):
    message = ngettext_lazy(
        'List contains %(show_value)d item, it should contain no fewer than %(limit_value)d.',
        'List contains %(show_value)d items, it should contain no fewer than %(limit_value)d.',
        'limit_value')
    
        def save(self, must_create=False):
        '''
        Save the current session data to the database. If 'must_create' is
        True, raise a database error if the saving operation doesn't create a
        new entry (as opposed to possibly updating an existing entry).
        '''
        if self.session_key is None:
            return self.create()
        data = self._get_session(no_load=must_create)
        obj = self.create_model_instance(data)
        using = router.db_for_write(self.model, instance=obj)
        try:
            with transaction.atomic(using=using):
                obj.save(force_insert=must_create, force_update=not must_create, using=using)
        except IntegrityError:
            if must_create:
                raise CreateError
            raise
        except DatabaseError:
            if not must_create:
                raise UpdateError
            raise
    
    
def x_robots_tag(func):
    @wraps(func)
    def inner(request, *args, **kwargs):
        response = func(request, *args, **kwargs)
        response['X-Robots-Tag'] = 'noindex, noodp, noarchive'
        return response
    return inner
    
    
def categorical_accuracy(y_true, y_pred):
    return K.cast(K.equal(K.argmax(y_true, axis=-1),
                          K.argmax(y_pred, axis=-1)),
                  K.floatx())
    
    
def test_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        # Test with Sequential API
    model = Sequential([
        layers.Dense(16, input_shape=(x_train.shape[-1],), activation='relu'),
        layers.Dense(8),
        layers.Activation('relu'),
        layers.Dense(num_classes, activation='softmax')
    ])
    model.compile(loss='categorical_crossentropy',
                  optimizer='rmsprop',
                  metrics=['accuracy'])
    model.summary()
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    config = model.get_config()
    model = Sequential.from_config(config)
    
            print('Iteration %s of %s' % (i, n_iter))
    
    
DATASET_GENERATORS = {
    'perturbed_logarithm': generate_perturbed_logarithm_dataset,
    'logistic': generate_logistic_dataset,
    'pathological': generate_pathological_dataset,
}
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
        if dataset_name == 'shuttle':
        dataset = fetch_mldata('shuttle')
        X = dataset.data
        y = dataset.target
        # we remove data with label 4
        # normal data are then those of class 1
        s = (y != 4)
        X = X[s, :]
        y = y[s]
        y = (y != 1).astype(int)
    
                results['MiniBatchKMeans Speed'].append(delta)
            results['MiniBatchKMeans Quality'].append(mbkmeans.inertia_)
    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
        X = get_data(N, DD, dataset)
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
            for n_comp in [np.int(rank/2), rank, rank*2]:
            label = 'rank=%d, n_comp=%d' % (rank, n_comp)
            print(label)
            for pi in power_list:
                U, s, V, _ = svd_timing(X, n_comp, n_iter=pi, n_oversamples=2,
                                        power_iteration_normalizer='LU')
                if enable_spectral_norm:
                    A = U.dot(np.diag(s).dot(V))
                    all_spectral[label].append(norm_diff(X - A, norm=2) /
                                               X_spectral_norm)
                f = scalable_frobenius_norm_discrepancy(X, U, s, V)
                all_frobenius[label].append(f / X_fro_norm)
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
    # Gather data for each version directory, including symlinks
dirs = {}
symlinks = {}
root_listing = json_urlread(ROOT_URL)
for path_details in root_listing:
    name = path_details['name']
    if not (name[:1].isdigit() or name in NAMED_DIRS):
        continue
    if path_details['type'] == 'dir':
        html = urlopen(RAW_FMT % name).read().decode('utf8')
        version_num = VERSION_RE.search(html).group(1)
        pdf_size = get_pdf_size(name)
        dirs[name] = (version_num, pdf_size)
    
    from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.asymmetric import rsa
import josepy as jose
import OpenSSL
    
        yk_streams = {}
    for stream in youku_json['stream']:
        tp = stream['stream_type']
        yk_streams[tp] = [], stream['total_size']
        if stream.get('segs'):
            for seg in stream['segs']:
                yk_streams[tp][0].append(seg['url'])
        else:
            yk_streams[tp] = stream['m3u8'], stream['total_size']
    
    
    def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
        if 'stream_id' in kwargs and kwargs['stream_id']:
            # Extract the stream
            stream_id = kwargs['stream_id']
    
    from .theplatform import theplatform_download_by_pid
    
        if '_text' in dictified['video'][0]['file'][0]:  #link exist
        video_dict['links'] = [i['file'][0]['_text'].strip() for i in dictified['video']]
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    '''
http://www.tudou.com/programs/view/html5embed.action?type=0&amp;code=3LS_URGvl54&amp;lcode=&amp;resourceId=0_06_05_99
'''
tudou_embed_patterns = [ 'tudou\.com[a-zA-Z0-9\/\?=\&\.\;]+code=([a-zA-Z0-9_-]+)\&',
                         'www\.tudou\.com/v/([a-zA-Z0-9_-]+)/[^']*v\.swf'
                       ]
    
    __all__ = ['facebook_download']
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    self._response = self.PostDataToHandler( request_data,
                                             'debug_info',
                                             display_message = False )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        else:
      self._filters = _CompileFilters( config_or_filters )
    
            for match in matches_to_remove:
          vimsupport.RemoveDiagnosticMatch( match )
    
      if current_group:
    group_name_to_group[ current_group.name ] = current_group
  return group_name_to_group
    
    
@contextlib.contextmanager
def MockCurrentColumnAndLineContents( column, line_contents ):
  with patch( 'ycm.vimsupport.CurrentColumn', return_value = column ):
    with patch( 'ycm.vimsupport.CurrentLineContents',
                return_value = line_contents ):
      yield
    
    
def YouCompleteMe_NotifyUserIfServerCrashed_Python2Core_test():
  message = ( 'The ycmd server SHUT DOWN (restart with ':YcmRestartServer'). '
              'YCM core library compiled for Python 2 but loaded in Python 3. '
              'Set the 'g:ycm_server_python_interpreter' option to a Python 2 '
              'interpreter path.' )
  RunNotifyUserIfServerCrashed( {
    'return_code': 5,
    'expected_message': equal_to( message )
  } )
    
        @staticmethod
    def _static_method_1():
        print('executed method 1!')
    
        def delegate(self, requests):
        for request in requests:
            self.handler.handle(request)
    
    '''
http://web.archive.org/web/20120309135549/http://dpip.testingperspective.com/?p=28
    
    
### OUTPUT ###
# Specification
# False
# True
# False

    
        def speak(self):
        return 'woof'
    
    '''
*What is this pattern about?
It decouples the creation of a complex object and its representation,
so that the same process can be reused to build objects from the same
family.
This is useful when you must separate the specification of an object
from its actual representation (generally for abstraction).
    
        sample_queue.put('sam')
    test_object(sample_queue)
    print('Outside func: {}'.format(sample_queue.get()))
    
        def clone(self, **attrs):
        '''Clone a prototype and update inner attributes dictionary'''
        # Python in Practice, Mark Summerfield
        obj = self.__class__()
        obj.__dict__.update(attrs)
        return obj
    
        @abc.abstractmethod
    def contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
            path.append(start)
        if start == end:
            return path
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_path(node, end, path[:])
                if newpath:
                    return newpath