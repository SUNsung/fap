
        
        train_model.fit(epochs=epochs,
                steps_per_epoch=steps_per_epoch)
    
    model = Sequential()
model.add(Dense(512, activation='relu', input_shape=(784,)))
model.add(Dropout(0.2))
model.add(Dense(512, activation='relu'))
model.add(Dropout(0.2))
model.add(Dense(num_classes, activation='softmax'))
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
    model1 = create_network(num_classes=num_classes, **network1)
history_model1 = model1.fit(x_train,
                            y_train,
                            batch_size=batch_size,
                            epochs=epochs,
                            verbose=1,
                            validation_split=0.1)
    
        :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
            while self.values[new_key] is not None and self.values[new_key] != key:
            new_key = self.__hash_double_function(key, data, i) if \
                self.balanced_factor() >= self.lim_charge else None
            if new_key is None: break 
            else: i += 1
    
            print('Enter the first string: ', end='')
        S1 = raw_input().strip()
    
    	if len(sys.argv) == 1:
		try:
			n = int(raw_input('Enter a number: '))
			print(partition(n))
		except ValueError:
			print('Please enter a number.')
	else:
		try:
			n = int(sys.argv[1])
			print(partition(n))
		except ValueError:
			print('Please pass a number.')
    
    	digest = reformatHex(a0) + reformatHex(b0) + reformatHex(c0) + reformatHex(d0)
	return digest
    
        # Loop through each person in the training set
    for class_dir in os.listdir(train_dir):
        if not os.path.isdir(os.path.join(train_dir, class_dir)):
            continue
    
    from ..utils import get_w, get_shape
from ..initializers import constant
    
    
def conv2d(x, kernel_size, out_channels,
           act_fn=relu,
           strides=1,
           padding='SAME',
           name=None,
           reuse=None):
    '''2-D 卷积层
    Input shape:  [batch_size, in_h, in_w, in_channels]
    Output shape: [batch_size, out_h, out_w, out_channels]
    
    
    
    
def process_code(read_filehandle, text_filehandle, line, linenum, sourcefile, codedir, name, index, indent_depth):
    fenced = (line.strip() == '```')
    if fenced:
        try:
            line = read_filehandle.next()
            linenum += 1
            text_filehandle.write('\n')
        except StopIteration:
            return ('', linenum)
    start_linenum = linenum
    has_actual_code = False
    has_question_marks = False
    linebuffer = []
    while ((fenced and line.strip() != '```') or (not fenced and is_inside_code(line, indent_depth))):
        # copy comments to plain text for spell check
        comment_idx = line.find('//')
        no_comment_line = line
        if comment_idx >= 0:
            no_comment_line = line[:comment_idx].strip()
            text_filehandle.write(line[comment_idx + 2:])
        else:
            # write empty line so line numbers stay stable
            text_filehandle.write('\n')
    
        def textrank(self, sentence, topK=20, withWeight=False, allowPOS=('ns', 'n', 'vn', 'v'), withFlag=False):
        '''
        Extract keywords from sentence using TextRank algorithm.
        Parameter:
            - topK: return how many top keywords. `None` for all possible words.
            - withWeight: if True, return a list of (word, weight);
                          if False, return a list of words.
            - allowPOS: the allowed POS list eg. ['ns', 'n', 'vn', 'v'].
                        if the POS of w is not in this list, it will be filtered.
            - withFlag: if True, return a list of pair(word, weight) like posseg.cut
                        if False, return a list of words
        '''
        self.pos_filt = frozenset(allowPOS)
        g = UndirectWeightedGraph()
        cm = defaultdict(int)
        words = tuple(self.tokenizer.cut(sentence))
        for i, wp in enumerate(words):
            if self.pairfilter(wp):
                for j in xrange(i + 1, i + self.span):
                    if j >= len(words):
                        break
                    if not self.pairfilter(words[j]):
                        continue
                    if allowPOS and withFlag:
                        cm[(wp, words[j])] += 1
                    else:
                        cm[(wp.word, words[j].word)] += 1
    
    s = '此外，公司拟对全资子公司吉林欧亚置业有限公司增资4.3亿元，增资后，吉林欧亚置业注册资本由7000万元增加到5亿元。吉林欧亚置业主要经营范围为房地产开发及百货零售等业务。目前在建吉林欧亚城市商业综合体项目。2013年，实现营业收入0万元，实现净利润-139.13万元。'
for x, w in jieba.analyse.extract_tags(s, withWeight=True):
    print('%s %s' % (x, w))
    
    file_name = args[0]
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
        def testCutForSearch(self):
        for content in test_contents:
            result = jieba.cut_for_search(content)
            assert isinstance(result, types.GeneratorType), 'Test CutForSearch Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test CutForSearch error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testCutForSearch', file=sys.stderr)
    
    jieba.enable_parallel()