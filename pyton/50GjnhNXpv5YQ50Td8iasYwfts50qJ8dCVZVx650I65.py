
        
            def __init__(self, rank):
        self.state = CallState.READY
        self.rank = rank
        self.employee = None
    
        def approve_friend_request(self, from_user_id, to_user_id):
        pass
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
    
class RemoveDuplicateUrls(MRJob):
    
    ### OUTPUT ###
# ['Student',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Student',
#  'Scientist',
#  'Professor']

    
        @staticmethod
    def check_range(request):
        if 0 <= request < 10:
            print('request {} handled in handler 0'.format(request))
            return True
    
            return transaction
    
    '''
Implementation of the state pattern
    
        def do_something(self, something):
        return 'Doing %s' % something
    
    ### OUTPUT ###
# PRODUCT LIST:
# (Fetching from Data Store)
# cheese
# eggs
# milk
#
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Cheese, Price: 2.00, Quantity: 10
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Eggs, Price: 0.20, Quantity: 100
# (Fetching from Data Store)
# PRODUCT INFORMATION:
# Name: Milk, Price: 1.50, Quantity: 10
# (Fetching from Data Store)
# That product 'arepas' does not exist in the records

    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
    # female = 0, Male = 1
train_df['Gender'] = train_df['Sex'].map( {'female': 0, 'male': 1} ).astype(int)
    
        # Arguments
        include_top: whether to include the 3 fully-connected
            layers at the top of the network.
        weights: one of `None` (random initialization)
            or 'imagenet' (pre-training on ImageNet).
        input_tensor: optional Keras tensor (i.e. output of `layers.Input()`)
            to use as image input for the model.
    
            for i in xrange(4):
            if X[i] is None:
                # if channel is None, fill it with zeros of the correct
                # dtype
                dt = out_array.dtype
                if output_pixel_vals:
                    dt = 'uint8'
                out_array[:, :, i] = numpy.zeros(
                    out_shape,
                    dtype=dt
                ) + channel_defaults[i]
            else:
                # use a recurrent call to compute the channel and store it
                # in the output
                out_array[:, :, i] = tile_raster_images(
                    X[i], img_shape, tile_shape, tile_spacing,
                    scale_rows_to_unit_interval, output_pixel_vals)
        return out_array
    
        cost = sequence_categorical_crossentropy(logreg_layer.p_y_given_x,
                                             x[1:],
                                             mask[1:]) / batch_size
    
    
def mso(sample_len=1000, n_samples = 1):
    '''
    mso(sample_len=1000, n_samples = 1) -> input
    Generate the Multiple Sinewave Oscillator time-series, a sum of two sines
    with incommensurable periods. Parameters are:
        - sample_len: length of the time-series in timesteps
        - n_samples: number of samples to generate
    '''
    signals = []
    for _ in range(n_samples):
        phase = np.random.rand()
        x = np.atleast_2d(np.arange(sample_len)).T
        signals.append(np.sin(0.2 * x + phase) + np.sin(0.311 * x + phase))
    return signals
    
    
def make_all_content():
    dir_list = os.listdir(os.path.abspath(os.curdir))
    for fi_dir in dir_list:
        # 忽略‘script’的目录
        if os.path.isdir(fi_dir) and 'script' not in fi_dir:
            make_content(fi_dir)
    
                        if len(_) > 1 and _ not in (_.lower(), _.upper()):
                        break
    
        def delRegKey(self, regKey, regValue):
        self._operation = REGISTRY_OPERATION.DELETE
    
        if len(sys.argv) > 1:
        url = sys.argv[-1]
        if not url.startswith('http'):
            url = 'http://%s' % url
        options.url = url
    else:
        parser.print_help()
        raise SystemExit
    
            rootQuery = queries[DBMS.MAXDB].columns
    
            # Note:  on a platform using IEEE-754 double arithmetic, this can
        # never return 0.0 (asserted by Tim; proof too long for a comment).
        return (x / 30269.0 + y / 30307.0 + z / 30323.0) % 1.0