
        
          @property
  def _tokens(self):
    return self._flist[SequenceWrapper.F_TOKEN_ID].feature
    
    import os
    
      def test_neighbors(self):
    corner = coords.from_kgs(utils_test.BOARD_SIZE, 'A1')
    neighbors = [
        utils_test.EMPTY_BOARD[c] for c in utils_test.NEIGHBORS[corner]]
    self.assertEqual(len(neighbors), 2)
    
    
def parse_message(message):
  message = gtp.pre_engine(message).strip()
  first, rest = (message.split(' ', 1) + [None])[:2]
  if first.isdigit():
    message_id = int(first)
    if rest is not None:
      command, arguments = (rest.split(' ', 1) + [None])[:2]
    else:
      command, arguments = None, None
  else:
    message_id = None
    command, arguments = first, rest
    
        start = time.time()
    
    import itertools
    
        proba = clf.predict_proba(X_test, batch_size=batch_size)
    assert proba.shape == (num_test, num_classes)
    assert np.allclose(np.sum(proba, axis=1), np.ones(num_test))
    
    
def collect_class_methods(cls, methods):
    if isinstance(methods, (list, tuple)):
        return [getattr(cls, m) if isinstance(m, str) else m for m in methods]
    methods = []
    for _, method in inspect.getmembers(cls, predicate=inspect.isroutine):
        if method.__name__[0] == '_' or method.__name__ in EXCLUDE:
            continue
        methods.append(method)
    return methods
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
    # Convolution
kernel_size = 5
filters = 64
pool_size = 4
    
    
def test_hard_sigmoid():
    '''Test using a reference hard sigmoid implementation.
    '''
    def ref_hard_sigmoid(x):
        x = (x * 0.2) + 0.5
        z = 0.0 if x <= 0 else (1.0 if x >= 1 else x)
        return z
    hard_sigmoid = np.vectorize(ref_hard_sigmoid)
    
    The dataset is actually too small for LSTM to be of any advantage
compared to simpler, much faster methods such as TF-IDF + LogReg.
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def __init__(self, employee_id, name, rank, call_center):
        self.employee_id = employee_id
        self.name = name
        self.rank = rank
        self.call = None
        self.call_center = call_center
    
    
class AddRequest(object):
    
    
class LookupService(object):
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, seller, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
    from mrjob.job import MRJob
    
    import os
import sys
import codecs
import re
    
    
class UnsupportedMessageType(BaseException):
    pass
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
    
def main():
    message_center = Provider()
    
    
@coroutine
def coroutine3(target):
    while True:
        request = yield
        if 20 < request <= 30:
            print('request {} handled in coroutine 3'.format(request))
        else:
            target.send(request)
    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15