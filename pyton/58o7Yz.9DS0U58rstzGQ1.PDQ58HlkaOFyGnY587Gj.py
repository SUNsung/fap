
        
            def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
    from mrjob.job import MRJob
    
        def mapper(self, _, line):
        yield line, 1
    
        def __init__(self, db):
        self.db = db
        pass
    
    
class PostgresSimpleLookup(Lookup):
    def as_sql(self, qn, connection):
        lhs, lhs_params = self.process_lhs(qn, connection)
        rhs, rhs_params = self.process_rhs(qn, connection)
        params = lhs_params + rhs_params
        return '%s %s %s' % (lhs, self.operator, rhs), params
    
    
class RangeMaxValueValidator(MaxValueValidator):
    def compare(self, a, b):
        return a.upper is None or a.upper > b
    message = _('Ensure that this range is completely less than or equal to %(limit_value)s.')
    
        @classmethod
    def clear_expired(cls):
        pass

    
        def get_decoded(self):
        session_store_class = self.get_session_store_class()
        return session_store_class().decode(self.session_data)

    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
    
def test_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
        # References
        - [Convolutional LSTM Network: A Machine Learning Approach for
          Precipitation Nowcasting](http://arxiv.org/abs/1506.04214v1)
          The current implementation does not include the feedback loop on the
          cells output
    '''
    
    Settings: rotation = 30.0
----------------------------------------------------------------------------
Epoch     | ImageGenerator | ImageGenerator | AugmentLayer  | Augment Layer
Number    | %Accuracy      | Performance    | %Accuracy     | Performance
----------------------------------------------------------------------------
1         | 43.46          | 15ms/step      | 42.21         | 334us/step
2         | 48.95          | 11ms/step      | 48.06         | 282us/step
8         | 63.59          | 11ms/step      | 61.35         | 290us/step
25        | 72.25          | 12ms/step      | 71.08         | 287us/step
100       | 76.35          | 11ms/step      | 74.62         | 286us/step
---------------------------------------------------------------------------
(Corner process and rotation precision by `ImageGenerator` and `AugmentLayer`
are slightly different.)
'''
    
                for t in range(n_frames):
                x_shift = xstart + directionx * t
                y_shift = ystart + directiony * t
                noisy_movies[i, t, x_shift - w: x_shift + w,
                             y_shift - w: y_shift + w, 0] += 1
    
    Output after 4 epochs on CPU: ~0.8146
Time per epoch on CPU (Core i7): ~150s.
'''
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
                if stream_id not in self.streams:
                log.e('[Error] Invalid video format.')
                log.e('Run \'-i\' command with no specific video format to view all available formats.')
                exit(2)
        else:
            # Extract stream with the best quality
            stream_id = self.streams_sorted[0]['id']
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    from .theplatform import theplatform_download_by_pid
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(urls, title, ext, size, output_dir, merge=False)
    
    import json
import urllib.parse
import base64
import binascii
import re
    
        if title is None:
      title = url[0]
    
            #Sorting all filenames in the directory, to maintain the order of the PDF
        allmd.sort()
    
        '''Simply echoes the msg ids'''
    
        move = Action('move')
    person = Person('Jack', move)
    person.do_action().amount('5m').stop()
    
        @data.setter
    def data(self, value):
        self._data = value
        self.notify()
    
        def __exit__(self, Type, value, traceback):
        if self.item is not None:
            self._queue.put(self.item)
            self.item = None
    
        def clone(self, **attrs):
        '''Clone a prototype and update inner attributes dictionary'''
        # Python in Practice, Mark Summerfield
        obj = self.__class__()
        obj.__dict__.update(attrs)
        return obj
    
    production code which is untestable:
    
        __metaclass__ = abc.ABCMeta