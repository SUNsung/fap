
        
            @staticmethod
    def generate_cert_keyfile():
        xlog.info('generate certs's key file:%s', CertUtil.cert_keyfile)
        pkey = OpenSSL.crypto.PKey()
        pkey.generate_key(OpenSSL.crypto.TYPE_RSA, 2048)
        with open(CertUtil.cert_keyfile, 'wb') as fp:
            fp.write(OpenSSL.crypto.dump_privatekey(OpenSSL.crypto.FILETYPE_PEM, pkey))
            fp.write(OpenSSL.crypto.dump_publickey(OpenSSL.crypto.FILETYPE_PEM, pkey))
        CertUtil.cert_publickey = pkey
    
    log_file = os.path.join(data_path, 'ipv6_tunnel.log')
    
        m = re.match(r'(\d+)\.(\d+)(\.(\d+))?(b(\d+))?', version_str)
    if m is None:
        raise ValueError('Bad version string %r' % version_str)
    
    EOF = -1
    
    PROJ_METADATA = '%s.json' % PROJ_NAME
    
            self.title = match1(html, r'<meta property='og:title' content='([^']*)'')
    
    bokecc_download_by_id = site.download_by_id

    
    from .theplatform import theplatform_download_by_pid
    
        #if dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip():  #duration
        #video_dict['title'] = dictify(e)['ckplayer']['info'][0]['title'][0]['_text'].strip()
    
        fc2video_download_by_upid(upid, output_dir, merge, info_only)
    
        html = get_content(url)
    uuid_pattern = r''([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})''
    id = r1(r'var vid='([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})'', html)
    if id is None:
        video_pattern = r''vid'\s*:\s*' + uuid_pattern
        id = match1(html, video_pattern)
    assert id, 'can't find video info'
    return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)