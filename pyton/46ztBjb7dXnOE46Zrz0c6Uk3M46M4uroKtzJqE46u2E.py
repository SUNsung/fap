
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        old_layer = keras.layers.GlobalAveragePooling2D(dim_ordering='default', name='global_avgpool2d')
    new_layer = keras.layers.GlobalAvgPool2D(name='global_avgpool2d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        def call(self, inputs, mask=None, training=None, initial_state=None):
        return super(ConvLSTM2D, self).call(inputs,
                                            mask=mask,
                                            training=training,
                                            initial_state=initial_state)
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
        def grads(self, x):
        assert self.loss_value is not None
        grad_values = np.copy(self.grad_values)
        self.loss_value = None
        self.grad_values = None
        return grad_values
    
    
def run_cmds(cmds):
    log = Log()
    cmd_pl = cmds.split('\n')
    outs = []
    for cmd in cmd_pl:
        if not cmd:
            continue
    
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