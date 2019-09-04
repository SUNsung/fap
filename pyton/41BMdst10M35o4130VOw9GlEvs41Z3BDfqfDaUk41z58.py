
        
        UNICODE = FILE_CONTENT

    
            '''
        request.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return request
    
            if self.about:
            self['__meta__']['about'] = self.about
    
    
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

    
    here = path.abspath(path.dirname(__file__))