
        
        
def _to_snake_case(name):
    intermediate = re.sub('(.)([A-Z][a-z0-9]+)', r'\1_\2', name)
    insecure = re.sub('([a-z])([A-Z])', r'\1_\2', intermediate).lower()
    # If the class is private the name starts with '_' which is not secure
    # for creating scopes. We prefix the name with 'private' in this case.
    if insecure[0] != '_':
        return insecure
    return 'private' + insecure
    
    '''
    
    
@pytest.mark.parametrize('data_format', ['channels_first', 'channels_last'])
@pytest.mark.parametrize('return_sequences', [True, False])
@pytest.mark.parametrize('use_mask', [True, False])
def test_convolutional_recurrent(data_format, return_sequences, use_mask):
    
    
def set_image_data_format(data_format):
    '''Sets the value of the data format convention.
    
    import os
import csv
import six
    
                try:
                res = self.check_ip.check_ip(ip)
            except Exception as e:
                xlog.warn('check except:%r', e)
                continue
    
            if self.continue_fail_count > 10:
            # don't set network_stat to 'unknown', wait for check
            # network_stat = 'unknown'
            xlog.debug('report_connect_fail %s continue_fail_count:%d',
                       self.type, self.continue_fail_count)
            self.triger_check_network(True)
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
                    # not in range and not EOF/EOT, must be invalid symbol
                self.noViableAlt(s, input)
                return 0
    
    
def attention_flow_self(h, u, T=None, J=None, d=None, name=None, reuse=None):
    '''Attention Flow Self Match Layer
    Input shape:
        h: [N, T, d]  # 原文中的 shape 为 [N, T, 2d], 因为经过了 bi-LSTM, 维度扩了一倍
        u: [N, J, d]
    Output shape:
        [N, T, 4d]
    
    
def get_params_dict():
    '''以字典形式获取所有 trainable 参数'''
    param_dict = dict()
    for var in tf.trainable_variables():
        param_dict[var.name] = {'shape': list(map(int, var.shape)),
                                'number': int(reduce(mul, var.shape, 1))}
    return param_dict