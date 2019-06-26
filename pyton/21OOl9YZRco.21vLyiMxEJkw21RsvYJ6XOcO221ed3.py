
        
            def __exit__(self, exc_type, exc_value, traceback):
        self.proc.kill()
        self.proc.wait()
        time.sleep(0.2)
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
            body = tar_file.extractfile(tar_file.members[0]).read()
        respcls = responsetypes.from_args(filename=tar_file.members[0].name, body=body)
        return response.replace(body=body, cls=respcls)
    
    
def check_raw(overhead, num):
    check(num + overhead, b' ' * num)
    
        def __instancecheck__(cls, inst):
        return hasattr(inst, '_data')
    
        return df
    
    
def test_write_unsupported_compression_type():
    df = pd.read_json('{'a': [1, 2, 3], 'b': [4, 5, 6]}')
    with tm.ensure_clean() as path:
        msg = 'Unrecognized compression type: unsupported'
        with pytest.raises(ValueError, match=msg):
            df.to_json(path, compression='unsupported')
    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data
    
    
def gen_binary_data(idx):
    return binarydata[:idx % 300]
    
    
if __name__ == '__main__':
    main()

    
    import sys
from timeit import Timer