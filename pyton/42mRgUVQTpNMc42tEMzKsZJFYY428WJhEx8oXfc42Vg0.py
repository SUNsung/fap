
        
            # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
            if match[0]:
            name = 'Barack Obama'
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)
    
    with open('HISTORY.rst') as history_file:
    history = history_file.read()
    
        # 获得所有人脸的位置以及它们的编码
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
        # 讲识别结果以json键值对的数据结构输出
    result = {
        'face_found_in_image': face_found,
        'is_picture_of_obama': is_obama
    }
    return jsonify(result)
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
            briefing = []
    
    
def setup(hass, config):
    '''Listen for browse_url events.'''
    import webbrowser
    
        return True

    
    
def _arp(ip_address):
    '''Get the MAC address for a given IP.'''
    cmd = ['arp', '-n', ip_address]
    arp = subprocess.Popen(cmd, stdout=subprocess.PIPE)
    out, _ = arp.communicate()
    match = re.search(r'(([0-9A-Fa-f]{1,2}\:){5}[0-9A-Fa-f]{1,2})', str(out))
    if match:
        return match.group(0)
    _LOGGER.info('No MAC address found for %s', ip_address)
    return None
    
            # If there's a home_id, we need a different API URL
        if self.home_id is None:
            self.tadoapiurl = 'https://my.tado.com/api/v2/me'
        else:
            self.tadoapiurl = 'https://my.tado.com/api/v2' \
                              '/homes/{home_id}/mobileDevices'
    
            return False
    
    '''
    
    CONF_FOLDER = 'folder'
CONF_PATTERNS = 'patterns'
DEFAULT_PATTERN = '*'
DOMAIN = 'folder_watcher'
    
        complete_apps = ['sentry']
    symmetrical = True

    
    from sentry.utils.db import is_postgres
    
            for renv in dupe_release_envs:
            release_id = renv['release_id']
            organization_id = renv['organization_id']
            environment_id = renv['environment_id']
            renvs = list(
                orm.ReleaseEnvironment.objects.filter(
                    release_id=release_id,
                    organization_id=organization_id,
                    environment_id=environment_id,
                ).order_by('first_seen')
            )
            to_renv = renvs[0]
            from_renvs = renvs[1:]
            last_seen = max([re.last_seen for re in renvs])
            orm.ReleaseEnvironment.objects.filter(
                id=to_renv.id,
            ).update(last_seen=last_seen)
            orm.ReleaseEnvironment.objects.filter(
                id__in=[re.id for re in from_renvs],
            ).delete()