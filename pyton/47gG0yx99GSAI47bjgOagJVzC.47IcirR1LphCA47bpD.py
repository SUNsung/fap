
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
    
def test_context_available(app, client):
    class ContextConverter(BaseConverter):
        def to_python(self, value):
            assert has_request_context()
            return value
    
        return (x_train, y_train), (x_test, y_test)

    
        with gzip.open(paths[3], 'rb') as imgpath:
        x_test = np.frombuffer(imgpath.read(), np.uint8,
                               offset=16).reshape(len(y_test), 28, 28)
    
        model.add(Dense(num_classes))
    model.add(Activation('softmax'))
    model.compile(loss='categorical_crossentropy',
                  optimizer=optimizer,
                  metrics=['accuracy'])
    return model
    
    def train_data_set():
    normalizer = Normalizer()
    data_set = []
    labels = []
    for i in range(0, 256):
        n = normalizer.norm(i)
        data_set.append(n)
        labels.append(n)
    return labels, data_set
    
    
def data_set():
    x = [np.array([[1], [2], [3]]),
         np.array([[2], [3], [4]])]
    d = np.array([[1], [2]])
    return x, d
    
        def dump(self, **kwArgs):
        print('root.data: %s' % self.root.data)
        print('root.children_data: %s' % self.root.children_data)
        if kwArgs.has_key('dump_grad'):
            print('W_grad: %s' % self.W_grad)
            print('b_grad: %s' % self.b_grad)
    
        # 计算相似度的方法
    myMat = mat(loadExData3())
    # print myMat
    # 计算相似度的第一种方式
    print(recommend(myMat, 1, estMethod=svdEst))
    # 计算相似度的第二种方式
    print(recommend(myMat, 1, estMethod=svdEst, simMeas=pearsSim))
    
        def steps(self):
        '''
        step方法定义执行的步骤。
        执行顺序不必完全遵循map-reduce模式。
        例如：
            1. map-reduce-reduce-reduce
            2. map-reduce-map-reduce-map-reduce
        在step方法里，需要为mrjob指定mapper和reducer的名称。如果没有，它将默认调用mapper和reducer方法。
    
        def mapper_final(self):
        yield('chars', self.chars)
        yield('words', self.words)
        yield('lines', self.lines)
    
        def insert(self, val):
        if val not in self.idxs:
            self.nums.append(val)
            self.idxs[val] = len(self.nums)-1
            return True
        return False
    
    
if __name__ == '__main__':
    
        def pow2_factor(num):
        '''factor n into a power of 2 times an odd number'''
        power = 0
        while num % 2 == 0:
            num /= 2
            power += 1
        return power, num
    
    
# Python solution with only one table for B (~196ms):
def multiply(self, a, b):
    '''
    :type A: List[List[int]]
    :type B: List[List[int]]
    :rtype: List[List[int]]
    '''
    if a is None or b is None: return None
    m, n, l = len(a), len(a[0]), len(b[0])
    if len(b) != n:
        raise Exception('A's column number must be equal to B's row number.')
    c = [[0 for _ in range(l)] for _ in range(m)]
    table_b = {}
    for k, row in enumerate(b):
        table_b[k] = {}
        for j, eleB in enumerate(row):
            if eleB: table_b[k][j] = eleB
    for i, row in enumerate(a):
        for k, eleA in enumerate(row):
            if eleA:
                for j, eleB in table_b[k].iteritems():
                    c[i][j] += eleA * eleB
    return c