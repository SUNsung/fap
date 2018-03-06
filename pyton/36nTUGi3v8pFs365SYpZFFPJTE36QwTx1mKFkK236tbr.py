
        
            (x_train, y_train), (x_test, y_test), (sample_weight, class_weight, test_ids) = _get_test_data()
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
        if len(args) > 0 and '# Arguments' not in doc:
        raise ValueError('{} needs a '# Arguments' section'.format(name),
                         member.__module__)
    
            # Test equivalence of convert_all_kernels_in_model
        convout1 = conv([x])[0]
        layer_utils.convert_all_kernels_in_model(model1)
        convout2 = flip(conv([flip(x)])[0])
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
                    layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
                layer.build(inputs.shape)
                assert len(layer.losses) == 3
                assert layer.activity_regularizer
                output = layer(K.variable(np.ones(inputs.shape)))
                assert len(layer.losses) == 4
                K.eval(output)
    
        if header_type == _C_SYS_HEADER:
      if self._section <= self._C_SECTION:
        self._section = self._C_SECTION
      else:
        self._last_header = ''
        return error_message
    elif header_type == _CPP_SYS_HEADER:
      if self._section <= self._CPP_SECTION:
        self._section = self._CPP_SECTION
      else:
        self._last_header = ''
        return error_message
    elif header_type == _LIKELY_MY_HEADER:
      if self._section <= self._MY_H_SECTION:
        self._section = self._MY_H_SECTION
      else:
        self._section = self._OTHER_H_SECTION
    elif header_type == _POSSIBLE_MY_HEADER:
      if self._section <= self._MY_H_SECTION:
        self._section = self._MY_H_SECTION
      else:
        # This will always be the fallback because we're not sure
        # enough that the header is associated with this file.
        self._section = self._OTHER_H_SECTION
    else:
      assert header_type == _OTHER_HEADER
      self._section = self._OTHER_H_SECTION
    
            total_count = 0
        translated_count = 0
        with open(fn) as f:
            catalog = read_po(f)
            for msg in catalog:
                total_count += 1
                if is_translated(msg):
                    translated_count += 1
        pct = translated_count / float(total_count) * 100
        click.echo('% -7s % 2d%%' % (
            locale,
            pct,
        ), err=True)
        if pct >= MINIMUM and locale not in rv:
            rv.append(locale)
    with open(catalog_file, 'w') as f:
        json.dump({
            'supported_locales': sorted(rv)
        }, f, indent=2)
        f.write('\n')