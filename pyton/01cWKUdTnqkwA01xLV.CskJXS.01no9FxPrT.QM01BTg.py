
        
        html_theme = 'flask'
html_theme_options = {'index_sidebar_logo': False}
html_context = {
    'project_links': [
        ProjectLink('Donate to Pallets', 'https://palletsprojects.com/donate'),
        ProjectLink('Flask Website', 'https://palletsprojects.com/p/flask/'),
        ProjectLink('PyPI releases', 'https://pypi.org/project/Flask/'),
        ProjectLink('Source Code', 'https://github.com/pallets/flask/'),
        ProjectLink('Issue Tracker', 'https://github.com/pallets/flask/issues/'),
    ]
}
html_sidebars = {
    'index': ['project.html', 'localtoc.html', 'versions.html', 'searchbox.html'],
    '**': ['localtoc.html', 'relations.html', 'versions.html', 'searchbox.html'],
}
singlehtml_sidebars = {'index': ['project.html', 'versions.html', 'localtoc.html']}
html_static_path = ['_static']
html_favicon = '_static/flask-icon.png'
html_logo = '_static/flask-logo-sidebar.png'
html_title = 'Flask Documentation ({})'.format(version)
html_show_sourcelink = False
html_domain_indices = False
    
        # apply the blueprints to the app
    from flaskr import auth, blog
    
            :param obj: an import name or object
        '''
        if isinstance(obj, string_types):
            obj = import_string(obj)
        for key in dir(obj):
            if key.isupper():
                self[key] = getattr(obj, key)
    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    ratio = scikits_time / scipy_time
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    data, rows, columns = make_biclusters(
    shape=(300, 300), n_clusters=5, noise=5,
    shuffle=False, random_state=0)
    
    We add observation noise to these waveforms. We generate very sparse
noise: only 6% of the time points contain noise. As a result, the
l1 norm of this noise (ie 'cityblock' distance) is much smaller than it's
l2 norm ('euclidean' distance). This can be seen on the inter-class
distance matrices: the values on the diagonal, that characterize the
spread of the class, are much bigger for the Euclidean distance than for
the cityblock distance.
    
    In a first step, the hierarchical clustering is performed without connectivity
constraints on the structure and is solely based on distance, whereas in
a second step the clustering is restricted to the k-Nearest Neighbors
graph: it's a hierarchical clustering with structure prior.
    
    
class TestSetOfStacks(object):
    
    
class TestSortStack(object):
    
            print('Test: One element')
        top = Node(5)
        stack = Stack(top)
        assert_equal(stack.pop(), 5)
        assert_equal(stack.peek(), None)
    
            print('Success: test_end_to_end')