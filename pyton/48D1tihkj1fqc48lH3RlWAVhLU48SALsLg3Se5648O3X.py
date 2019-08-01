
        
        
class LookupService(object):
    
        def add_link_to_crawl(self, url):
        '''Add the given link to `links_to_crawl`.'''
        pass
    
    
def template_function(getter, converter=False, to_save=False):
    data = getter()
    print('Got `{}`'.format(data))
    
        # A Shop that sells only cats
    cat_shop = PetShop(Cat)
    cat_shop.show_pet()
    print('')
    
    
class Delegate(object):
    def __init__(self):
        self.p1 = 123
    
    *What does this example do?
    
    
# ConcreteImplementor 1/2
class DrawingAPI1(object):
    def draw_circle(self, x, y, radius):
        print('API1.circle at {}:{} radius {}'.format(x, y, radius))
    
        @staticmethod
    def ask_load(filepath, filetypes):
        ''' Pop-up to get path to a file '''
        filename = FileHandler('filename', filetypes).retfile
        if filename:
            logger.debug(filename)
            filepath.set(filename)
    
        def add_info(self):
        ''' Plugin information '''
        info_frame = ttk.Frame(self.optsframe)
        info_frame.pack(fill=tk.X, expand=True)
        lbl = ttk.Label(info_frame, text='About:', width=20, anchor=tk.W)
        lbl.pack(padx=5, pady=5, side=tk.LEFT, anchor=tk.N)
        info = ttk.Label(info_frame, text=self.plugin_info)
        info.pack(padx=5, pady=5, fill=tk.X, expand=True)
        info.bind('<Configure>', adjust_wraplength)

    
    from queue import Queue, Empty as QueueEmpty  # pylint: disable=unused-import; # noqa
from time import sleep
    
        # disconnect dependencies between checkpointed tensors
    checkpoints_disconnected = {}
    for x in checkpoints:
        if x.op and x.op.name is not None:
            grad_node = tf.stop_gradient(x, name=x.op.name+'_sg')
        else:
            grad_node = tf.stop_gradient(x)
        checkpoints_disconnected[x] = grad_node
    
        What is displayed in the Display Frame varies
    depending on what tasked is being run '''
    
    
class Adjustment():
    ''' Parent class for adjustments '''
    def __init__(self, configfile=None, config=None):
        logger.debug('Initializing %s: (configfile: %s, config: %s)',
                     self.__class__.__name__, configfile, config)
        self.config = self.set_config(configfile, config)
        logger.debug('config: %s', self.config)
        logger.debug('Initialized %s', self.__class__.__name__)
    
    
def get_config(plugin_name, configfile=None):
    ''' Return the config for the requested model '''
    return Config(plugin_name, configfile=configfile).config_dict
    
        def blend(self, mask):
        ''' Blur mask if requested '''
        logger.trace('Blending mask')
        mask = BlurMask(self.config['type'],
                        mask,
                        self.config['radius'],
                        self.config['passes']).blurred
        return mask

    
    
_HELPTEXT = 'Options for blending the edges between the mask and the background image'
    
        # list of integers
    result = s.iloc[[0, 2, 3, 4, 5]]
    expected = s.reindex(s.index[[0, 2, 3, 4, 5]])
    assert_series_equal(result, expected)
    
    
class TestReductions:
    def test_min_max(self):
        arr = period_array(
            [
                '2000-01-03',
                '2000-01-03',
                'NaT',
                '2000-01-02',
                '2000-01-05',
                '2000-01-04',
            ],
            freq='D',
        )
    
        @pytest.mark.xfail(
        reason='casts to object-dtype and then tries to add timestamps',
        raises=TypeError,
        strict=True,
    )
    def test_mean_datetimelike_numeric_only_false(self):
        df = pd.DataFrame(
            {
                'A': np.arange(3),
                'B': pd.date_range('2016-01-01', periods=3),
                'C': pd.timedelta_range('1D', periods=3),
                'D': pd.period_range('2016', periods=3, freq='A'),
            }
        )
    
        @pytest.mark.parametrize(
        'input_vals',
        [
            ([1, 2]),
            (['1', '2']),
            (list(pd.date_range('1/1/2011', periods=2, freq='H'))),
            (list(pd.date_range('1/1/2011', periods=2, freq='H', tz='US/Eastern'))),
            ([pd.Interval(left=0, right=5)]),
        ],
    )
    def test_constructor_list_str(self, input_vals, string_dtype):
        # GH 16605
        # Ensure that data elements are converted to strings when
        # dtype is str, 'str', or 'U'
    
        expected = DataFrame(
        [a_expected, b_expected], columns=['val'], index=Index(['a', 'b'], name='key')
    )
    result = df.groupby('key').quantile(q, interpolation=interpolation)
    
    
class TestDatetimeIndexRendering:
    def test_dti_repr_short(self):
        dr = pd.date_range(start='1/1/2012', periods=1)
        repr(dr)
    
    
def test_from_product_datetimeindex():
    dt_index = date_range('2000-01-01', periods=2)
    mi = pd.MultiIndex.from_product([[1, 2], dt_index])
    etalon = construct_1d_object_array_from_listlike(
        [
            (1, pd.Timestamp('2000-01-01')),
            (1, pd.Timestamp('2000-01-02')),
            (2, pd.Timestamp('2000-01-01')),
            (2, pd.Timestamp('2000-01-02')),
        ]
    )
    tm.assert_numpy_array_equal(mi.values, etalon)
    
            print('Test: Two or more element stack (general case)')
        num_items = 10
        numbers = [randint(0, 10) for x in range(num_items)]
        sorted_stack = self.get_sorted_stack(stack, numbers)
        sorted_numbers = []
        for _ in range(num_items):
            sorted_numbers.append(sorted_stack.pop())
        assert_equal(sorted_numbers, sorted(numbers, reverse=True))
    
    			while successor.leftChild is not None:
				successorParent = successor
				successor = successor.leftChild
    
    def main():
    testing = TestBinaryTree()
    testing.test_insert_traversals()
    testing.test_max_min_nodes()
    testing.test_delete()
    
if __name__=='__main__':
    main()
    
        # if everything correct
    return True
    
        def remove_key(self, key):
        self._remove_key(self.root, key)
    
            with open(self.file_in_name, 'rb') as file_1, open(self.file_out_name, 'rb') as file_2:
            content_1 = file_1.read()
            content_2 = file_2.read()
    
            for num in arr:
            digit_number = num // position % 10
            queue_list[digit_number].append(num)
    
    def remove_dups_wothout_set(head):
    '''
    Time Complexity: O(N^2)
    Space Complexity: O(1)
    '''
    current = head
    while current:
        runner = current
        while runner.next:
            if runner.next.val == current.val:
                runner.next = runner.next.next
            else:
                runner = runner.next
        current = current.next
    
      def testFnScript(self):
    script = completion.Script('identity', tc.identity)
    self.assertIn('--arg1', script)
    self.assertIn('--arg2', script)
    self.assertIn('--arg3', script)
    self.assertIn('--arg4', script)
    
      def collect_widgets(self):
    '''Returns all the widgets the Collector wants.'''
    return [widget.Widget() for _ in range(self.desired_widget_count)]
    
    
if __name__ == '__main__':
  testutils.main()

    
    '''Test the test utilities for Fire's tests.'''
    
    This file is useful for replicating test results manually.
'''