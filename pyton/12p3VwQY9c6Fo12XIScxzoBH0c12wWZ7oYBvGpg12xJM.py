
        
        
def attach_enctype_error_multidict(request):
    '''Since Flask 0.8 we're monkeypatching the files object in case a
    request is detected that does not use multipart form data but the files
    object is accessed.
    '''
    oldcls = request.files.__class__
    
        __slots__ = ()
    key = ' m'
    
            def _fail(self, *args, **kwargs):
            raise RuntimeError(
                'Signalling support is unavailable because the blinker'
                ' library is not installed.'
            )
    
                resp = app.response_class()
            if not session_interface.is_null_session(sess):
                session_interface.save_session(app, sess, resp)
            headers = resp.get_wsgi_headers(c.request.environ)
            self.cookie_jar.extract_wsgi(c.request.environ, headers)
    
        @cli.command()
    def test():
        click.echo(current_app.name)
    
    
def test_config_from_json():
    app = flask.Flask(__name__)
    current_dir = os.path.dirname(os.path.abspath(__file__))
    app.config.from_json(os.path.join(current_dir, 'static', 'config.json'))
    common_object_test(app)
    
    
if __name__ == '__main__':
    '''
    Desc:
        主函数，调用上面返回的训练好的感知器进行预测
    Args:
        None
    Returns:
        None
    '''
    # 训练 and 感知器
    and_perceptron = train_and_perceptron()
    # 打印训练获得的权重
    print(and_perceptron)
    # 测试
    print('1 and 1 = %d' % and_perceptron.predict([1, 1]))
    print('0 and 0 = %d' % and_perceptron.predict([0, 0]))
    print('1 and 0 = %d' % and_perceptron.predict([1, 0]))
    print('0 and 1 = %d' % and_perceptron.predict([0, 1]))
    
        # 计算forward值
    x, d = data_set()
    rl.forward(x[0])
    rl.forward(x[1])
    
    # 求取sensitivity map
    sensitivity_array = np.ones(rl.state_list[-1].shape,
                                dtype=np.float64)
    # 计算梯度
    rl.backward(sensitivity_array, IdentityActivator())
    
    # 检查梯度
    epsilon = 10e-4
    for i in range(rl.W.shape[0]):
        for j in range(rl.W.shape[1]):
            rl.W[i,j] += epsilon
            rl.reset_state()
            rl.forward(x[0])
            rl.forward(x[1])
            err1 = error_function(rl.state_list[-1])
            rl.W[i,j] -= 2*epsilon
            rl.reset_state()
            rl.forward(x[0])
            rl.forward(x[1])
            err2 = error_function(rl.state_list[-1])
            expect_grad = (err1 - err2) / (2 * epsilon)
            rl.W[i,j] += epsilon
            print('weights(%d,%d): expected - actural %f - %f' % (
                i, j, expect_grad, rl.gradient[i,j]))
    
    
# 计算两个向量的欧式距离（可根据场景选择）
def distEclud(vecA, vecB):
    return sqrt(sum(power(vecA - vecB, 2)))  # la.norm(vecA-vecB)
    
            通常保留矩阵 80% ～ 90% 的能量，就可以得到重要的特征并取出噪声。
        '''
        print('主成分：%s, 方差占比：%s%%' % (format(i+1, '2.0f'), format(SigmaI/SigmaSum*100, '4.2f')))
    
        def reduce(self, key, packedValues):
        cumN, cumVal, cumSumSq = 0.0, 0.0, 0.0
        for valArr in packedValues:  # 从输入流中获取值
            nj = float(valArr[0])
            cumN += nj
            cumVal += nj*float(valArr[1])
            cumSumSq += nj*float(valArr[2])
        mean = cumVal/cumN
        var = (cumSumSq - 2*mean*cumVal + cumN*mean*mean)/cumN
        yield (mean, var)  # 发出平均值和方差
    
        def map(self, mapperId, inVals):  # 需要 2 个参数
        # input: nodeId, ('w', w-vector) OR nodeId, ('x', int)
        if False:
            yield
        if inVals[0] == 'w':                  # 积累 w向量
            self.w = inVals[1]
        elif inVals[0] == 'x':
            self.dataList.append(inVals[1])   # 累积数据点计算
        elif inVals[0] == 't':                # 迭代次数
            self.t = inVals[1]
        else:
            self.eta = inVals                 # 这用于 debug， eta未在map中使用
    
    
# Subclass of boto's TypeDeserializer for DynamoDB
# to adjust for DynamoDB Stream format.
class TypeDeserializer(boto3.dynamodb.types.TypeDeserializer):
    def _deserialize_n(self, value):
        return float(value)
    
        proxy = GenericProxy(port=test_port, update_listener=DownloadListener())
    proxy.start()
    
            data3 = (b'--------------------------3c48c744237517ac\r\nContent-Disposition: form-data; name='success_action_'
                 b'redirect'\r\n\r\nhttp://127.0.0.1:5000/?id=20170826T181315.679087009Z\r\n--------------------------'
                 b'3c48c744237517ac--\r\n')
    
        # reset probability to zero
    config.KINESIS_ERROR_PROBABILITY = 0.0
    
    # file paths by API
API_FILE_PATHS = {}
    
            if response.content:
            # fix hardcoded account ID in ARNs returned from this API
            self._fix_account_id(response)
            # fix dates returned from this API (fixes an issue with Terraform)
            self._fix_date_format(response)
            # fix content-length header
            response.headers['content-length'] = len(response._content)
    
        def test_attach_iam_role_to_new_iam_user(self):
        test_policy_document = {
            'Version': '2012-10-17',
            'Statement': {
                'Effect': 'Allow',
                'Action': 's3:ListBucket',
                'Resource': 'arn:aws:s3:::example_bucket'
            }
        }
        test_user_name = 'test-user'
    
    
def publish_lambda_result(time_before, result, kwargs):
    if isinstance(result, Response) and result.status_code >= 400:
        return publish_lambda_error(time_before, kwargs)
    publish_lambda_metric('Invocations', 1, kwargs)
    
        def test_put_events(self):
        self.events_client.put_events(Entries=[{
            'Time': datetime(2019, 7, 29),
            'DetailType': TEST_DETAIL_TYPE,
            'Detail': 'some detail'
        }])
