
        
                    return request_content
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
            if algorithm is None:
            _algorithm = 'MD5'
        else:
            _algorithm = algorithm.upper()
        # lambdas assume digest modules are imported at the top level
        if _algorithm == 'MD5' or _algorithm == 'MD5-SESS':
            def md5_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.md5(x).hexdigest()
            hash_utf8 = md5_utf8
        elif _algorithm == 'SHA':
            def sha_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha1(x).hexdigest()
            hash_utf8 = sha_utf8
        elif _algorithm == 'SHA-256':
            def sha256_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha256(x).hexdigest()
            hash_utf8 = sha256_utf8
        elif _algorithm == 'SHA-512':
            def sha512_utf8(x):
                if isinstance(x, str):
                    x = x.encode('utf-8')
                return hashlib.sha512(x).hexdigest()
            hash_utf8 = sha512_utf8
    
        def values(self):
        '''Dict-like values() that returns a list of values of cookies from the
        jar.
    
        For example, ``headers['content-encoding']`` will return the
    value of a ``'Content-Encoding'`` response header, regardless
    of how the header name was originally stored.
    
            model = keras.models.Model(inputs, outputs)
        model.compile('sgd', 'mse')
    
        # Arguments:
        models (tuple): encoder and decoder models
        data (tuple): test data and label
        batch_size (int): prediction batch size
        model_name (string): which model is using this function
    '''
    
    
@keras_test
def test_locallyconnected_2d():
    num_samples = 5
    filters = 3
    stack_size = 4
    num_row = 6
    num_col = 8
    padding = 'valid'
    
    
def get_standard_values():
    '''A set of floats used for testing the activations.
    '''
    return np.array([[0, 0.1, 0.5, 0.9, 1.0]], dtype=K.floatx())
    
    # set parameters:
max_features = 5000
maxlen = 400
batch_size = 32
embedding_dims = 50
filters = 250
kernel_size = 3
hidden_dims = 250
epochs = 2
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loaded_model = keras.models.load_model(model_filename)
        loaded_model.predict(np.random.rand(128, 2))
    
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
    
            self.charPositionInLine = None
    
            ## # if we've already reported an error and have not matched a token
        ## # yet successfully, don't report any errors.
        ## if self.errorRecovery:
        ##     #System.err.print('[SPURIOUS] ');
        ##     return;
        ## 
        ## self.errorRecovery = True
    
            raise NotImplementedError
    
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
    
        Note that as of Java 1.4, you can access the stack trace, which means
    that you can compute the complete trace of rules from the start symbol.
    This gives you considerable context information with which to generate
    useful error messages.
    
            return link_list
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
        t = r1(r'type=(\w+)', flashvars)
    id = r1(r'vid=([^']+)', flashvars)
    if t == 'youku':
        youku_download_by_vid(id, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'tudou':
        tudou_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'sina' or t == 'video':
        fake_headers['Referer'] = url
        url = 'http://www.miomio.tv/mioplayer/mioplayerconfigfiles/sina.php?vid=' + id
        xml_data = get_content(url, headers=fake_headers, decoded=True)
        url_list = sina_xml_to_url_list(xml_data)
    
    
    {    # Check that closing brace is aligned with beginning of the class.
    # Only do this if the closing brace is indented by only whitespaces.
    # This means we will not check single-line class definitions.
    indent = Match(r'^( *)\}', clean_lines.elided[linenum])
    if indent and len(indent.group(1)) != self.class_indent:
      if self.is_struct:
        parent = 'struct ' + self.name
      else:
        parent = 'class ' + self.name
      error(filename, linenum, 'whitespace/indent', 3,
            'Closing brace should be aligned with beginning of %s' % parent)