
        
        # TODO: ensure that history changes.

    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
        new_command = get_new_command(Command('sudo apt list --upgradable', match_output))
    assert new_command == 'sudo apt upgrade'

    
        print('Writing private key to file %s_privkey.txt...' % name)
    with open('%s_privkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, privateKey[0], privateKey[1]))
    
            next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
    min_length = 8
max_length = 16
password = ''.join(random.choice(chars) for x in range(random.randint(min_length, max_length)))
print('Password: ' + password)
print('[ If you are thinking of using this passsword, You better save it. ]')
    
        def get_config(self):
        return {'l1': float(self.l1),
                'l2': float(self.l2)}
    
        y_a = K.variable(np.random.randint(0, 7, (6,)))
    y_b = K.variable(np.random.random((6, 7)))
    assert K.eval(losses.sparse_categorical_crossentropy(y_a, y_b)).shape == (6,)
    
    
def _get_available_devices():
    return [x.name for x in K.get_session().list_devices()]
    
    train_model.fit(epochs=epochs,
                steps_per_epoch=steps_per_epoch)
    
    current_path = os.path.dirname(os.path.abspath(__file__))
python_path = os.path.abspath( os.path.join(current_path, os.pardir, os.pardir, 'python27', '1.0'))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
    log_file = os.path.join(data_path, 'ipv6_tunnel.log')
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
    # 构建 FastText 模型
sentences = [['Hello', 'World', '!'], ['I', 'am', 'huay', '.']]
min_ngrams, max_ngrams = 2, 4  # ngrams 范围
model = FastText(sentences, size=5, min_count=1, min_n=min_ngrams, max_n=max_ngrams)
    
    def clean_text(text, replacements = {':': '_', ' ': '_', '/': '_', '.': '', ''': ''}):
    for key, rep in replacements.items():
        text = text.replace(key, rep)
    return text    
    
    
class TestProvider(unittest.TestCase):
    '''
    Integration tests ~ provider class with as little mocking as possible.
    '''
    
    
class StandbyStateTest(unittest.TestCase):
    ''' Exemplary 2nd level state test class (here: Standby state). Add missing
    state test classes... '''
    
        def __init__(self):
        self.time_provider = datetime.datetime.now
    
    
class RegistryHolder(type):
    
    
if __name__ == '__main__':
    instances_pool = getattr(Card2, 'pool')
    cm1 = Card2('10', 'h', a=1)
    cm2 = Card2('10', 'h', a=1)
    cm3 = Card2('10', 'h', a=2)
    
            # dictionary that will be used to determine which static method is
        # to be executed but that will be also used to store possible param
        # value
        self._static_method_choices = {'param_value_1': self._static_method_1, 'param_value_2': self._static_method_2}
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.