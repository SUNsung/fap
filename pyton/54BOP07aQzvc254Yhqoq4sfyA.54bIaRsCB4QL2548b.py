
        
            for i, NN in enumerate(Nrange):
        print('N = %i (%i out of %i)' % (NN, i + 1, len(Nrange)))
        X = get_data(NN, D, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=min(NN, k),
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    In the second benchmark, we increase the number of dimensions of the
training set, classify a sample and plot the time taken as a function
of the number of dimensions.
'''
import numpy as np
import matplotlib.pyplot as plt
import gc
from datetime import datetime
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    plt.show()

    
    features_samples_ratio = np.array(n_features_range) / n_train
    
    The following plots demonstrate the impact of the number of clusters and
number of samples on various clustering performance evaluation metrics.
    
        (x_train, y_train), _, (sample_weight, _, _) = _get_test_data()
    
    
@keras_test
def test_nested_model_trainability():
    # a Sequential inside a Model
    inner_model = Sequential()
    inner_model.add(Dense(2, input_dim=1))
    
    from keras.models import Sequential
from keras.engine.training import _weighted_masked_objective
from keras.layers import TimeDistributed, Masking, Dense
from keras.utils.test_utils import keras_test
from keras import losses
from keras import backend as K
    
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
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_constant(tensor_shape):
    _runner(initializers.Constant(2), tensor_shape,
            target_mean=2, target_max=2, target_min=2)
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_data=(x_test, y_test))
score = model.evaluate(x_test, y_test, verbose=0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])

    
        def __init__(self, from_user_id, to_user_id, request_status, timestamp):
        self.from_user_id = from_user_id
        self.to_user_id = to_user_id
        self.request_status = request_status
        self.timestamp = timestamp
    
        def take_spot(self, spot):
        self.spots_taken.append(spot)
    
            Emit key value pairs of the form:
    
    
class Transaction(object):
    
            try:
            response = fetch(method, host, url, headers, body)
            if response:
                if response.status > 400:
                    server_type = response.getheader('Server', '')
    
        def getStart(self):
        '''Return the start token or tree.'''
        return None
    
    
            rewrites = self.programs.get(programName)
        if rewrites is None or len(rewrites) == 0:
            # no instructions to execute
            return self.toOriginalString(start, end)
        
        buf = StringIO()
    
            total_count = 0
        translated_count = 0
        with open(fn) as f:
            catalog = read_po(f)
            for msg in catalog:
                total_count += 1
                if is_translated(msg):
                    translated_count += 1
        pct = translated_count / float(total_count) * 100
        click.echo('% -7s % 2d%%' % (
            locale,
            pct,
        ), err=True)
        if pct >= MINIMUM and locale not in rv:
            rv.append(locale)
    with open(catalog_file, 'w') as f:
        json.dump({
            'supported_locales': sorted(rv)
        }, f, indent=2)
        f.write('\n')