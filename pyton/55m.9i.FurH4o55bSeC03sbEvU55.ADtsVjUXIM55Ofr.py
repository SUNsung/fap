
        
        
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
    # The master toctree document.
master_doc = 'index'
    
    Show below is a logistic-regression classifiers decision boundaries on the
first two dimensions (sepal length and width) of the `iris
<https://en.wikipedia.org/wiki/Iris_flower_data_set>`_ dataset. The datapoints
are colored according to their labels.
    
    
@pytest.mark.parametrize('loss', ['squared_hinge', 'log'])
@pytest.mark.parametrize('X_label', ['sparse', 'dense'])
@pytest.mark.parametrize('Y_label', ['two-classes', 'multi-class'])
@pytest.mark.parametrize('intercept_label', ['no-intercept', 'fit-intercept'])
def test_l1_min_c(loss, X_label, Y_label, intercept_label):
    Xs = {'sparse': sparse_X, 'dense': dense_X}
    Ys = {'two-classes': Y1, 'multi-class': Y2}
    intercepts = {'no-intercept': {'fit_intercept': False},
                  'fit-intercept': {'fit_intercept': True,
                                    'intercept_scaling': 10}}
    
        xx = np.arange(100, 100 + n * step, step)
    plt.figure('scikit-learn vs. glmnet benchmark results')
    plt.title('Regression in high dimensional spaces (%d samples)' % n_samples)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    
def fixed_batch_size_comparison(data):
    all_features = [i.astype(int) for i in np.linspace(data.shape[1] // 10,
                                                       data.shape[1], num=5)]
    batch_size = 1000
    # Compare runtimes and error for fixed batch size
    all_times = defaultdict(list)
    all_errors = defaultdict(list)
    for n_components in all_features:
        pca = PCA(n_components=n_components)
        ipca = IncrementalPCA(n_components=n_components, batch_size=batch_size)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('ipca', ipca)]}
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
        # Print and plot the confusion matrix
    cm = metrics.confusion_matrix(y_test, y_predicted)
    print(cm)
    
        print('Generating skeleton for %s' % f)
    
    legend2_values_list = list(legend2.values())
legend2_keys_list = list(legend2.keys())
    
    # The data that we are interested in is made of 8x8 images of digits, let's
# have a look at the first 4 images, stored in the `images` attribute of the
# dataset.  If we were working from image files, we could load them using
# matplotlib.pyplot.imread.  Note that each image must have the same size. For these
# images, we know which digit they represent: it is given in the 'target' of
# the dataset.
images_and_labels = list(zip(digits.images, digits.target))
for index, (image, label) in enumerate(images_and_labels[:4]):
    plt.subplot(2, 4, index + 1)
    plt.axis('off')
    plt.imshow(image, cmap=plt.cm.gray_r, interpolation='nearest')
    plt.title('Training: %i' % label)
    
    The example is engineered to show the effect of the choice of different
metrics. It is applied to waveforms, which can be seen as
high-dimensional vector. Indeed, the difference between metrics is
usually more pronounced in high dimension (in particular for euclidean
and cityblock).
    
    *Examples in Python ecosystem:
Django Signals: https://docs.djangoproject.com/en/2.1/topics/signals/
Flask Signals: http://flask.pocoo.org/docs/1.0/signals/
'''
    
    
if __name__ == '__main__':
    main()
    
    *TL;DR
Implements state as a derived class of the state pattern interface.
Implements state transitions by invoking methods from the pattern's superclass.
'''
    
    
def rsub(left, right):
    return right - left
    
    
class TestAsOfMerge:
    def read_data(self, datapath, name, dedupe=False):
        path = datapath('reshape', 'merge', 'data', name)
        x = read_csv(path)
        if dedupe:
            x = x.drop_duplicates(['time', 'ticker'], keep='last').reset_index(
                drop=True
            )
        x.time = to_datetime(x.time)
        return x
    
    
from .pandas_vb_common import setup  # noqa: F401

    
        def time_frame_float_floor_by_zero(self):
        self.df // 0
    
    
