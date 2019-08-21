
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    We selected two sets of two variables from the Boston housing data set
as an illustration of what kind of analysis can be done with several
outlier detection tools. For the purpose of visualization, we are working
with two-dimensional examples, but one should be aware that things are
not so trivial in high-dimension, as it will be pointed out.
    
    This example demonstrates how to generate a checkerboard dataset and
bicluster it using the Spectral Biclustering algorithm.
    
        def test_indentation_array(self):
        data = [[[[[[[[{'test': b'aaaaaa'}]]]]]]]]
        self.assertEqual(plistlib.loads(plistlib.dumps(data)), data)
    
    # Additional stuff for the LaTeX preamble.
latex_elements['preamble'] = r'''
\authoraddress{
  \sphinxstrong{Python Software Foundation}\\
  Email: \sphinxemail{docs@python.org}
}
\let\Verbatim=\OriginalVerbatim
\let\endVerbatim=\endOriginalVerbatim
'''
    
        def run(self):
        self.sock.listen()
        self.event.set()
        conn, client = self.sock.accept()
        self.buffer = b''
        # collect data until quit message is seen
        while SERVER_QUIT not in self.buffer:
            data = conn.recv(1)
            if not data:
                break
            self.buffer = self.buffer + data
    
                with support.SuppressCrashReport():
                _testcapi.negative_refcount()
        ''')
        rc, out, err = assert_python_failure('-c', code)
        self.assertRegex(err,
                         br'_testcapimodule\.c:[0-9]+: '
                         br'_Py_NegativeRefcount: Assertion failed: '
                         br'object has negative ref count')
    
    # A UnicodeDecodeError object with a bad object attribute
class BadObjectUnicodeDecodeError(UnicodeDecodeError):
    def __init__(self):
        UnicodeDecodeError.__init__(self, 'ascii', bytearray(b''), 0, 1, 'bad')
        self.object = []
    
        def test_incremental_surrogatepass(self):
        # Test incremental decoder for surrogatepass handler:
        # see issue #24214
        # High surrogate
        data = '\uD901'.encode(self.encoding, 'surrogatepass')
        for i in range(1, len(data)):
            dec = codecs.getincrementaldecoder(self.encoding)('surrogatepass')
            self.assertEqual(dec.decode(data[:i]), '')
            self.assertEqual(dec.decode(data[i:], True), '\uD901')
        # Low surrogate
        data = '\uDC02'.encode(self.encoding, 'surrogatepass')
        for i in range(1, len(data)):
            dec = codecs.getincrementaldecoder(self.encoding)('surrogatepass')
            self.assertEqual(dec.decode(data[:i]), '')
            self.assertEqual(dec.decode(data[i:]), '\uDC02')
    
        def add_actions(self):
        ''' Add Action buttons '''
        logger.debug('Add action buttons')
        frame = ttk.Frame(self.page_frame)
        frame.pack(fill=tk.BOTH, padx=5, pady=5, side=tk.BOTTOM)
        btn_cls = ttk.Button(frame, text='Cancel', width=10, command=self.destroy)
        btn_cls.pack(padx=2, side=tk.RIGHT)
        Tooltip(btn_cls, text='Close without saving', wraplength=720)
        btn_ok = ttk.Button(frame, text='OK', width=10, command=self.save_config)
        btn_ok.pack(padx=2, side=tk.RIGHT)
        Tooltip(btn_ok, text='Close and save config', wraplength=720)
        btn_rst = ttk.Button(frame, text='Reset', width=10, command=self.reset)
        btn_rst.pack(padx=2, side=tk.RIGHT)
        Tooltip(btn_rst, text='Reset all plugins to default values', wraplength=720)
        logger.debug('Added action buttons')
    
        def get_mask(self):
        ''' The box for every face will be identical, so set the mask just once
            As gaussian blur technically blurs both sides of the mask, reduce the mask ratio by
            half to give a more expected box '''
        logger.debug('Building box mask')
        mask_ratio = self.config['distance'] / 200
        facesize = self.dummy.shape[0]
        erode = slice(round(facesize * mask_ratio), -round(facesize * mask_ratio))
        mask = self.dummy[:, :, -1]
        mask[erode, erode] = 1.0
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
            win = tk.Frame(self.topwidget,
                       background=background,
                       borderwidth=0)
        label = tk.Label(win,
                         text=self.text,
                         justify=tk.LEFT,
                         background=background,
                         relief=tk.SOLID,
                         borderwidth=0,
                         wraplength=self.wraplength)
    
    
# Update normalizations into Keras custom objects
for name, obj in inspect.getmembers(sys.modules[__name__]):
    if inspect.isclass(obj) and obj.__module__ == __name__:
        get_custom_objects().update({name: obj})

    
            return result_order
    
            self.world = Box2D.b2World()
        self.terrain = None
        self.hull = None
    
            return self.observation, reward[0], done, {'number': self.number, 'guesses': self.guess_count}
    
        d = 0.0
    # Base frequency of outcomes
    base_prob = np.mean(outcome)
    # Construct bins
    judgement_bins = np.arange(n_bins + 1) / n_bins
    # Which bin is each prediction in?
    bin_num = np.digitize(prob,judgement_bins)
    for j_bin in np.unique(bin_num):
        in_bin = bin_num == j_bin
        true_bin_prob = np.mean(outcome[in_bin])
        # Squared distance between true and base times num of obs
        d += np.sum(in_bin) * ((true_bin_prob - base_prob) ** 2)
    return d / len(prob)

    
    
def build_input_data(sentences, labels, vocabulary):
    '''
    Maps sentencs and labels to vectors based on a vocabulary.
    '''
    x = np.array([[vocabulary[word] for word in sentence] for sentence in sentences])
    y = np.array(labels)
    return [x, y]
    
            o_preact = (index_dot(x_, self.W_o) +
                    T.dot(h_, self.U_o) + self.b_o)
        o = T.nnet.sigmoid(o_preact)
    
    import theano
import theano.tensor as T
    
    polynomial = components[-1]
calculate_polynomial = theano.function(inputs=[coefficients, x],
                                       outputs=polynomial,
                                       updates=updates)
    
                    if i < nsteps or frame % 3 > 1:
                    centers = np.array([X[labels == j].mean(0)
                                        for j in range(n_clusters)])
                    nans = np.isnan(centers)
                    centers[nans] = old_centers[nans]