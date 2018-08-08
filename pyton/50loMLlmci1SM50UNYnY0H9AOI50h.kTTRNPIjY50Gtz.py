
        
        
def _tar_file(cmd):
    for c in cmd:
        for ext in tar_extensions:
            if c.endswith(ext):
                return (c, c[0:len(c) - len(ext)])
    
            print('Iteration %s of %s' % (i, n_iter))
    
    
def _tabulate(results, metrics, formats):
    '''Prints results by metric and format
    
        op.add_option('--density',
                  dest='density', default=1 / 3,
                  help='Density used by the sparse random projection.'
                       ' ('auto' or float (0.0, 1.0]')
    
    for lang, page in pages.items():
    
    import os
import tarfile
from contextlib import closing
    
        # split the dataset in training and test set:
    docs_train, docs_test, y_train, y_test = train_test_split(
        dataset.data, dataset.target, test_size=0.25, random_state=None)
    
    We selected two sets of two variables from the Boston housing data set
as an illustration of what kind of analysis can be done with several
outlier detection tools. For the purpose of visualization, we are working
with two-dimensional examples, but one should be aware that things are
not so trivial in high-dimension, as it will be pointed out.
    
    import sys
import numpy as np
    
    plt.matshow(fit_data, cmap=plt.cm.Blues)
plt.title('After biclustering; rearranged to show biclusters')
    
            lw = LedoitWolf(store_precision=False, assume_centered=True)
        lw.fit(X)
        lw_mse[i, j] = lw.error_norm(real_cov, scaling=False)
        lw_shrinkage[i, j] = lw.shrinkage_
    
    import matplotlib.pyplot as plt
    
    
# -- Options for manual page output ---------------------------------------
    
                record_id = result['domain_record']['id']
    
        def test_str(self):
        self.assertEqual('Invalid nonce ('xxx'): error', str(self.error))
    
        def cleanup_from_tests(self):
        '''Performs any necessary cleanup from running plugin tests'''
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
    'repoze.sphinx.autointerface',
]