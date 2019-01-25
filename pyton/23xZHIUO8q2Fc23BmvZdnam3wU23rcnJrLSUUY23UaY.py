
        
        
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_bashrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'bash')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    parametrize_script = pytest.mark.parametrize('script, fixed', [
    ('tar xvf {}', 'mkdir -p {dir} && tar xvf {filename} -C {dir}'),
    ('tar -xvf {}', 'mkdir -p {dir} && tar -xvf {filename} -C {dir}'),
    ('tar --extract -f {}', 'mkdir -p {dir} && tar --extract -f {filename} -C {dir}')])