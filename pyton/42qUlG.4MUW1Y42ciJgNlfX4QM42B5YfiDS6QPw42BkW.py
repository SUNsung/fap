
        
          # Plotting
  f = plt.figure(figsize=(18,20), tight_layout=True)
  plot_lfads_timeseries(train_bxtxd, train_model_vals,
                        train_ext_input_bxtxi,
                        truth_bxtxn=train_truth_bxtxd,
                        conversion_factor=cf, bidx=bidx,
                        output_dist=output_dist, col_title='Train')
  plot_lfads_timeseries(valid_bxtxd, valid_model_vals,
                        valid_ext_input_bxtxi,
                        truth_bxtxn=valid_truth_bxtxd,
                        conversion_factor=cf, bidx=bidx,
                        output_dist=output_dist,
                        subplot_cidx=1, col_title='Valid')
    
    
def tensor_bxtxn_to_list_t_bxn(tensor_bxtxn):
  '''Convert a numpy tensor with shape BxTxN to a length T list of numpy tensors
  with shape BxT.
    
      # Two consecutive substitutions always belong to the same question
  question_ids = [qid for i, qid in enumerate(question_ids) if i % 2 == 0]
  assert len(question_ids) == len(prediction_correctness)
  num_questions = len(set(question_ids))
    
          if len(example) > num_steps:
        final_x = example[:num_steps]
        final_y = example[1:(num_steps + 1)]
        w[i] = 1
    
    
def percent_correct(real_sequence, fake_sequences):
  '''Determine the percent of tokens correctly generated within a batch.'''
  identical = 0.
  for fake_sequence in fake_sequences:
    for real, fake in zip(real_sequence, fake_sequence):
      if real == fake:
        identical += 1.
  return identical / recursive_length(fake_sequences)

    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
    
# -- Options for Texinfo output -------------------------------------------
    
        '''
    def __init__(self, *args, **kwargs):
        super(AugeasConfigurator, self).__init__(*args, **kwargs)
    
    UIR_ARGS = ['always', 'set', 'Content-Security-Policy',
            'upgrade-insecure-requests']
    
        # Additional stuff for the LaTeX preamble.
    #
    # 'preamble': '',
    
        def backward(self, output):
        return 1 - output * output
    
        def get_bias(self):
        return self.bias
    
    
if __name__ == '__main__':
    '''
    Desc:
        main 函数，训练我们的线性单元，并进行预测
    Args:
        None
    Returns:
        None
    '''
    # 首先训练我们的线性单元
    linear_unit = train_linear_unit()
    # 打印训练获得的权重 和 偏置
    print(linear_unit)
    # 测试
    print('Work 3.4 years, monthly salary = %.2f' % linear_unit.predict([3.4]))
    print('Work 15 years, monthly salary = %.2f' % linear_unit.predict([15]))
    print('Work 1.5 years, monthly salary = %.2f' % linear_unit.predict([1.5]))
    print('Work 6.3 years, monthly salary = %.2f' % linear_unit.predict([6.3]))
    plot(linear_unit)

    
    
# 图像数据加载器
class ImageLoader(Loader):
    def get_picture(self, content, index):
        '''
        内部函数，从文件中获取图像
        '''
        start = index * 28 * 28 + 16
        picture = []
        for i in range(28):
            picture.append([])
            for j in range(28):
                picture[i].append(
                    self.to_int(content[start + i * 28 + j]))
        return picture
    
    
    def predict(self, input_vec):
        '''
        Desc:
            输入向量，输出感知器的计算结果
        Args:
            input_vec —— 输入向量
        Returns:
            感知器的计算结果
        '''
        # 将输入向量的计算结果返回
        # 调用 激活函数 activator ，将输入向量输入，计算感知器的结果
        # reduce() 函数是 python 2 的内置函数，从 python 3 开始移到了 functools 模块
        # reduce() 从左到右对一个序列的项累计地应用有两个参数的函数，以此合并序列到一个单一值，例如 reduce(lambda x,y: x+y, [1,2,3,4,5]) 计算的就是 ((((1+2)+3)+4)+5)
        # map() 接收一个函数 f 和一个 list ，并通过把函数 f 依次作用在 list 的每个元素上，得到一个新的 list 返回。比如我们的 f 函数是计算平方， map(f, [1,2,3,4,5]) ===> 返回 [1,4,9,16,25]
        # zip() 接收任意多个（包括 0 个和 1个）序列作为参数，返回一个 tuple 列表。例：x = [1,2,3] y = [4,5,6] z = [7,8,9] xyz = zip(x, y, z) ===> [(1,4,7), (2,5,8), (3,6,9)]
        return self.activator(reduce(lambda a, b: a + b,map(lambda (x, w): x * w, zip(input_vec, self.weights)), 0.0) + self.bias)
    
        def calc_gradient(self, parent):
        '''
        计算每个节点权重的梯度，并将它们求和，得到最终的梯度
        '''
        W_grad = np.zeros((self.node_width, 
                            self.node_width * self.child_count))
        b_grad = np.zeros((self.node_width, 1))
        if not parent.children:
            return W_grad, b_grad
        parent.W_grad = np.dot(parent.delta, parent.children_data.T)
        parent.b_grad = parent.delta
        W_grad += parent.W_grad
        b_grad += parent.b_grad
        for child in parent.children:
            W, b = self.calc_gradient(child)
            W_grad += W
            b_grad += b
        return W_grad, b_grad
    
        topNfeat = 20
    eigValInd = eigValInd[:-(topNfeat+1):-1]
    cov_all_score = float(sum(eigvals))
    sum_cov_score = 0
    for i in range(0, len(eigValInd)):
        line_cov_score = float(eigvals[eigValInd[i]])
        sum_cov_score += line_cov_score
        '''
        我们发现其中有超过20%的特征值都是0。
        这就意味着这些特征都是其他特征的副本，也就是说，它们可以通过其他特征来表示，而本身并没有提供额外的信息。
    
    
class MRWordCountUtility(MRJob):
    
        def requestheaders(self, f):
        if self.auth:
            if f.mode == 'upstream' and not f.server_conn.via:
                f.request.headers['Proxy-Authorization'] = self.auth
            elif ctx.options.mode.startswith('reverse'):
                f.request.headers['Proxy-Authorization'] = self.auth
