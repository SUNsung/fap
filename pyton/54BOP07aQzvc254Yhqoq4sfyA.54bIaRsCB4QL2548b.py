
        
            scikit_classifier_results = []
    scikit_regressor_results = []
    n = 10
    step = 500
    start_dim = 500
    n_classes = 10
    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    The goal of this exercise is to train a linear classifier on text features
that represent sequences of up to 3 consecutive characters so as to be
recognize natural languages by using the frequencies of short character
sequences as 'fingerprints'.
    
        # split the dataset in training and test set:
    docs_train, docs_test, y_train, y_test = train_test_split(
        dataset.data, dataset.target, test_size=0.25, random_state=None)
    
            C = float(self.complexity.get())
        gamma = float(self.gamma.get())
        coef0 = float(self.coef0.get())
        degree = int(self.degree.get())
        kernel_map = {0: 'linear', 1: 'rbf', 2: 'poly'}
        if len(np.unique(y)) == 1:
            clf = svm.OneClassSVM(kernel=kernel_map[self.kernel.get()],
                                  gamma=gamma, coef0=coef0, degree=degree)
            clf.fit(X)
        else:
            clf = svm.SVC(kernel=kernel_map[self.kernel.get()], C=C,
                          gamma=gamma, coef0=coef0, degree=degree)
            clf.fit(X, y)
        if hasattr(clf, 'score'):
            print('Accuracy:', clf.score(X, y) * 100)
        X1, X2, Z = self.decision_surface(clf)
        self.model.clf = clf
        self.model.set_surface((X1, X2, Z))
        self.model.surface_type = self.surface_type.get()
        self.fitted = True
        self.model.changed('surface')
    
    Calibration of the probabilities of Gaussian naive Bayes with isotonic
regression can fix this issue as can be seen from the nearly diagonal
calibration curve. Sigmoid calibration also improves the brier score slightly,
albeit not as strongly as the non-parametric isotonic regression. This can be
attributed to the fact that we have plenty of calibration data such that the
greater flexibility of the non-parametric model can be exploited.
    
    import numpy as np
    
    Plot the classification probability for different classifiers. We use a 3
class dataset, and we classify it with a Support Vector classifier, L1
and L2 penalized logistic regression with either a One-Vs-Rest or multinomial
setting, and Gaussian process classification.
    
    X = list()
y = list()
for i, (phi, a) in enumerate([(.5, .15), (.5, .6), (.3, .2)]):
    for _ in range(30):
        phase_noise = .01 * np.random.normal()
        amplitude_noise = .04 * np.random.normal()
        additional_noise = 1 - 2 * np.random.rand(n_features)
        # Make the noise sparse
        additional_noise[np.abs(additional_noise) < .997] = 0
    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
    # TBD
def main_dev(**kwargs):
    '''Main entry point.
    you-get-dev
    '''
    
    import ssl
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
        t = r1(r'type=(\w+)', flashvars)
    id = r1(r'vid=([^']+)', flashvars)
    if t == 'youku':
        youku_download_by_vid(id, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'tudou':
        tudou_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'sina' or t == 'video':
        fake_headers['Referer'] = url
        url = 'http://www.miomio.tv/mioplayer/mioplayerconfigfiles/sina.php?vid=' + id
        xml_data = get_content(url, headers=fake_headers, decoded=True)
        url_list = sina_xml_to_url_list(xml_data)
    
            self.title = match1(content,
                            r'setup\[\'title\'\] = '([^']+)';')
    
    __all__ = ['showroom_download']
    
        def btn_test_setup(self, meth):
        self.dialog.top = self.root
        self.dialog.row = 0
        return meth()
    
            title - string, title of popup dialog
        message - string, informational message to display
        text0 - initial value for entry
        used_names - names already in use
        _htest - bool, change box location when running htest
        _utest - bool, leave window hidden and not modal
        '''
        Toplevel.__init__(self, parent)
        self.withdraw()  # Hide while configuring, especially geometry.
        self.parent = parent
        self.title(title)
        self.message = message
        self.text0 = text0
        self.used_names = used_names
        self.transient(parent)
        self.grab_set()
        windowingsystem = self.tk.call('tk', 'windowingsystem')
        if windowingsystem == 'aqua':
            try:
                self.tk.call('::tk::unsupported::MacWindowStyle', 'style',
                             self._w, 'moveableModal', '')
            except:
                pass
            self.bind('<Command-.>', self.cancel)
        self.bind('<Key-Escape>', self.cancel)
        self.protocol('WM_DELETE_WINDOW', self.cancel)
        self.bind('<Key-Return>', self.ok)
        self.bind('<KP_Enter>', self.ok)
        self.resizable(height=False, width=False)
        self.create_widgets()
        self.update_idletasks()  # Needed here for winfo_reqwidth below.
        self.geometry(  # Center dialog over parent (or below htest box).
                '+%d+%d' % (
                    parent.winfo_rootx() +
                    (parent.winfo_width()/2 - self.winfo_reqwidth()/2),
                    parent.winfo_rooty() +
                    ((parent.winfo_height()/2 - self.winfo_reqheight()/2)
                    if not _htest else 150)
                ) )
        if not _utest:
            self.deiconify()  # Unhide now that geometry set.
            self.wait_window()
    
        def test_decoder_optimizations(self):
        # Several optimizations were made that skip over calls to
        # the whitespace regex, so this test is designed to try and
        # exercise the uncommon cases. The array cases are already covered.
        rval = self.loads('{   'key'    :    'value'    ,  'k':'v'    }')
        self.assertEqual(rval, {'key':'value', 'k':'v'})
    
    Usually an IFF-type file consists of one or more chunks.  The proposed
usage of the Chunk class defined here is to instantiate an instance at
the start of each chunk and read from the instance until it reaches
the end, after which a new instance can be instantiated.  At the end
of the file, creating a new instance will fail with an EOFError
exception.
    
        def add(self, message):
        '''Add message and return assigned key.'''
        key = _singlefileMailbox.add(self, message)
        if isinstance(message, BabylMessage):
            self._labels[key] = message.get_labels()
        return key
    
    # RFC 977 by Brian Kantor and Phil Lapsley.
# xover, xgtitle, xpath, date methods by Kevan Heydon
    
            # determine the encoding if the transport provided it
        source.encoding = self._guess_media_encoding(source)
    
        def test_varargs17_kw(self):
        msg = r'^print\(\) takes at most 4 keyword arguments \(5 given\)$'
        self.assertRaisesRegex(TypeError, msg,
                               print, 0, sep=1, end=2, file=3, flush=4, foo=5)
    
            self.assertRaises(TypeError, Array.from_buffer_copy, b'123')
        self.assertRaises(TypeError, Structure.from_buffer_copy, b'123')
        self.assertRaises(TypeError, Union.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _CFuncPtr.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _Pointer.from_buffer_copy, b'123')
        self.assertRaises(TypeError, _SimpleCData.from_buffer_copy, b'123')