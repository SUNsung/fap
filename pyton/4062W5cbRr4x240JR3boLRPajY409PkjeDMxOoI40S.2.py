
        
            proc.sendline(u'fuck')
    assert proc.expect([TIMEOUT, u'git show'])
    proc.send('\033[B')
    assert proc.expect([TIMEOUT, u'git push'])
    proc.send('\033[B')
    assert proc.expect([TIMEOUT, u'git help'])
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'git push'])
    proc.send('\033[B')
    assert proc.expect([TIMEOUT, u'git help'])
    proc.send('\n')
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
            assert certdata, 'cert file %r is broken' % certfile
        import ctypes
        import ctypes.wintypes
        class CERT_CONTEXT(ctypes.Structure):
            _fields_ = [
                ('dwCertEncodingType', ctypes.wintypes.DWORD),
                ('pbCertEncoded', ctypes.POINTER(ctypes.wintypes.BYTE)),
                ('cbCertEncoded', ctypes.wintypes.DWORD),
                ('pCertInfo', ctypes.c_void_p),
                ('hCertStore', ctypes.c_void_p),]
        X509_ASN_ENCODING = 0x1
        CERT_STORE_ADD_ALWAYS = 4
        CERT_STORE_PROV_SYSTEM = 10
        CERT_STORE_OPEN_EXISTING_FLAG = 0x4000
        CERT_SYSTEM_STORE_CURRENT_USER = 1 << 16
        CERT_SYSTEM_STORE_LOCAL_MACHINE = 2 << 16
        CERT_FIND_SUBJECT_STR = 8 << 16 | 7
        crypt32 = ctypes.windll.crypt32
        ca_exists = False
        store_handle = None
        pCertCtx = None
        ret = 0
        for store in (CERT_SYSTEM_STORE_LOCAL_MACHINE, CERT_SYSTEM_STORE_CURRENT_USER):
            try:
                store_handle = crypt32.CertOpenStore(CERT_STORE_PROV_SYSTEM, 0, None, CERT_STORE_OPEN_EXISTING_FLAG | store, u'root')
                if not store_handle:
                    if store == CERT_SYSTEM_STORE_CURRENT_USER and not ca_exists:
                        xlog.warning('CertUtil.import_windows_ca failed: could not open system cert store')
                        return False
                    else:
                        continue
    
            if first > last or first < 0 or last < 0 or last >= len(self.tokens):
            raise ValueError(
                'replace: range invalid: '+first+'..'+last+
                '(size='+len(self.tokens)+')')
    
            raise NotImplementedError
    