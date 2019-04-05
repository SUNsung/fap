
        
        
class CallCenter(object):
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}  # key: query, value: node
        self.linked_list = LinkedList()
    
        def __init__(self, message_id, message, timestamp):
        self.message_id = message_id
        self.message = message
        self.timestamp = timestamp
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    
def test_cifar():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = cifar10.load_data()
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('fine')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('coarse')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
    
        # Deduplicate output names to handle Siamese networks.
    occurrences = {}
    for n in model.output_names:
        if n not in occurrences:
            occurrences[n] = 1
        else:
            occurrences[n] += 1
    conflict_counter = {n: 0 for n, count in occurrences.items() if count > 1}
    output_names = []
    for n in model.output_names:
        if n in conflict_counter:
            conflict_counter[n] += 1
            n += '_%d' % conflict_counter[n]
        output_names.append(n)
    
    # Instantiate Decoder Model
decoder = Model(latent_inputs, outputs, name='decoder')
decoder.summary()
    
        t = now()
    model.fit(x_train, y_train,
              batch_size=batch_size,
              epochs=epochs,
              verbose=1,
              validation_data=(x_test, y_test))
    print('Training time: %s' % (now() - t))
    score = model.evaluate(x_test, y_test, verbose=0)
    print('Test score:', score[0])
    print('Test accuracy:', score[1])
    
    import six
from . import backend as K
from .utils.generic_utils import deserialize_keras_object
from .utils.generic_utils import serialize_keras_object
    
    Does two benchmarks
    
    Does two benchmarks
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    '''
print(__doc__)
    
    import numpy as np
import matplotlib.pyplot as plt
# Though the following import is not directly being used, it is required
# for 3D projection to work
from mpl_toolkits.mplot3d import Axes3D
    
    plt.subplot(3, 4, 10)
plt.imshow(np.reshape(agglo.labels_, images[0].shape),
           interpolation='nearest', cmap=plt.cm.nipy_spectral)
plt.xticks(())
plt.yticks(())
plt.title('Labels')
plt.show()

    
    The first plot shows the best inertia reached for each combination
of the model (``KMeans`` or ``MiniBatchKMeans``) and the init method
(``init='random'`` or ``init='kmeans++'``) for increasing values of the
``n_init`` parameter that controls the number of initializations.
    
    # The following bandwidth can be automatically detected using
bandwidth = estimate_bandwidth(X, quantile=0.2, n_samples=500)
    
    
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
    
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        from twisted.internet.ssl import (optionsForClientTLS,
                                      CertificateOptions,
                                      platformTrust)
    from twisted.web.client import BrowserLikePolicyForHTTPS
    from twisted.web.iweb import IPolicyForHTTPS
    
    
if __name__ == '__main__':
    main()
    
    
                return self.dp[x][y]
    
    	return memo[m][m-1]
    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
    
def b_expo(a, b):
    res = 0
    while b > 0:
        if b&1:
            res += a
    
      # Try a bit harder to match templated types.  Walk up the nesting
  # stack until we find something that resembles a typename
  # declaration for what we are looking for.
  typename_pattern = (r'\b(?:typename|class|struct)\s+' + re.escape(token) +
                      r'\b')
  block_index = len(nesting_state.stack) - 1
  while block_index >= 0:
    if isinstance(nesting_state.stack[block_index], _NamespaceInfo):
      return False