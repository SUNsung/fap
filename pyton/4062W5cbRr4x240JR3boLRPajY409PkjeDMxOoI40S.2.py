
        
                thumbnails = []
        for thumbnail in video_data.get('images', {}).get('thumbnails', []):
            thumbnail_url = thumbnail.get('source')
            if not thumbnail_url:
                continue
            thumbnails.append({
                'url': thumbnail_url,
                'width': int_or_none(thumbnail.get('width')),
                'height': int_or_none(thumbnail.get('height')),
            })
    
    import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        infile, outfile = args
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
        with open(ZSH_COMPLETION_FILE, 'w') as f:
        f.write(template)
    
        with app.test_request_context():
        assert url_for('index', args=[4, 5, 6]) == '/4,5,6'
    
            def register_template(state):
            state.app.jinja_env.tests[name or f.__name__] = f
    
        def get_namespace(self, namespace, lowercase=True, trim_namespace=True):
        '''Returns a dictionary containing a subset of configuration options
        that match the specified namespace/prefix. Example usage::
    
        for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name, srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
        def dispatch_request(self):
        '''Subclasses have to override this method to implement the
        actual view function code.  This method is called with all
        the arguments from the URL rule.
        '''
        raise NotImplementedError()
    
    
@pytest.fixture
def install_egg(modules_tmpdir, monkeypatch):
    '''Generate egg from package name inside base and put the egg into
    sys.path.'''
    
        @app.route('/')
    def index():
        raise Exception('dummy')
    
        :func:`prepare_exec_for_file` has a side effect where the parent directory
    of the given import is added to :data:`sys.path`. This is reset after the
    test runs.
    '''
    original_path = sys.path[:]
    
    
if __name__ == '__main__':
    main()

    
    
@gen.engine
def e1():
    for i in range(10):
        yield gen.Task(e2)
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
        def finish_tree(self, tree, filename):
        if self.found_future_import:
            return
        if not isinstance(tree, pytree.Node):
            # Empty files (usually __init__.py) show up as a single Leaf
            # instead of a Node, so leave them alone
            return
        first_stmt = tree.children[0]
        if is_docstring(first_stmt):
            # Skip a line and add the import after the docstring
            tree.insert_child(1, Newline())
            pos = 2
        elif first_stmt.prefix:
            # No docstring, but an initial comment (perhaps a #! line).
            # Transfer the initial comment to a new blank line.
            newline = Newline()
            newline.prefix = first_stmt.prefix
            first_stmt.prefix = ''
            tree.insert_child(0, newline)
            pos = 1
        else:
            # No comments or docstring, just insert at the start
            pos = 0
        tree.insert_child(pos, self.new_future_import(None))
        tree.insert_child(pos + 1, Newline())  # terminates the import stmt

    
                @run_on_executor(executor='_Object__executor')
            def f(self):
                return 42
    
            print('Test: Enqueue on empty stack')
        print('Test: Enqueue on non-empty stack')
        print('Test: Multiple enqueue in a row')
        num_items = 3
        for i in range(0, num_items):
            queue.enqueue(i)
    
    
		print('Test: insert checking with pre order traversal')
		expectVal = [50, 30, 10, 7, 25, 40, 38, 70, 60, 80]
		assert_equal(myTree.printPreOrder(), expectVal)
		expectVal = [1, 11, 21, 31, 41, 51, 61, 71, 81, 91]
		assert_equal(myTree2.printPreOrder(), expectVal)
    
    
def datingClassTest():
    '''
    对约会网站的测试方法
    :return: 错误数
    '''
    # 设置测试数据的的一个比例（训练数据集比例=1-hoRatio）
    hoRatio = 0.1  # 测试范围,一部分测试一部分作为样本
    # 从文件中加载数据
    datingDataMat, datingLabels = file2matrix('data/2.KNN/datingTestSet2.txt')  # load data setfrom file
    # 归一化数据
    normMat, ranges, minVals = autoNorm(datingDataMat)
    # m 表示数据的行数，即矩阵的第一维
    m = normMat.shape[0]
    # 设置测试的样本数量， numTestVecs:m表示训练样本的数量
    numTestVecs = int(m * hoRatio)
    print('numTestVecs=', numTestVecs)
    errorCount = 0.0
    for i in range(numTestVecs):
        # 对数据测试
        classifierResult = classify0(normMat[i, :], normMat[numTestVecs:m, :], datingLabels[numTestVecs:m], 3)
        print('the classifier came back with: %d, the real answer is: %d' % (classifierResult, datingLabels[i]))
        if (classifierResult != datingLabels[i]): errorCount += 1.0
    print('the total error rate is: %f' % (errorCount / float(numTestVecs)))
    print(errorCount)
    
    from __future__ import print_function
import sys
import math
from operator import itemgetter
    
            print('-------', hit, rec_count)
        precision = hit / (1.0 * rec_count)
        recall = hit / (1.0 * test_count)
        coverage = len(all_rec_items) / (1.0 * self.item_count)
        popularity = popular_sum / (1.0 * rec_count)
    
    
class SigmoidActivator(object):
    def forward(self, weighted_input):
        return 1.0 / (1.0 + np.exp(-weighted_input))
    
        def calc_gradient(self, x):
        # 初始化遗忘门权重梯度矩阵和偏置项
        self.Wfh_grad, self.Wfx_grad, self.bf_grad = (
            self.init_weight_gradient_mat())
        # 初始化输入门权重梯度矩阵和偏置项
        self.Wih_grad, self.Wix_grad, self.bi_grad = (
            self.init_weight_gradient_mat())
        # 初始化输出门权重梯度矩阵和偏置项
        self.Woh_grad, self.Wox_grad, self.bo_grad = (
            self.init_weight_gradient_mat())
        # 初始化单元状态权重梯度矩阵和偏置项
        self.Wch_grad, self.Wcx_grad, self.bc_grad = (
            self.init_weight_gradient_mat())
    
        # 最后测试一下距离计算方法
    print(' distEclud(dataMat[0], dataMat[1])=', distEclud(dataMat[0], dataMat[1]))