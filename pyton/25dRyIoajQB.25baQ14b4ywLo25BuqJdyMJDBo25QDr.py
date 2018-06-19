
        
        
@for_app('tar')
def match(command):
    return ('-C' not in command.script
            and _is_tar_extract(command.script)
            and _tar_file(command.script_parts) is not None)
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    
    
def variable_batch_size_comparison(data):
    batch_sizes = [i.astype(int) for i in np.linspace(data.shape[0] // 10,
                                                      data.shape[0], num=10)]
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    # Predict the result on some short new sentences:
sentences = [
    u'This is a language detection test.',
    u'Ceci est un test de d\xe9tection de la langue.',
    u'Dies ist ein Test, um die Sprache zu erkennen.',
]
predicted = clf.predict(sentences)
    
        if f == os.path.basename(__file__):
        continue
    
    from sklearn.datasets import make_blobs
from sklearn.ensemble import RandomForestClassifier
from sklearn.calibration import CalibratedClassifierCV
from sklearn.metrics import log_loss
    
    We generate data from three groups of waveforms. Two of the waveforms
(waveform 1 and waveform 2) are proportional one to the other. The cosine
distance is invariant to a scaling of the data, as a result, it cannot
distinguish these two waveforms. Thus even with no noise, clustering
using this distance will not separate out waveform 1 and 2.