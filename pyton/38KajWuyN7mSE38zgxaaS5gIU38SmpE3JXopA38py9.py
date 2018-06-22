
        
        
def test_tag_interface():
    t = JSONTag(None)
    pytest.raises(NotImplementedError, t.check, None)
    pytest.raises(NotImplementedError, t.to_json, None)
    pytest.raises(NotImplementedError, t.to_python, None)
    
        def _iter_loaders(self, template):
        loader = self.app.jinja_loader
        if loader is not None:
            yield self.app, loader
    
    
class MethodView(with_metaclass(MethodViewType, View)):
    '''A class-based view that dispatches request methods to the corresponding
    class methods. For example, if you implement a ``get`` method, it will be
    used to handle ``GET`` requests. ::
    
    import os
import re
import sys
from datetime import date, datetime
from subprocess import PIPE, Popen
    
    
def test_egg_installed_paths(install_egg, modules_tmpdir,
                             modules_tmpdir_prefix):
    modules_tmpdir.mkdir('site_egg').join('__init__.py').write(
        'import flask\n\napp = flask.Flask(__name__)'
    )
    install_egg('site_egg')
    try:
        import site_egg
        assert site_egg.app.instance_path == \
            str(modules_tmpdir.join('var/').join('site_egg-instance'))
    finally:
        if 'site_egg' in sys.modules:
            del sys.modules['site_egg']
    
        # Trigger caches
    fire()
    
        app.config.update(SERVER_NAME='localhost:80')
    with app.test_request_context('/', environ_overrides={'SERVER_NAME': 'localhost:80'}):
        pass
    
        @app.after_request
    def after_request_handler(response):
        calls.append('after-handler')
        response.data = 'stuff'
        return response
    
        print('20 newsgroups')
    print('=============')
    print('X_train.shape = {0}'.format(X_train.shape))
    print('X_train.format = {0}'.format(X_train.format))
    print('X_train.dtype = {0}'.format(X_train.dtype))
    print('X_train density = {0}'
          ''.format(X_train.nnz / np.product(X_train.shape)))
    print('y_train {0}'.format(y_train.shape))
    print('X_test {0}'.format(X_test.shape))
    print('X_test.format = {0}'.format(X_test.format))
    print('X_test.dtype = {0}'.format(X_test.dtype))
    print('y_test {0}'.format(y_test.shape))
    print()
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plot_results(all_components, all_times['rpca'], label='RandomizedPCA')
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
        #------------------------------------------------------------
    # varying D
    D_results_build = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    D_results_query = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
    REVISION_CMD = 'git rev-parse --short HEAD'
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    # Predict the result on some short new sentences:
sentences = [
    u'This is a language detection test.',
    u'Ceci est un test de d\xe9tection de la langue.',
    u'Dies ist ein Test, um die Sprache zu erkennen.',
]
predicted = clf.predict(sentences)
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
    plt.grid('off')
for x in [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]:
    plt.plot([0, x], [x, 0], 'k', alpha=0.2)
    plt.plot([0, 0 + (1-x)/2], [x, x + (1-x)/2], 'k', alpha=0.2)
    plt.plot([x, x + (1-x)/2], [0, 0 + (1-x)/2], 'k', alpha=0.2)
    
    X = list()
y = list()
for i, (phi, a) in enumerate([(.5, .15), (.5, .6), (.3, .2)]):
    for _ in range(30):
        phase_noise = .01 * np.random.normal()
        amplitude_noise = .04 * np.random.normal()
        additional_noise = 1 - 2 * np.random.rand(n_features)
        # Make the noise sparse
        additional_noise[np.abs(additional_noise) < .997] = 0
    
        def __init__(self, db):
        self.db = db
        pass
    
        @value.setter
    @abstractmethod
    def value(self, other):
        pass
    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
        filenames = []
    for (dirpath, dnames, fnames) in os.walk(path):
        for fname in fnames:
            if fname.endswith('.md'):
                filenames.append(os.sep.join([dirpath, fname]))