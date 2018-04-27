
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
        def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
    
def main():
    os.chdir(os.path.join(os.path.dirname(__file__), '..'))
    
    
def test_appgroup(runner):
    '''Test of with_appcontext.'''
    
    import flask
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
    fixed_batch_size_comparison(X)
variable_batch_size_comparison(X)
plt.show()

    
    from sklearn.cluster import AgglomerativeClustering
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
TRAIN_FOLDER = '20news-bydate-train'
TEST_FOLDER = '20news-bydate-test'
    
        Both random labelings have the same number of clusters for each value
    possible value in ``n_clusters_range``.
    
    plt.axis('tight')
plt.axis('off')
plt.suptitle('Ground truth', size=20)
    
        def test_repr(self):
        self.assertEqual(repr(self.addr2), 'certbot_apache.obj.Addr(('127.0.0.1', '443'))')
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'acme': ('https://acme-python.readthedocs.org/en/latest/', None),
    'certbot': ('https://certbot.eff.org/docs/', None),
    'certbot-apache': (
        'https://letsencrypt-apache.readthedocs.org/en/latest/', None),
    'certbot-nginx': (
        'https://letsencrypt-nginx.readthedocs.org/en/latest/', None),
}

    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'