
        
                if k < 0:
            return self.LB(-k)
                
        i = self.p
        n = 1
        # find k good tokens
        while n < k:
            # skip off-channel tokens
            i = self.skipOffTokenChannels(i+1) # leave p on valid token
            n += 1
    
    
def open_binary(package: Package, resource: Resource) -> BinaryIO:
    '''Return a file-like object opened for binary reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.open_resource(resource)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='rb')
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return BytesIO(data)
    
        print('Pickled records:')
    pprint.pprint(memos)
    
    from email.message import EmailMessage
from email.headerregistry import Address
from email.utils import make_msgid
    
    from email.message import EmailMessage
from email.policy import SMTP
    
    def test():
    PROCESSES = 4
    print('Creating pool with %d processes\n' % PROCESSES)