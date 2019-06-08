
        
            def is_available(self):
        return True if self.vehicle is None else False
    
    
class SpendingByCategory(MRJob):
    
    if not os.path.isfile(ROLLOUT_FILE):
    logger.info('No rollout file found. Writing empty json file to {}'.format(ROLLOUT_FILE))
    with open(ROLLOUT_FILE, 'w') as outfile:
        json.dump({}, outfile, indent=2)
    
    
class ConvLayer(object):
    '''
    Desc:
        用ConvLayer类来实现一个卷积层。下面的代码是初始化一个卷积层，可以在构造函数中设置卷积层的超参数。
    '''
    def __init__(self, input_width, input_height, 
                 channel_number, filter_width, 
                 filter_height, filter_number, 
                 zero_padding, stride, activator,
                 learning_rate):
        self.input_width = input_width
        self.input_height = input_height
        self.channel_number = channel_number
        self.filter_width = filter_width
        self.filter_height = filter_height
        self.filter_number = filter_number
        self.zero_padding = zero_padding
        self.stride = stride
        self.output_width = \
            ConvLayer.calculate_output_size(
            self.input_width, filter_width, zero_padding,
            stride)
        self.output_height = \
            ConvLayer.calculate_output_size(
            self.input_height, filter_height, zero_padding,
            stride)
        self.output_array = np.zeros((self.filter_number, 
            self.output_height, self.output_width))
        self.filters = []
        for i in range(filter_number):
            self.filters.append(Filter(filter_width, 
                filter_height, self.channel_number))
        self.activator = activator
        self.learning_rate = learning_rate
    
        def denorm(self, vec):
        binary = map(lambda i: 1 if i > 0.5 else 0, vec[:,0])
        for i in range(len(self.mask)):
            binary[i] = binary[i] * self.mask[i]
        return reduce(lambda x,y: x + y, binary)
    
    # 计算均值( varSum是计算方差的展开形式 )
mean_ = cumVal/cumN
varSum = (cumSumSq - 2*mean_*cumVal + cumN*mean_*mean_)/cumN
# 输出 数据总量，均值，平方的均值（方差）
print ('数据总量：%d\t均值：%f\t方差：%f' % (cumN, mean_, varSum))
print('reduce report: still alive', file=sys.stderr)

    
            for index in self.dataList:
            wDelta += float(labels[index]) * X[index, :]  # wDelta += label*dataSet
        eta = 1.0/(2.0*self.t)       # calc new: eta
        # calc new: w = (1.0 - 1/t)*w + (eta/k)*wDelta
        wMat = (1.0 - 1.0/self.t)*wMat + (eta/self.k)*wDelta
        for mapperNum in range(1, self.numMappers+1):
            yield (mapperNum, ['w', wMat.tolist()[0]])    # 发出 w
            if self.t < self.options.iterations:
                yield (mapperNum, ['t', self.t+1])        # 增量 T
                for j in range(self.k/self.numMappers):   # emit random ints for mappers iid
                    yield (mapperNum, ['x', random.randint(shape(self.data)[0])])
    
        def mapper_final(self):
        yield('chars', self.chars)
        yield('words', self.words)
        yield('lines', self.lines)
    
    To be invoked as the `ipython history` subcommand.
'''
    
        # Override the default prefix ('usage') to our % magic escape,
    # in a code block.
    def add_usage(self, usage, actions, groups, prefix='::\n\n  %'):
        super(MagicHelpFormatter, self).add_usage(usage, actions, groups, prefix)
    
        @line_magic
    def unload_ext(self, module_str):
        '''Unload an IPython extension by its module name.
        
        Not all extensions can be unloaded, only those which define an
        ``unload_ipython_extension`` function.
        '''
        if not module_str:
            raise UsageError('Missing module name.')
        
        res = self.shell.extension_manager.unload_extension(module_str)
        
        if res == 'no unload function':
            print('The %s extension doesn't define how to unload it.' % module_str)
        elif res == 'not loaded':
            print('The %s extension is not loaded.' % module_str)
    
        Parameters
    ----------
    figs : tuple
        A tuple of ints giving the figure numbers of the figures to return.
    '''
    from matplotlib._pylab_helpers import Gcf
    if not fig_nums:
        fig_managers = Gcf.get_all_fig_managers()
        return [fm.canvas.figure for fm in fig_managers]
    else:
        figs = []
        for num in fig_nums:
            f = Gcf.figs.get(num)
            if f is None:
                print('Warning: figure %s not available.' % num)
            else:
                figs.append(f.canvas.figure)
        return figs