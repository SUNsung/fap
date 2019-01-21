
        
          If my_dataset (filename) stem is in the directory, the read routine will try
  and load it.  The datasets dictionary will then look like
  dataset['first_day'] -> (first day data dictionary)
  dataset['second_day'] -> (first day data dictionary)
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
      Args:
    gd_file: GraphDef proto text file.
    ckpt_file: TensorFlow Checkpoint file.
    
          scorings.append(dict(
          correctness=correctness,
          sentence=sentence,
          joint_prob=joint_prob,
          word_probs=word_probs))
    scoring_mode = 'full' if self.test_data_name == 'pdp60' else 'partial'
    return utils.compare_substitutions(
        self.question_ids, scorings, scoring_mode)
    
                handler_result = self.handler(sock)
    
            return response
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
        Wraps CookieJar.clear(), is O(n).
    '''
    clearables = []
    for cookie in cookiejar:
        if cookie.name != name:
            continue
        if domain is not None and domain != cookie.domain:
            continue
        if path is not None and path != cookie.path:
            continue
        clearables.append((cookie.domain, cookie.path, cookie.name))
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    
def get_netrc_auth(url, raise_errors=False):
    '''Returns the Requests tuple auth for a given url from netrc.'''
    
        def deregister_hook(self, event, hook):
        '''Deregister a previously registered hook.
        Returns True if the hook existed, False if not.
        '''
    
        return diff

    
    # frequency taken from http://en.wikipedia.org/wiki/Letter_frequency
englishLetterFreq = {'E': 12.70, 'T': 9.06, 'A': 8.17, 'O': 7.51, 'I': 6.97,
                     'N': 6.75, 'S': 6.33, 'H': 6.09, 'R': 5.99, 'D': 4.25,
                     'L': 4.03, 'C': 2.78, 'U': 2.76, 'M': 2.41, 'W': 2.36,
                     'F': 2.23, 'G': 2.02, 'Y': 1.97, 'P': 1.93, 'B': 1.29,
                     'V': 0.98, 'K': 0.77, 'J': 0.15, 'X': 0.15, 'Q': 0.10,
                     'Z': 0.07}
ETAOIN = 'ETAOINSHRDLCUMWFGYPBVKJXQZ'
LETTERS = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'