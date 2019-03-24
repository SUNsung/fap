
        
        # You can now launch tensorboard with `tensorboard --logdir=./logs` on your
# command line and then go to http://localhost:6006/#projector to view the
# embeddings

    
        paths = []
    for fname in files:
        paths.append(get_file(fname,
                              origin=base + fname,
                              cache_subdir=dirname))
    
    
def create_multi_input_model_from(layer1, layer2):
    input_1 = Input(shape=(data_dim,))
    input_2 = Input(shape=(data_dim,))
    out1 = layer1(input_1)
    out2 = layer2(input_2)
    out = Average()([out1, out2])
    model = Model([input_1, input_2], out)
    model.add_loss(K.mean(out2))
    model.add_loss(1)
    model.add_loss(1)
    return model
    
    # input image dimensions
img_rows, img_cols = 28, 28
# number of convolutional filters to use
filters = 32
# size of pooling area for max pooling
pool_size = 2
# convolution kernel size
kernel_size = 3
    
        `log(cosh(x))` is approximately equal to `(x ** 2) / 2` for small `x` and
    to `abs(x) - log(2)` for large `x`. This means that 'logcosh' works mostly
    like the mean squared error, but will not be so strongly affected by the
    occasional wildly incorrect prediction.
    
    from ..config.environment import Environment
from ..const import HTTP_TIMEOUT
from ..utils import unquote_path
from .errors import UserError
from .utils import generate_user_agent
    
    from inspect import getdoc
    
    
def get_version_info(scope):
    versioninfo = 'docker-compose version {}, build {}'.format(
        compose.__version__,
        get_build_version())
    
        def proxy_callable(self, call_name, *args, **kwargs):
        self.log.info('%s %s <- %s',
                      self.obj_name,
                      call_name,
                      format_call(args, kwargs))
    
        Arguments:
    - `sval`: the string value to parse
    
    
def get_named_volumes(services):
    volume_specs = [
        VolumeSpec.parse(volume)
        for service in services.values()
        for volume in service.get('volumes', [])
    ]
    names = {
        spec.external
        for spec in volume_specs
        if spec.is_named_volume
    }
    return {name: {'external': True} for name in names}
    
    
class BinaryDownloader(requests.Session):
    base_bintray_url = 'https://dl.bintray.com/{}'.format(BINTRAY_ORG)
    base_appveyor_url = 'https://ci.appveyor.com/api/projects/{}/artifacts/'.format(NAME)
    
    
class ScriptError(Exception):
    pass
    
    
def crash(*args, **kwargs):
    raise Crash()

    
        def test_format_return(self):
        expected = repr({'Id': 'ok'})
        actual = verbose_proxy.format_return({'Id': 'ok'}, 2)
        assert expected == actual