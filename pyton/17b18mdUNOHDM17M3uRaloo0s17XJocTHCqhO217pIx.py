
        
        try:
	xrange		#Python 2
except NameError:
	xrange = range	#Python 3
    
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
    
    from matplotlib import pyplot as plt
def plot_heterogeneity(heterogeneity, k):
    plt.figure(figsize=(7,4))
    plt.plot(heterogeneity, linewidth=4)
    plt.xlabel('# Iterations')
    plt.ylabel('Heterogeneity')
    plt.title('Heterogeneity of clustering over time, K={0:d}'.format(k))
    plt.rcParams.update({'font.size': 16})
    plt.show()
    
    
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
    
    
def test_regularization_shared_layer():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
    batch_size = 128
num_classes = 10
epochs = 20
    
        `log(cosh(x))` is approximately equal to `(x ** 2) / 2` for small `x` and
    to `abs(x) - log(2)` for large `x`. This means that 'logcosh' works mostly
    like the mean squared error, but will not be so strongly affected by the
    occasional wildly incorrect prediction.
    
    # If true, '()' will be appended to :func: etc. cross-reference text.
#add_function_parentheses = True
    
            file = request.files['file']
    
    # Load a second sample picture and learn how to recognize it.
biden_image = face_recognition.load_image_file('biden.jpg')
biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
        # Load a sample picture and learn how to recognize it.
    obama_image = face_recognition.load_image_file('obama.jpg')
    obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    Equations take from Yaniv, Yates, & Smith (1991):
  'Measures of Descrimination Skill in Probabilistic Judgement'
    
    # Now I have my proportion of survivors, simply round them such that if <0.5
# I predict they dont surivive, and if >= 0.5 they do
survival_table[ survival_table < 0.5 ] = 0
survival_table[ survival_table >= 0.5 ] = 1
    
    # female = 0, Male = 1
train_df['Gender'] = train_df['Sex'].map( {'female': 0, 'male': 1} ).astype(int)
    
    
def load_data_and_labels():
    '''
    Loads MR polarity data from files, splits the data into words and generates labels.
    Returns split sentences and labels.
    '''
    # Load data from files
    positive_examples = list(open('./data/rt-polarity.pos', encoding='ISO-8859-1').readlines())
    positive_examples = [s.strip() for s in positive_examples]
    negative_examples = list(open('./data/rt-polarity.neg', encoding='ISO-8859-1').readlines())
    negative_examples = [s.strip() for s in negative_examples]
    # Split by words
    x_text = positive_examples + negative_examples
    x_text = [clean_str(sent) for sent in x_text]
    x_text = [s.split(' ') for s in x_text]
    # Generate labels
    positive_labels = [[0, 1] for _ in positive_examples]
    negative_labels = [[1, 0] for _ in negative_examples]
    y = np.concatenate([positive_labels, negative_labels], 0)
    return [x_text, y]
    
            # generate a matrix to store the output
        dt = X.dtype
        if output_pixel_vals:
            dt = 'uint8'
        out_array = numpy.zeros(out_shape, dtype=dt)
    
        for _ in range(n_samples):
        history = collections.deque(1.2 * np.ones(history_len) + 0.2 * \
                                    (np.random.rand(history_len) - 0.5))
        # Preallocate the array for the time-series
        inp = np.zeros((sample_len,1))
        
        for timestep in range(sample_len):
            for _ in range(delta_t):
                xtau = history.popleft()
                history.append(timeseries)
                timeseries = history[-1] + (0.2 * xtau / (1.0 + xtau ** 10) - \
                             0.1 * history[-1]) / delta_t
            inp[timestep] = timeseries
        
        # Squash timeseries through tanh
        inp = np.tanh(inp - 1)
        samples.append(inp)
    return samples
    
        def show_decomp(i=0):
        plot_image_components(data[i], Xproj[i],
                              pca.mean_, pca.components_)
    
    interact(show_decomp, i=(0, data.shape[0] - 1));
