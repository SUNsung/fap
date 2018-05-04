
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
        for i in range(1, n + 1):
        print('==================')
        print('Iteration %02d of %02d' % (i, n))
        print('==================')
        n_features = i * step
        n_informative = n_features / 10
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
TRAIN_FOLDER = '20news-bydate-train'
TEST_FOLDER = '20news-bydate-test'
    
    for s, p in zip(sentences, predicted):
    print(u'The language of '%s' is '%s'' % (s, dataset.target_names[p]))

    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
    import numpy as np
from matplotlib import pyplot as plt
    
    '''
print(__doc__)
    
    The second figure shows the calibration curve of a linear support-vector
classifier (LinearSVC). LinearSVC shows the opposite behavior as Gaussian
naive Bayes: the calibration curve has a sigmoid curve, which is typical for
an under-confident classifier. In the case of LinearSVC, this is caused by the
margin property of the hinge loss, which lets the model focus on hard samples
that are close to the decision boundary (the support vectors).
    
    Shows how shrinkage improves classification.
'''
    
    
plt.show()

    
        def __init__(self, floor, total_spots):
        self.floor = floor
        self.num_spots = total_spots
        self.available_spots = 0
        self.spots = []  # List of ParkingSpots
    
        def _dispatch_call(self, call, employees):
        for employee in employees:
            if employee.call is None:
                employee.take_call(call)
                return employee
        return None
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def test_make_entry(self):
        equal = self.assertEqual
        self.dialog.row = 0
        self.dialog.top = self.root
        entry, label = self.dialog.make_entry('Test:', 'hello')
        equal(label['text'], 'Test:')
    
    

# generic class
class ColorDB:
    def __init__(self, fp):
        lineno = 2
        self.__name = fp.name
        # Maintain several dictionaries for indexing into the color database.
        # Note that while Tk supports RGB intensities of 4, 8, 12, or 16 bits,
        # for now we only support 8 bit intensities.  At least on OpenWindows,
        # all intensities in the /usr/openwin/lib/rgb.txt file are 8-bit
        #
        # key is (red, green, blue) tuple, value is (name, [aliases])
        self.__byrgb = {}
        # key is name, value is (red, green, blue)
        self.__byname = {}
        # all unique names (non-aliases).  built-on demand
        self.__allnames = None
        for line in fp:
            # get this compiled regular expression from derived class
            mo = self._re.match(line)
            if not mo:
                print('Error in', fp.name, ' line', lineno, file=sys.stderr)
                lineno += 1
                continue
            # extract the red, green, blue, and name
            red, green, blue = self._extractrgb(mo)
            name = self._extractname(mo)
            keyname = name.lower()
            # BAW: for now the `name' is just the first named color with the
            # rgb values we find.  Later, we might want to make the two word
            # version the `name', or the CapitalizedVersion, etc.
            key = (red, green, blue)
            foundname, aliases = self.__byrgb.get(key, (name, []))
            if foundname != name and foundname not in aliases:
                aliases.append(name)
            self.__byrgb[key] = (foundname, aliases)
            # add to byname lookup
            self.__byname[keyname] = key
            lineno = lineno + 1
    
            # complex(repr(z)) should recover z exactly, even for complex
        # numbers involving an infinity, nan, or negative zero
        for x in vals:
            for y in vals:
                z = complex(x, y)
                roundtrip = complex(repr(z))
                self.assertFloatsAreIdentical(z.real, roundtrip.real)
                self.assertFloatsAreIdentical(z.imag, roundtrip.imag)
    
        def test_2(self):
        class X(Structure):
            pass
        X()
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)
    
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
    
    from r2.config.extensions import set_extension
from r2.controllers.reddit_base import RedditController, generate_modhash
from r2.controllers.login import handle_login, handle_register
from r2.lib.csrf import csrf_exempt
from r2.lib.validator import (
    json_validate,
    ValidEmail,
    VPasswordChange,
    VRatelimit,
    VSigned,
    VThrottledLogin,
    VUname,
)
    
            '''
        err = None
        if 'name' in notes_json and notes_json['name'] != friend:
            # The 'name' in the JSON is optional, but if present, must
            # match the username from the URL
            err = errors.RedditError('BAD_USERNAME', fields='name')
        if 'note' in notes_json and not c.user.gold:
            err = errors.RedditError('GOLD_REQUIRED', fields='note')
        if err:
            self.on_validation_error(err)
    
        @validate(buttonimage = VInt('i', 0, 14),
              title = nop('title'),
              url = VSanitizedUrl('url'),
              newwindow = VBoolean('newwindow', default = False),
              styled = VBoolean('styled', default=True))
    def GET_button_lite(self, buttonimage, title, url, styled, newwindow):
        c.user = UnloggedUser([c.lang])
        c.user_is_loggedin = False
        c.render_style = 'js'