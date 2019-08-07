
        
            def route(self, rule, **options):
        '''Like :meth:`Flask.route` but for a blueprint.  The endpoint for the
        :func:`url_for` function is prefixed with the name of the blueprint.
        '''
    
            ``app`` can be passed directly, rather than requiring an app
        context for configuration.
    '''
    _load_arg_defaults(kwargs, app=app)
    if isinstance(s, bytes):
        encoding = kwargs.pop('encoding', None)
        if encoding is None:
            encoding = detect_encoding(s)
        s = s.decode(encoding)
    return _json.loads(s, **kwargs)
    
            httponly = self.get_cookie_httponly(app)
        secure = self.get_cookie_secure(app)
        samesite = self.get_cookie_samesite(app)
        expires = self.get_expiration_time(app, session)
        val = self.get_signing_serializer(app).dumps(dict(session))
        response.set_cookie(
            app.session_cookie_name,
            val,
            expires=expires,
            httponly=httponly,
            domain=domain,
            path=path,
            secure=secure,
            samesite=samesite,
        )

    
        # Format docstring lists.
    section_regex = r'\n( +)# (.*)\n'
    section_idx = re.search(section_regex, docstring)
    shift = 0
    sections = {}
    while section_idx and section_idx.group(2):
        anchor = section_idx.group(2)
        leading_spaces = len(section_idx.group(1))
        shift += section_idx.end()
        next_section_idx = re.search(section_regex, docstring[shift:])
        if next_section_idx is None:
            section_end = -1
        else:
            section_end = shift + next_section_idx.start()
        marker = '$' + anchor.replace(' ', '_') + '$'
        docstring, content = process_list_block(docstring,
                                                shift,
                                                section_end,
                                                leading_spaces,
                                                marker)
        sections[marker] = content
        # `docstring` has changed, so we can't use `next_section_idx` anymore
        # we have to recompute it
        section_idx = re.search(section_regex, docstring[shift:])
    
    [Bags of Tricks for Efficient Text Classification
](https://arxiv.org/abs/1607.01759)
    
    num_classes = 10
epochs = 20
    
        # check state initialization
    layer = convolutional_recurrent.ConvLSTM2D(
        filters=filters, kernel_size=(num_row, num_col),
        data_format=data_format, return_sequences=return_sequences)
    layer.build(inputs.shape)
    x = Input(batch_shape=inputs.shape)
    initial_state = layer.get_initial_state(x)
    y = layer(x, initial_state=initial_state)
    model = Model(x, y)
    assert (model.predict(inputs).shape ==
            layer.compute_output_shape(inputs.shape))
    
    The paper 'Dynamic Routing Between Capsules': https://arxiv.org/abs/1710.09829
'''
from __future__ import print_function
    
            rows = conv_utils.conv_output_length(rows, self.kernel_size[0],
                                             self.padding, self.strides[0])
        cols = conv_utils.conv_output_length(cols, self.kernel_size[1],
                                             self.padding, self.strides[1])
    
        layers = model.layers
    for i in range(len(layers)):
        if sequential_like:
            print_layer_summary(layers[i])
        else:
            print_layer_summary_with_connections(layers[i])
        if i == len(layers) - 1:
            print_fn('=' * line_length)
        else:
            print_fn('_' * line_length)
    
            if n_dim == 2:
            return tf.nn.softmax(x)
        else:
            e = tf.exp(x - tf.reduce_max(x, axis=axis, keepdims=True))
            s = tf.reduce_sum(e, axis=axis, keepdims=True)
            return e / s
    '''
    return tf.nn.softmax(x, axis=axis)
    
    References:
    keras.regularizers
'''
import tensorflow as tf
import numpy as np
    
    
def get_shape(x):
    '''
    References:
        tflearn.utils.get_incoming_shape
    '''
    if isinstance(x, (tf.Tensor, tf.SparseTensor)):
        return x.get_shape().as_list()
    elif type(x) in [np.array, np.ndarray, list, tuple]:
        return list(np.shape(x))
    else:
        raise Exception('Invalid `x`.')
    
      delimiter = None
  lines_without_raw_strings = []
  for line in raw_lines:
    if delimiter:
      # Inside a raw string, look for the end
      end = line.find(delimiter)
      if end >= 0:
        # Found the end of the string, match leading space for this
        # line and resume copying the original lines, and also insert
        # a '' on the last line.
        leading_space = Match(r'^(\s*)\S', line)
        line = leading_space.group(1) + '''' + line[end + len(delimiter):]
        delimiter = None
      else:
        # Haven't found the end yet, append a blank line.
        line = ''''
    
    This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.
    
        def save_config(self):
        ''' Save the config file '''
        logger.debug('Saving config')
        options = {sect: opts
                   for value in self.config_dict_gui.values()
                   for sect, opts in value.items()}
    
            if self.scale:
            self.gamma = self.add_weight(shape=shape,
                                         name='gamma',
                                         initializer=self.gamma_initializer,
                                         regularizer=self.gamma_regularizer,
                                         constraint=self.gamma_constraint)
        else:
            self.gamma = None
        if self.center:
            self.beta = self.add_weight(shape=shape,
                                        name='beta',
                                        initializer=self.beta_initializer,
                                        regularizer=self.beta_regularizer,
                                        constraint=self.beta_constraint)
        else:
            self.beta = None
        self.built = True
    
    from importlib import import_module
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.