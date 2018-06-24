
        
        from tensorflow.python.platform import gfile
    
    cc_library(
    name = 'compute_session',
    hdrs = ['compute_session.h'],
    deps = [
        ':index_translator',
        ':input_batch_cache',
        '//dragnn/components/util:bulk_feature_extractor',
        '//dragnn/core/interfaces:component',
        '//dragnn/core/util:label',
        '//dragnn/protos:spec_proto_cc',
        '//dragnn/protos:trace_proto_cc',
    ],
)
    
    tf_proto_library_cc(
    name = 'data_proto',
    srcs = ['data.proto'],
)
    
    
def fetch_dense_ragged_embeddings(comp, state):
  '''Gets embeddings in RaggedTensor format.'''
  _validate_embedded_fixed_features(comp)
  num_channels = len(comp.spec.fixed_feature)
  if not num_channels:
    return state.handle, []
  tf.logging.info('[%s] Adding %d fast fixed features', comp.name, num_channels)
    
      def testNormalFixedFeaturesAreDifferentiable(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'IdentityNetwork'
        }
        fixed_feature {
          name: 'fixed' embedding_dim: 32 size: 1
          pretrained_embedding_matrix { part {} }
          vocab { part {} }
        }
        component_builder {
          registered_name: 'bulk_component.BulkFeatureExtractorComponentBuilder'
        }
        ''', component_spec)
    comp = bulk_component.BulkFeatureExtractorComponentBuilder(
        self.master, component_spec)
    
      def testModelExport(self):
    # Get the master spec and params for this graph.
    master_spec = self.LoadSpec('ud-hungarian.master-spec')
    params_path = os.path.join(
        test_flags.source_root(),
        'dragnn/python/testdata'
        '/ud-hungarian.params')
    
        def to_json(self, value):
        return text_type(value.__html__())
    
                app.config['IMAGE_STORE_TYPE'] = 'fs'
            app.config['IMAGE_STORE_PATH'] = '/var/app/images'
            app.config['IMAGE_STORE_BASE_URL'] = 'http://img.website.com'
            image_store_config = app.config.get_namespace('IMAGE_STORE_')
    
    import os
import re
import sys
from datetime import date, datetime
from subprocess import PIPE, Popen
    
    
def test_installed_module_paths(modules_tmpdir, modules_tmpdir_prefix,
                                purge_module, site_packages, limit_loader):
    site_packages.join('site_app.py').write(
        'import flask\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('site_app')
    
        assert wsgi_errors_stream._get_current_object() is sys.stderr