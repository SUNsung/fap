
        
                # install new cert
        xlog.info('Add cert to database $HOME/.pki/nssdb')
        cmd_line = 'certutil -d sql:$HOME/.pki/nssdb -A -t 'C,,' -n '%s' -i '%s'' % (common_name, ca_file)
        os.system(cmd_line)
        return True
    
        def write_ip(self, ip, host, handshake):
        with self.lock:
            self.out_fd.write('%s %s gws %d 0 0\n' % (ip, host, handshake))
            self.out_fd.flush()
    
    import simple_http_client
from xlog import getLogger
xlog = getLogger('gae_proxy')
    
    # Get a reference to the Raspberry Pi camera.
# If this fails, make sure you have a camera connected to the RPi and that you
# enabled your camera in raspi-config and rebooted first.
camera = picamera.PiCamera()
camera.resolution = (320, 240)
output = np.empty((240, 320, 3), dtype=np.uint8)
    
        :param rect: a dlib 'rect' object
    :return: a plain tuple representation of the rect in (top, right, bottom, left) order
    '''
    return rect.top(), rect.right(), rect.bottom(), rect.left()