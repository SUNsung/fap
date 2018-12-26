        if not advapi32.StartServiceCtrlDispatcherW(dispatch_table):
            raise OSError('ctypes start failed: %s' % ctypes.FormatError())
    except Exception as e:
        tb = traceback.format_exc()
        msg = str(e) + '\n' + tb
        win_service_report_event(service_name, msg, is_error=True)
        raise
    
    secret_msg = b'Secret message goes here'
    
    with io.open(README_FILE, 'w', encoding='utf-8') as f:
    f.write(header)
    f.write(options)
    f.write(footer)

    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
        def test_implicit_binary_modes(self):
        # Test implicit binary modes (no 'b' or 't' in mode string).
        for mode in ('w', 'x'):
            if mode == 'x':
                unlink(self.filename)
            with self.open(self.filename, mode) as f:
                f.write(self.TEXT)
            with open(self.filename, 'rb') as f:
                file_data = ext_decompress(f.read())
                self.assertEqual(file_data, self.TEXT)
            with self.open(self.filename, 'r') as f:
                self.assertEqual(f.read(), self.TEXT)
            with self.open(self.filename, 'a') as f:
                f.write(self.TEXT)
            with open(self.filename, 'rb') as f:
                file_data = ext_decompress(f.read())
                self.assertEqual(file_data, self.TEXT * 2)
    
    
def main():
    import io
    import pprint
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
    #
# Functions used by test code
#
    
    DB_FILE = 'mydb'