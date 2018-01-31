
        
        README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    import itertools
import json
import os
import re
import sys
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
    
def gen_extractor_classes():
    ''' Return a list of supported extractors.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return _ALL_CLASSES
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
        # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
    from sklearn.datasets import make_multilabel_classification
from sklearn.metrics import (f1_score, accuracy_score, hamming_loss,
                             jaccard_similarity_score)
from sklearn.utils.testing import ignore_warnings
    
        samples_range = np.linspace(10, 2000, 5).astype(np.int)
    features_range = np.linspace(10, 2000, 5).astype(np.int)
    results = compute_bench(samples_range, features_range)
    
            descr_string = ''
    
    import matplotlib.pyplot as plt
import numpy as np
import random
    
        package is the name of the root module of the package
    
    
if not os.path.exists(DATA_FOLDER):
    
    # TASK: Predict the outcome on the testing set in a variable named y_predicted
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
        
        When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup[query]
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
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
        def test_simple(self):
        response = self.fetch('/')
        self.assertEqual(response.body, b'Hello world!')
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
    
class RootHandler(RequestHandler):
    def get(self):
        self.write('Hello, world')
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    parse_command_line()
    app = tornado.web.Application(
        [
            (r'/', MainHandler),
            (r'/a/message/new', MessageNewHandler),
            (r'/a/message/updates', MessageUpdatesHandler),
        ],
        cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
        template_path=os.path.join(os.path.dirname(__file__), 'templates'),
        static_path=os.path.join(os.path.dirname(__file__), 'static'),
        xsrf_cookies=True,
        debug=options.debug,
    )
    app.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
            AJAX login handler, used by both login and register to set the
        user cookie and send back a redirect.
        '''
        c.user = user
        c.user_is_loggedin = True
        self.login(user, rem=rem)
    
        c = Controller(blackboard)
    contributions = c.run_loop()
    
    from __future__ import print_function
    
        def test_bear_greek_localization(self):
        self.assertEqual(self.g.get('bear'), 'bear')

    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        print('-- now doing stuff ...')
    try:
        num_obj.do_stuff()
    except Exception as e:
        print('-> doing stuff failed!')
        import sys
        import traceback