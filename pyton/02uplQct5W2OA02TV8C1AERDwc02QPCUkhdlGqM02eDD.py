
        
            for trials in range(5):
        a = random.randrange(2, num - 1)
        v = pow(a, s, num)
        if v != 1:
            i = 0
            while v != (num - 1):
                if i == t - 1:
                    return False
                else:
                    i = i + 1
                    v = (v ** 2) % num
    return True
    
                if new_key is None:
                break
    
        def solve_sub_array(self):
        rear = [int(self.array[0])]*len(self.array)
        sum_value = [int(self.array[0])]*len(self.array)
        for i in range(1, len(self.array)):
            sum_value[i] = max(int(self.array[i]) + sum_value[i-1], int(self.array[i]))
            rear[i] = max(sum_value[i], rear[i-1])
        return rear[len(self.array)-1]
    
    	s = [7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22, \
		5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20, \
		4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23, \
		6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21 ]
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''

    
        return res
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    #: Python 2.x?
is_py2 = (_ver[0] == 2)
    
    # TODO: response is the only one
    
        with server as (host, port):
        url = 'http://{}:{}/path/to/thing/#view=edit&token=hunter2'.format(host, port)
        r = requests.get(url)
        raw_request = r.content
    
        def prepare_request(self, request):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for
        transmission and returns it. The :class:`PreparedRequest` has settings
        merged from the :class:`Request <Request>` instance and those of the
        :class:`Session`.
    
    # The language of the text. It defaults to the language option
# or 'en' if the language is not set.
# epub_language = ''
    
            def close(self):
            # Probably worth making idempotent too!
            ...
            closer.unregister(self._id)
    
            if self.done is not None and not self.done and self.steps > 0:
            raise error.Error('Tried to reset environment which is not done. While the monitor is active for {}, you cannot call reset() unless the episode is over.'.format(self.env_id))
    
        def gas(self, gas):
        'control: rear wheel drive'
        gas = np.clip(gas, 0, 1)
        for w in self.wheels[2:4]:
            diff = gas - w.gas
            if diff > 0.1: diff = 0.1  # gradually increase, but stop immediately
            w.gas += diff
    
      # Implements linear decay of the learning rate.
  learning_rate = tf.train.polynomial_decay(
      learning_rate,
      global_step,
      num_train_steps,
      end_learning_rate=0.0,
      power=1.0,
      cycle=False)
    
      logits = tf.reshape(logits, [batch_size, seq_length, 2])
  logits = tf.transpose(logits, [2, 0, 1])