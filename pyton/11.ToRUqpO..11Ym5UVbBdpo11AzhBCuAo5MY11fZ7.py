
        
                if not os.path.exists(directory):
            os.makedirs(directory)
    
        indent = None
    if format:
        indent = 4
    
    import re
    
        return results

    
    import matplotlib.pyplot as plt
import scipy.sparse as sp
import numpy as np
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    html_folder = u'html'
text_folder = u'paragraphs'
short_text_folder = u'short_paragraphs'
n_words_per_short_text = 5
    
    
if not os.path.exists(DATA_FOLDER):
    
    #import matplotlib.pyplot as plt
#plt.matshow(cm, cmap=plt.cm.jet)
#plt.show()
    
    exercise_dir = os.path.dirname(__file__)
if exercise_dir == '':
    exercise_dir = '.'
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        @staticmethod
    def _static_method_2():
        print('executed method 2!')
    
    
def timeit(func):
    
        This is, in fact, just syntactic sugar around a memento closure.
    '''
    deep = False
    states = []
    
    *TL;DR80
Maintains a list of dependents and notifies them of any state changes.
'''
    
    extension_mapping = {
    'rss': ('xml', 'application/atom+xml; charset=UTF-8'),
    'xml': ('xml', 'application/atom+xml; charset=UTF-8'),
    'js': ('js', 'text/javascript; charset=UTF-8'),
    'embed': ('htmllite', 'text/javascript; charset=UTF-8'),
    'mobile': ('mobile', 'text/html; charset=UTF-8'),
    'png': ('png', 'image/png'),
    'css': ('css', 'text/css'),
    'csv': ('csv', 'text/csv; charset=UTF-8'),
    'api': (api_type(), 'application/json; charset=UTF-8'),
    'json-html': (api_type('html'), 'application/json; charset=UTF-8'),
    'json-compact': (api_type('compact'), 'application/json; charset=UTF-8'),
    'compact': ('compact', 'text/html; charset=UTF-8'),
    'json': (api_type(), 'application/json; charset=UTF-8'),
    'i': ('compact', 'text/html; charset=UTF-8'),
}
    
            controller_cls = self._controllers.get_controller(controller_name)
        self.controller_classes[controller_name] = controller_cls
        return controller_cls
    
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