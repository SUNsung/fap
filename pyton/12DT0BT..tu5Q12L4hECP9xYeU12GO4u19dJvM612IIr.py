
        
        
packages = {
    package_name: get_info(package_name) for package_name in PACKAGES
}
    
            if env.stdout_isatty:
            # Use the encoding supported by the terminal.
            output_encoding = env.stdout_encoding
        else:
            # Preserve the message encoding.
            output_encoding = self.msg.encoding
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        The default behaviour is '{default}' (i.e., the response headers and body
    is printed), if standard output is not redirected. If the output is piped
    to another program or to a file, then only the response body is printed
    by default.
    
    
@keras_test
def test_model_trainability_switch():
    # a non-trainable model has no trainable weights
    x = Input(shape=(1,))
    y = Dense(2)(x)
    model = Model(x, y)
    model.trainable = False
    assert model.trainable_weights == []
    
        # test if the state of a BiRNN is the concatenation of the underlying RNNs
    y_merged = y_merged[-n_states * 2:]
    y_forward = y_forward[-n_states:]
    y_backward = y_backward[-n_states:]
    for state_birnn, state_inner in zip(y_merged, y_forward + y_backward):
        assert_allclose(state_birnn, state_inner, atol=1e-5)
    
        # we don't check names of first 2 layers (inputs) because
    # ordering of same-level layers is not fixed
    assert [layer.name for layer in final_model.layers][2:] == ['model', 'dense_4']
    assert model.compute_mask([e, f], [None, None]) == [None, None]
    assert final_model.compute_output_shape([(10, 32), (10, 32)]) == [(10, 7), (10, 64)]
    
        # Arguments
        cell: A RNN cell instance. A RNN cell is a class that has:
            - a `call(input_at_t, states_at_t)` method, returning
                `(output_at_t, states_at_t_plus_1)`. The call method of the
                cell can also take the optional argument `constants`, see
                section 'Note on passing external constants' below.
            - a `state_size` attribute. This can be a single integer
                (single state) in which case it is
                the number of channels of the recurrent state
                (which should be the same as the number of channels of the cell output).
                This can also be a list/tuple of integers
                (one size per state). In this case, the first entry
                (`state_size[0]`) should be the same as
                the size of the cell output.
        return_sequences: Boolean. Whether to return the last output.
            in the output sequence, or the full sequence.
        return_state: Boolean. Whether to return the last state
            in addition to the output.
        go_backwards: Boolean (default False).
            If True, process the input sequence backwards and return the
            reversed sequence.
        stateful: Boolean (default False). If True, the last state
            for each sample at index i in a batch will be used as initial
            state for the sample of index i in the following batch.
        input_shape: Use this argument to specify the shape of the
            input when this layer is the first one in a model.
    
    if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    help_ = 'Load h5 model trained weights'
    parser.add_argument('-w', '--weights', help=help_)
    help_ = 'Use mse loss instead of binary cross entropy (default)'
    parser.add_argument('-m', '--mse', help=help_, action='store_true')
    args = parser.parse_args()
    models = (encoder, decoder)
    data = (x_test, y_test)
    
    
class Pin:
    host = 'http://img.hb.aicdn.com/'
    
    from ..common import *
import re
    
    site_info = 'MioMio.tv'
download = miomio_download
download_playlist = playlist_not_supported('miomio')

    
    from xml.dom.minidom import parseString
    
            self.title = match1(content,
                            r'setup\[\'title\'\] = '([^']+)';')