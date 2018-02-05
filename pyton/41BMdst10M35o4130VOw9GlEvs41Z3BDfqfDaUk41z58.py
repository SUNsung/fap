
        
            def reraise(tp, value, tb=None):
        if value.__traceback__ is not tb:
            raise value.with_traceback(tb)
        raise value
    
    
def init_db():
    '''Initializes the database.'''
    db = get_db()
    with current_app.open_resource('schema.sql', mode='r') as f:
        db.cursor().executescript(f.read())
    db.commit()
    
        old_layer = keras.layers.GlobalMaxPooling3D(dim_ordering='default', name='global_maxpool3d')
    new_layer = keras.layers.GlobalMaxPool3D(name='global_maxpool3d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        >>> create_ngram_set([1, 4, 9, 4, 1, 4], ngram_value=3)
    [(1, 4, 9), (4, 9, 4), (9, 4, 1), (4, 1, 4)]
    '''
    return set(zip(*[input_list[i:] for i in range(ngram_value)]))
    
        # Normally the trailing 1 is added by standardize_weights
    weights = np.ones((3,))
    mask = np.ones((3, 4))
    mask[1, 0] = 0
    
    Run the script with:
```
python neural_style_transfer.py path_to_your_base_image.jpg path_to_your_reference.jpg prefix_for_results
```
e.g.:
```
python neural_style_transfer.py img/tuebingen.jpg img/starry_night.jpg results/my_result
```
Optional parameters:
```
--iter, To specify the number of iterations the style transfer takes place (Default is 10)
--content_weight, The weight given to the content loss (Default is 0.025)
--style_weight, The weight given to the style loss (Default is 1.0)
--tv_weight, The weight given to the total variation loss (Default is 1.0)
```
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_one(tensor_shape):
    _runner(initializers.ones(), tensor_shape,
            target_mean=1., target_max=1.)
    
            # Test equivalence of convert_all_kernels_in_model
        convout1 = conv([x])[0]
        layer_utils.convert_all_kernels_in_model(model1)
        convout2 = flip(conv([flip(x)])[0])
    
    from ..common import *
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
    def pi_decimal():
    '''decimal'''
    D = P.Decimal
    lasts, t, s, n, na, d, da = D(0), D(3), D(3), D(1), D(0), D(0), D(24)
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
        def get_header(self, data):
        ''' utility: return the header of a .po file as a dictionary '''
        headers = {}
        for line in data.split('\n'):
            if not line or line.startswith(('#', 'msgid','msgstr')):
                continue
            line = line.strip(''')
            key, val = line.split(':',1)
            headers[key] = val.strip()
        return headers
    
            This function will determine if the input text line needs to be
        wrapped (split) into separate lines.  If so, the first wrap point
        will be determined and the first line appended to the output
        text line list.  This function is used recursively to handle
        the second part of the split line to further split it.
        '''
        # if blank line or context separator, just add it to the output list
        if not line_num:
            data_list.append((line_num,text))
            return
    
        def __init__(self, *, object_hook=None, parse_float=None,
            parse_int=None, parse_constant=None, strict=True,
            object_pairs_hook=None):
        '''``object_hook``, if specified, will be called with the result
        of every JSON object decoded and its return value will be used in
        place of the given ``dict``.  This can be used to provide custom
        deserializations (e.g. to support JSON-RPC class hinting).
    
        def _become_message(self, message):
        '''Assume the non-format-specific state of message.'''
        type_specific = getattr(message, '_type_specific_attributes', [])
        for name in message.__dict__:
            if name not in type_specific:
                self.__dict__[name] = message.__dict__[name]
    
    
    print('# As the target uses Python%s.dll, we must use this compiler option!' % version_suffix)
    print('cdl = /MD')
    print()
    print('all: $(target)$(debug_suffix)%s' % (target_ext))
    print()
    
    # pure Python implementations (3 args only), for comparison
def pyrange(start, stop, step):
    if (start - stop) // step < 0:
        # replace stop with next element in the sequence of integers
        # that are congruent to start modulo step.
        stop += (start - stop) % step
        while start != stop:
            yield start
            start += step
    
        def _login(self, responder, user, rem=None):
        '''Login the user.