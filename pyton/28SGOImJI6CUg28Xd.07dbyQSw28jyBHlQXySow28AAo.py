
        
            for i in range(1, 6):
        fpath = os.path.join(path, 'data_batch_' + str(i))
        (x_train[(i - 1) * 10000: i * 10000, :, :, :],
         y_train[(i - 1) * 10000: i * 10000]) = load_batch(fpath)
    
        out1 = utils.preprocess_input(x, 'channels_last')
    out1int = utils.preprocess_input(xint, 'channels_last')
    out2 = utils.preprocess_input(np.transpose(x, (2, 0, 1)),
                                  'channels_first')
    out2int = utils.preprocess_input(np.transpose(xint, (2, 0, 1)),
                                     'channels_first')
    assert_allclose(out1, out2.transpose(1, 2, 0))
    assert_allclose(out1int, out2int.transpose(1, 2, 0))
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        deserialized = losses.deserialize(serialized)
    assert isinstance(deserialized, MSE_MAE_loss)
    assert deserialized.mse_fraction == 0.3
    
    learning_rate = 1e-6
clip_norm = 1.0