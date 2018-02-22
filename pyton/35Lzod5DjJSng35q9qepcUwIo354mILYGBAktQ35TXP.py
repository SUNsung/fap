
        
        containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
                c_bar = plt.bar(xvals, build_time[alg] - bottom,
                            width, bottom, color='r')
            q_bar = plt.bar(xvals, query_time[alg],
                            width, build_time[alg], color='b')
    
        if revision is None:
        return
    if domain not in ('py', 'pyx'):
        return
    if not info.get('module') or not info.get('fullname'):
        return
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
    from sklearn.linear_model import LogisticRegression
from sklearn.svm import SVC
from sklearn.gaussian_process import GaussianProcessClassifier
from sklearn.gaussian_process.kernels import RBF
from sklearn import datasets
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    from mrjob.job import MRJob
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
class RemoveDuplicateUrls(MRJob):
    
    PROJ_METADATA = '%s.json' % PROJ_NAME
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
        def test_human_adapter_shall_make_noise(self):
        human = Human()
        human_adapter = Adapter(human, make_noise=human.speak)
        noise = human_adapter.make_noise()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
    ### OUTPUT ###
# Jack move 5m then stop

    
    
class MoveFileCommand(object):
    
        def and_specification(self, candidate):
        raise NotImplementedError()