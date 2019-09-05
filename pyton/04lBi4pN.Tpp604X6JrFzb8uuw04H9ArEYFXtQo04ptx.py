
        
        if not IS_PYPY:
    from ._hashing import transform as _hashing_transform
else:
    def _hashing_transform(*args, **kwargs):
        raise NotImplementedError(
                'FeatureHasher is not compatible with PyPy (see '
                'https://github.com/scikit-learn/scikit-learn/issues/11540 '
                'for the status updates).')
    
    from sklearn.cluster import AgglomerativeClustering
    
    
def bench_scikit_tree_classifier(X, Y):
    '''Benchmark with scikit-learn decision tree classifier'''
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
    
# Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
        #Removing unnecessary intermediate files
    try:
        os.remove('htmlout.html')
        os.remove('title.html')
        os.remove('dir_title.html')
    except OSError:
        print('Error removing temporary file(s)')