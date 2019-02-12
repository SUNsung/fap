
        
            @classmethod
    def get_model_class(cls):
        # Avoids a circular import and allows importing SessionStore when
        # django.contrib.sessions is not in INSTALLED_APPS.
        from django.contrib.sessions.models import Session
        return Session
    
        def make_uri(self, path):
        # Under Windows, file URIs use the UTF-8 encoding.
        drive = path.drive
        if len(drive) == 2 and drive[1] == ':':
            # It's a path on a local drive => 'file:///c:/a/b'
            rest = path.as_posix()[2:].lstrip('/')
            return 'file:///%s/%s' % (
                drive, urlquote_from_bytes(rest.encode('utf-8')))
        else:
            # It's a path on a network drive => 'file://host/share/a/b'
            return 'file:' + urlquote_from_bytes(path.as_posix().encode('utf-8'))
    
        # Modify function metadata to help with introspection and debugging
    for method in (__new__, _make.__func__, _replace,
                   __repr__, _asdict, __getnewargs__):
        method.__qualname__ = f'{typename}.{method.__name__}'
    
            is_not_importable = False
        is_namespace = False
        tests = []
        if os.path.isdir(os.path.abspath(start_dir)):
            start_dir = os.path.abspath(start_dir)
            if start_dir != top_level_dir:
                is_not_importable = not os.path.isfile(os.path.join(start_dir, '__init__.py'))
        else:
            # support for discovery from dotted module names
            try:
                __import__(start_dir)
            except ImportError:
                is_not_importable = True
            else:
                the_module = sys.modules[start_dir]
                top_part = start_dir.split('.')[0]
                try:
                    start_dir = os.path.abspath(
                       os.path.dirname((the_module.__file__)))
                except AttributeError:
                    # look for namespace packages
                    try:
                        spec = the_module.__spec__
                    except AttributeError:
                        spec = None
    
            self.check_tokenize('''\
async def f():
    
        @unittest.skipIf(interpreter_requires_environment(),
                     'Cannot run -E tests when PYTHON env vars are required.')
    def test_xoptions(self):
        def get_xoptions(*args):
            # use subprocess module directly because test.support.script_helper adds
            # '-X faulthandler' to the command line
            args = (sys.executable, '-E') + args
            args += ('-c', 'import sys; print(sys._xoptions)')
            out = subprocess.check_output(args)
            opts = eval(out.splitlines()[0])
            return opts
    
    from email.message import EmailMessage
from email.headerregistry import Address
from email.utils import make_msgid
    
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
    
    $ pip3 install scikit-learn
    
    try:
    import face_recognition_models
except Exception:
    print('Please install `face_recognition_models` with this command before using `face_recognition`:\n')
    print('pip install git+https://github.com/ageitgey/face_recognition_models')
    quit()
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
            if file.filename == '':
            return redirect(request.url)