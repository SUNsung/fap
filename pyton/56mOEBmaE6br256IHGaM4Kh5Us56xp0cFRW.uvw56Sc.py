
        
            def reset_appid(self):
        # called by web_control
        with self.lock:
            self.working_appid_list = list()
            for appid in self.config.GAE_APPIDS:
                if not appid:
                    self.config.GAE_APPIDS.remove(appid)
                    continue
                self.working_appid_list.append(appid)
            self.not_exist_appids = []
            self.out_of_quota_appids = []
        self.last_reset_time = time.time()
    
                    # Only add to current user
                if store == CERT_SYSTEM_STORE_CURRENT_USER and not ca_exists:
                    ret = crypt32.CertAddEncodedCertificateToStore(store_handle, X509_ASN_ENCODING, certdata, len(certdata), CERT_STORE_ADD_ALWAYS, None)
            except Exception as e:
                xlog.warning('CertUtil.import_windows_ca failed: %r', e)
                if isinstance(e, OSError):
                    store_handle = None
                    continue
                return False
            finally:
                if pCertCtx:
                    crypt32.CertFreeCertificateContext(pCertCtx)
                    pCertCtx = None
                if store_handle:
                    crypt32.CertCloseStore(store_handle, 0)
                    store_handle = None
    
    
class CheckIp(front_base.check_ip.CheckIp):
    def check_response(self, response):
        server_type = response.headers.get('Server', '')
        self.logger.debug('status:%d', response.status)
        self.logger.debug('Server type:%s', server_type)
    
        return 'teredor test result is %s.%s' % (usable, server)
    
        print('Done!')
    if failures:
        print('Some downloads have failed:')
        for fail in failures:
            print('> ' + fail)
