
        
            def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
        def mapper(self, _, line):
        yield line, 1
    
        def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]
    
    
def load_all_labels(records):
  '''Reads TensorFlow examples from a RecordReader and returns only the labels.
    
    # Check to make sure the RNN is the one we used in the paper.
if N == 50:
  assert abs(rnn['W'][0,0] - 0.06239899) < 1e-8, 'Error in random seed?'
  rem_check = nreplications * train_percentage
  assert  abs(rem_check - int(rem_check)) < 1e-8, \
    'Train percentage  * nreplications should be integral number.'
    
      E = len(data_e)
  spikes_e = []
  for e in range(E):
    data = data_e[e]
    N,T = data.shape
    data_s = np.zeros([N,T]).astype(np.int)
    for n in range(N):
      f = data[n,:]
      s = rng.poisson(f*max_firing_rate*dt, size=T)
      data_s[n,:] = s
    spikes_e.append(data_s)
    
    
def flatten(list_of_lists):
  '''Takes a list of lists and returns a list of the elements.
    
    
def variable_summaries(var, name):
  '''Attach a lot of summaries to a Tensor.'''
  mean = tf.reduce_mean(var)
  tf.summary.scalar('mean/' + name, mean)
  with tf.name_scope('stddev'):
    stddev = tf.sqrt(tf.reduce_sum(tf.square(var - mean)))
  tf.summary.scalar('sttdev/' + name, stddev)
  tf.summary.scalar('max/' + name, tf.reduce_max(var))
  tf.summary.scalar('min/' + name, tf.reduce_min(var))
  tf.summary.histogram(name, var)
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
        @mock.patch('certbot_apache.display_ops.display_util')
    @certbot_util.patch_get_utility()
    @mock.patch('certbot_apache.display_ops.logger')
    def test_small_display(self, mock_logger, mock_util, mock_display_util):
        mock_display_util.WIDTH = 20
        mock_util().menu.return_value = (display_util.OK, 0)
        self._call(self.vhosts)
    
    
# http://docs.readthedocs.org/en/latest/faq.html#i-get-import-errors-on-libraries-that-depend-on-c-modules
# c.f. #262
sys.modules.update(
    (mod_name, mock.MagicMock()) for mod_name in ['augeas'])
    
        def initialize(self, *args, **kwargs):
        ''' Create the mtcnn detector '''
        super().initialize(*args, **kwargs)
        logger.info('Initializing Manual Detector...')
        self.init.set()
        logger.info('Initialized Manual Detector.')
    
    This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
'''
    
    
class RollingBuffer(collections.deque):
    '''File-like that keeps a certain number of lines of text in memory.'''
    def write(self, buffer):
        ''' Write line to buffer '''
        for line in buffer.rstrip().splitlines():
            self.append(line + '\n')
    
        def debug_queue_sizes(self, update_secs):
        ''' Output the queue sizes
            logged to INFO so it also displays in console
        '''
        while True:
            for name in sorted(self.queues.keys()):
                logger.info('%s: %s', name, self.queues[name].qsize())
            sleep(update_secs)
    
            print('Success: test_merge_sort')
    
    		return True 