def test_filter_policy():
    test_data = [
        (
            'no filter with no attributes',
            {},
            {},
            True
        ),
        (
            'no filter with attributes',
            {},
            {'filter': {'Type': 'String', 'Value': 'type1'}},
            True
        ),
        (
            'exact string filter',
            {'filter': 'type1'},
            {'filter': {'Type': 'String', 'Value': 'type1'}},
            True
        ),
        (
            'exact string filter on an array',
            {'filter': 'soccer'},
            {'filter': {'Type': 'String.Array', 'Value': '['soccer', 'rugby', 'hockey']'}},
            True
        ),
        (
            'exact string filter with no attributes',
            {'filter': 'type1'},
            {},
            False
        ),
        (
            'exact string filter with no match',
            {'filter': 'type1'},
            {'filter': {'Type': 'String', 'Value': 'type2'}},
            False
        ),
        (
            'or string filter with match',
            {'filter': ['type1', 'type2']},
            {'filter': {'Type': 'String', 'Value': 'type1'}},
            True
        ),
        (
            'or string filter with other match',
            {'filter': ['type1', 'type2']},
            {'filter': {'Type': 'String', 'Value': 'type2'}},
            True
        ),
        (
            'or string filter match with an array',
            {'filter': ['soccer', 'basketball']},
            {'filter': {'Type': 'String.Array', 'Value': '['soccer', 'rugby', 'hockey']'}},
            True
        ),
        (
            'or string filter with no attributes',
            {'filter': ['type1', 'type2']},
            {},
            False
        ),
        (
            'or string filter with no match',
            {'filter': ['type1', 'type2']},
            {'filter': {'Type': 'String', 'Value': 'type3'}},
            False
        ),
        (
            'or string filter no match with an array',
            {'filter': ['volleyball', 'basketball']},
            {'filter': {'Type': 'String.Array', 'Value': '['soccer', 'rugby', 'hockey']'}},
            False
        ),
        (
            'anything-but string filter with match',
            {'filter': [{'anything-but': 'type1'}]},
            {'filter': {'Type': 'String', 'Value': 'type1'}},
            False
        ),
        (
            'anything-but string filter with no match',
            {'filter': [{'anything-but': 'type1'}]},
            {'filter': {'Type': 'String', 'Value': 'type2'}},
            True
        ),
        (
            'prefix string filter with match',
            {'filter': [{'prefix': 'typ'}]},
            {'filter': {'Type': 'String', 'Value': 'type1'}},
            True
        ),
        (
            'prefix string filter match with an array',
            {'filter': [{'prefix': 'soc'}]},
            {'filter': {'Type': 'String.Array', 'Value': '['soccer', 'rugby', 'hockey']'}},
            True
        ),
        (
            'prefix string filter with no match',
            {'filter': [{'prefix': 'test'}]},
            {'filter': {'Type': 'String', 'Value': 'type2'}},
            False
        ),
        (
            'numeric = filter with match',
            {'filter': [{'numeric': ['=', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 300}},
            True
        ),
        (
            'numeric = filter with no match',
            {'filter': [{'numeric': ['=', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 301}},
            False
        ),
        (
            'numeric > filter with match',
            {'filter': [{'numeric': ['>', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 301}},
            True
        ),
        (
            'numeric > filter with no match',
            {'filter': [{'numeric': ['>', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 300}},
            False
        ),
        (
            'numeric < filter with match',
            {'filter': [{'numeric': ['<', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 299}},
            True
        ),
        (
            'numeric < filter with no match',
            {'filter': [{'numeric': ['<', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 300}},
            False
        ),
        (
            'numeric >= filter with match',
            {'filter': [{'numeric': ['>=', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 300}},
            True
        ),
        (
            'numeric >= filter with no match',
            {'filter': [{'numeric': ['>=', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 299}},
            False
        ),
        (
            'numeric <= filter with match',
            {'filter': [{'numeric': ['<=', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 300}},
            True
        ),
        (
            'numeric <= filter with no match',
            {'filter': [{'numeric': ['<=', 300]}]},
            {'filter': {'Type': 'Number', 'Value': 301}},
            False
        ),
        (
            'numeric filter with bad data',
            {'filter': [{'numeric': ['=', 300]}]},
            {'filter': {'Type': 'String', 'Value': 'test'}},
            False
        ),
        (
            'logical OR with match',
            {'filter': ['test1', 'test2', {'prefix': 'typ'}]},
            {'filter': {'Type': 'String', 'Value': 'test2'}},
            True
        ),
        (
            'logical OR with match',
            {'filter': ['test1', 'test2', {'prefix': 'typ'}]},
            {'filter': {'Type': 'String', 'Value': 'test1'}},
            True
        ),
        (
            'logical OR with match on an array',
            {'filter': ['test1', 'test2', {'prefix': 'typ'}]},
            {'filter': {'Type': 'String.Array', 'Value': '['test1', 'other']'}},
            True
        ),
        (
            'logical OR no match',
            {'filter': ['test1', 'test2', {'prefix': 'typ'}]},
            {'filter': {'Type': 'String', 'Value': 'test3'}},
            False
        ),
        (
            'logical OR no match on an array',
            {'filter': ['test1', 'test2', {'prefix': 'typ'}]},
            {'filter': {'Type': 'String.Array', 'Value': '['anything', 'something']'}},
            False
        ),
        (
            'logical AND with match',
            {'filter': [{'numeric': ['=', 300]}], 'other': [{'prefix': 'typ'}]},
            {'filter': {'Type': 'Number', 'Value': 300}, 'other': {'Type': 'String', 'Value': 'type1'}},
            True
        ),
        (
            'logical AND missing first attribute',
            {'filter': [{'numeric': ['=', 300]}], 'other': [{'prefix': 'typ'}]},
            {'other': {'Type': 'String', 'Value': 'type1'}},
            False
        ),
        (
            'logical AND missing second attribute',
            {'filter': [{'numeric': ['=', 300]}], 'other': [{'prefix': 'typ'}]},
            {'filter': {'Type': 'Number', 'Value': 300}},
            False
        ),
        (
            'logical AND no match',
            {'filter': [{'numeric': ['=', 300]}], 'other': [{'prefix': 'typ'}]},
            {'filter': {'Type': 'Number', 'Value': 299}, 'other': {'Type': 'String', 'Value': 'type1'}},
            False
        ),
        (
            'multiple numeric filters with first match',
            {'filter': [{'numeric': ['=', 300]}, {'numeric': ['=', 500]}]},
            {'filter': {'Type': 'Number', 'Value': 300}},
            True
        ),
        (
            'multiple numeric filters with second match',
            {'filter': [{'numeric': ['=', 300]}, {'numeric': ['=', 500]}]},
            {'filter': {'Type': 'Number', 'Value': 500}},
            True
        ),
        (
            'multiple prefix filters with first match',
            {'filter': [{'prefix': 'typ'}, {'prefix': 'tes'}]},
            {'filter': {'Type': 'String', 'Value': 'type1'}},
            True
        ),
        (
            'multiple prefix filters with second match',
            {'filter': [{'prefix': 'typ'}, {'prefix': 'tes'}]},
            {'filter': {'Type': 'String', 'Value': 'test'}},
            True
        ),
        (
            'multiple anything-but filters with second match',
            {'filter': [{'anything-but': 'type1'}, {'anything-but': 'type2'}]},
            {'filter': {'Type': 'String', 'Value': 'type2'}},
            True
        ),
        (
            'multiple numeric conditions',
            {'filter': [{'numeric': ['>', 0, '<=', 150]}]},
            {'filter': {'Type': 'Number', 'Value': 122}},
            True
        ),
        (
            'multiple numeric conditions',
            {'filter': [{'numeric': ['>', 0, '<=', 150]}]},
            {'filter': {'Type': 'Number', 'Value': 200}},
            False
        ),
        (
            'multiple numeric conditions',
            {'filter': [{'numeric': ['>', 0, '<=', 150]}]},
            {'filter': {'Type': 'Number', 'Value': -1}},
            False
        ),
        (
            'multiple conditions on an array',
            {'filter': ['test1', 'test2', {'prefix': 'som'}]},
            {'filter': {'Type': 'String.Array', 'Value': '['anything', 'something']'}},
            True
        )
    ]
    
            data1 = (b'--------------------------3c48c744237517ac\r\nContent-Disposition: form-data; name='key'\r\n\r\n'
                 b'uploads/20170826T181315.679087009Z/upload/pixel.png\r\n--------------------------3c48c744237517ac'
                 b'\r\nContent-Disposition: form-data; name='success_action_redirect'\r\n\r\nhttp://127.0.0.1:5000/'
                 b'?id=20170826T181315.679087009Z\r\n--------------------------3c48c744237517ac--\r\n')
    
        # idem dito for the validation text
    val = TextFile(files=[VAL_FILE],
                     dictionary=dictionary,
                     unk_token='~',
                     level='character',
                     preprocess=str.lower,
                     bos_token=None,
                     eos_token=None)
    
    # lstm_text.ipynb