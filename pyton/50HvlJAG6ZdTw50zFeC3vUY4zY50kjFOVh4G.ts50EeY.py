
        
            def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def __init__(self, operators, supervisors, directors):
        self.operators = operators
        self.supervisors = supervisors
        self.directors = directors
        self.queued_calls = deque()
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
def flatpage(request, url):
    '''
    Public interface to the flat page view.
    
        assert_allclose(result, true_result)
    
        toplot = track[i, ::, ::, 0]
    
        np.random.seed(seed)
    indices = np.arange(len(x))
    np.random.shuffle(indices)
    x = x[indices]
    y = y[indices]
    
        for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
        y_train = np.reshape(y_train, (len(y_train), 1))
    y_test = np.reshape(y_test, (len(y_test), 1))
    
            plt.gcf().suptitle('%s data set' % dataset.capitalize(), fontsize=16)
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
    import time
    
        ###########################################################################
    # Set GaussianRandomProjection input
    gaussian_matrix_params = {
        'n_components': opts.n_components,
        'random_state': opts.random_seed
    }
    transformers['GaussianRandomProjection'] = \
        GaussianRandomProjection(**gaussian_matrix_params)
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
        opener = build_opener()
    html_filename = os.path.join(html_folder, lang + '.html')
    if not os.path.exists(html_filename):
        print('Downloading %s' % page)
        request = Request(page)
        # change the User Agent to avoid being blocked by Wikipedia
        # downloading a couple of articles should not be considered abusive
        request.add_header('User-Agent', 'OpenAnything/1.0')
        html_content = opener.open(request).read()
        open(html_filename, 'wb').write(html_content)
    
    # Predict the result on some short new sentences:
sentences = [
    u'This is a language detection test.',
    u'Ceci est un test de d\xe9tection de la langue.',
    u'Dies ist ein Test, um die Sprache zu erkennen.',
]
predicted = clf.predict(sentences)
    
        def plot_decision_surface(self, surface, type):
        X1, X2, Z = surface
        if type == 0:
            levels = [-1.0, 0.0, 1.0]
            linestyles = ['dashed', 'solid', 'dashed']
            colors = 'k'
            self.contours.append(self.ax.contour(X1, X2, Z, levels,
                                                 colors=colors,
                                                 linestyles=linestyles))
        elif type == 1:
            self.contours.append(self.ax.contourf(X1, X2, Z, 10,
                                                  cmap=matplotlib.cm.bone,
                                                  origin='lower', alpha=0.85))
            self.contours.append(self.ax.contour(X1, X2, Z, [0.0], colors='k',
                                                 linestyles=['solid']))
        else:
            raise ValueError('surface type unknown')
    
    COLORS = np.array(['!',
                   '#FF3333',  # red
                   '#0198E1',  # blue
                   '#BF5FFF',  # purple
                   '#FCD116',  # yellow
                   '#FF7216',  # orange
                   '#4DBD33',  # green
                   '#87421F'   # brown
                   ])
    
    import os
import unittest
    
            self.addr1 = Addr.fromstring('127.0.0.1')
        self.addr2 = Addr.fromstring('127.0.0.1:*')
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        # mgid%3Auma%3Avideo%3Amtv81.com%3A897974
    vid = match1(html, r'getTheVideo\('(.*?)'')
    xml = parseString(
        get_content('http://intl.esperanto.mtvi.com/www/xml/media/mediaGen.jhtml?uri={}&flashPlayer=LNX%2013,0,0,206&geo=CN&sid=123456'.format(vid)))
    
            # construct available streams
        if orig_img: self.streams['original'] = {'url': orig_img}
        if twit_img: self.streams['small'] = {'url': twit_img}