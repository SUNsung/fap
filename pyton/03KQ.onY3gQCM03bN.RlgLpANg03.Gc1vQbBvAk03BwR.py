
        
            def deal_card(self):
        try:
            card = self.cards[self.deal_index]
            card.is_available = False
            self.deal_index += 1
        except IndexError:
            return None
        return card
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        # Arguments
        label_mode: one of 'fine', 'coarse'.
    
    # Model creation using tensors from the get_next() graph node.
inputs, targets = iterator.get_next()
model_input = layers.Input(tensor=inputs)
model_output = cnn_layers(model_input)
train_model = keras.models.Model(inputs=model_input, outputs=model_output)
    
    Get to 99.8% test accuracy after 5 epochs
for the first five digits classifier
and 99.2% for the last five digits after transfer + fine-tuning.
'''
    
        # Raises
        ValueError if unknown identifier.
    '''
    if identifier is None:
        return None
    if isinstance(identifier, six.string_types):
        identifier = str(identifier)
        return deserialize(identifier)
    if isinstance(identifier, dict):
        return deserialize(identifier)
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret '
                         'loss function identifier:', identifier)

    
        scikit_results = []
    glmnet_results = []
    n = 20
    step = 500
    n_features = 1000
    n_informative = n_features / 10
    n_test_samples = 1000
    for i in range(1, n + 1):
        print('==================')
        print('Iteration %s of %s' % (i, n))
        print('==================')
    
    
# Initialize random generator
np.random.seed(0)
    
    for name, label in [('Setosa', 0),
                    ('Versicolour', 1),
                    ('Virginica', 2)]:
    ax.text3D(X[y == label, 3].mean(),
              X[y == label, 0].mean(),
              X[y == label, 2].mean() + 2, name,
              horizontalalignment='center',
              bbox=dict(alpha=.2, edgecolor='w', facecolor='w'))
# Reorder the labels to have colors matching the cluster results
y = np.choose(y, [1, 2, 0]).astype(np.float)
ax.scatter(X[:, 3], X[:, 0], X[:, 2], c=y, edgecolor='k')
    
    for center_1, center_2 in zip(regular_values[:-1], regular_values[1:]):
    plt.axvline(.5 * (center_1 + center_2), color='b', linestyle='--')
    
        # ============
    # Create cluster objects
    # ============
    ward = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='ward')
    complete = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='complete')
    average = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='average')
    single = cluster.AgglomerativeClustering(
        n_clusters=params['n_clusters'], linkage='single')
    
    Reference:
    
    
def leaky_relu(x, alpha=0.1):
    '''渗透 ReLU
    `o = max(alpha * x, x)`
    '''
    return tf.nn.leaky_relu(x, alpha)
    
    References:
    https://github.com/fomorians/highway-fcn
    https://github.com/fomorians/highway-cnn
'''
import tensorflow as tf
    
            # u_tilde(u~): context to question attended query vectors
        u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]
    
    
class OutOfData(UnpackException):
    pass
    
    
# List of frequently used SAS date and datetime formats
# http://support.sas.com/documentation/cdl/en/etsug/60372/HTML/default/viewer.htm#etsug_intervals_sect009.htm
# https://github.com/epam/parso/blob/master/src/main/java/com/epam/parso/impl/SasFileConstants.java
sas_date_formats = ('DATE', 'DAY', 'DDMMYY', 'DOWNAME', 'JULDAY', 'JULIAN',
                    'MMDDYY', 'MMYY', 'MMYYC', 'MMYYD', 'MMYYP', 'MMYYS',
                    'MMYYN', 'MONNAME', 'MONTH', 'MONYY', 'QTR', 'QTRR',
                    'NENGO', 'WEEKDATE', 'WEEKDATX', 'WEEKDAY', 'WEEKV',
                    'WORDDATE', 'WORDDATX', 'YEAR', 'YYMM', 'YYMMC', 'YYMMD',
                    'YYMMP', 'YYMMS', 'YYMMN', 'YYMON', 'YYMMDD', 'YYQ',
                    'YYQC', 'YYQD', 'YYQP', 'YYQS', 'YYQN', 'YYQR', 'YYQRC',
                    'YYQRD', 'YYQRP', 'YYQRS', 'YYQRN',
                    'YYMMDDP', 'YYMMDDC', 'E8601DA', 'YYMMDDN', 'MMDDYYC',
                    'MMDDYYS', 'MMDDYYD', 'YYMMDDS', 'B8601DA', 'DDMMYYN',
                    'YYMMDDD', 'DDMMYYB', 'DDMMYYP', 'MMDDYYP', 'YYMMDDB',
                    'MMDDYYN', 'DDMMYYC', 'DDMMYYD', 'DDMMYYS',
                    'MINGUO')
    
    
def check_array(overhead, num):
    check(num + overhead, (None, ) * num)
    
        dest = pathlib.Path('dist')
    dest.mkdir(exist_ok=True)
    
        copy, paste = clipboard_types[clipboard]()
    
            exp3 = ('0   1 days\n'
                '1   2 days\n'
                'dtype: timedelta64[ns]')
    
    
def test_getitem_callable():
    # GH 12533
    s = pd.Series(4, index=list('ABCD'))
    result = s[lambda x: 'A']
    assert result == s.loc['A']