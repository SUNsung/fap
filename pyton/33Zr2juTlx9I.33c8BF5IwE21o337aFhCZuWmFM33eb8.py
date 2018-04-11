
        
        from sklearn.dummy import DummyClassifier
    
        plt.legend(['Ridge', 'OLS', 'LassoLars'], loc='upper left')
    plt.axis('tight')
    plt.show()

    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
        op.add_option('--algorithm',
                  dest='selected_algorithm',
                  default=default_algorithms,
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. \nAvailable: %default')
    
    # to store the results
scikit_classifier_results = []
scikit_regressor_results = []
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
    import numpy as np
from sklearn.covariance import EllipticEnvelope
from sklearn.svm import OneClassSVM
import matplotlib.pyplot as plt
import matplotlib.font_manager
from sklearn.datasets import load_boston
    
    
class Model(object):
    '''The Model which hold the data. It implements the
    observable in the observer pattern and notifies the
    registered observers on change event.
    '''
    
    # Author: Olivier Grisel <olivier.grisel@ensta.org>
# License: BSD 3 clause
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
        def reject_friend_request(self, friend_id):
        pass
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        def prepare(self, **kwargs):
    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
            if s: self.streams['video'] = {'url': s }
        if mp3: self.streams['audio'] = { 'url': mp3 }
        if pdf: self.streams['slides'] = { 'url': pdf }
    
        #title
    title = ''
    profile_api = 'https://www.showroom-live.com/api/room/profile?room_id={room_id}'.format(room_id = room_id)
    html = loads(get_content(profile_api))
    try:
        title = html['main_name']
    except KeyError:
        title = 'Showroom_{room_id}'.format(room_id = room_id)
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
    def sequential():
    return list(map(is_prime, PRIMES))
    
        def test_del_shutdown(self):
        executor = futures.ProcessPoolExecutor(max_workers=5)
        list(executor.map(abs, range(-5, 5)))
        queue_management_thread = executor._queue_management_thread
        processes = executor._processes
        del executor
    
    
  @staticmethod
  def _ExtraHeaders( method, request_uri, request_body = None ):
    if not request_body:
      request_body = bytes( b'' )
    headers = dict( _HEADERS )
    headers[ _HMAC_HEADER ] = b64encode(
        CreateRequestHmac( ToBytes( method ),
                           ToBytes( urlparse( request_uri ).path ),
                           request_body,
                           BaseRequest.hmac_secret ) )
    return headers
    
    
def ExtractKeywordsFromGroup_KeywordAssignAndMiddle_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'nextgroup=zoo foo skipnl bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'skipnl', 'bar', 'zoo', 'goo' ) )
    
    
def StopServer( ycm ):
  try:
    ycm.OnVimLeave()
    WaitUntilProcessIsTerminated( ycm._server_popen )
    CloseStandardStreams( ycm._server_popen )
  except Exception:
    pass
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
    # class specific overrides
api('link',          LinkJsonTemplate)
api('promotedlink',  PromotedLinkJsonTemplate)
api('message',       MessageJsonTemplate)
api('subreddit',     SubredditJsonTemplate)
api('labeledmulti',  LabeledMultiJsonTemplate)
api('reddit',        RedditJsonTemplate)
api('panestack',     PanestackJsonTemplate)
api('htmlpanestack', NullJsonTemplate)
api('listing',       ListingJsonTemplate)
api('searchlisting', SearchListingJsonTemplate)
api('userlisting',   UserListingJsonTemplate)
api('usertableitem', UserTableItemJsonTemplate)
api('account',       AccountJsonTemplate)
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)