
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    cc_library(
    name = 'syntaxnet_link_feature_extractor',
    srcs = ['syntaxnet_link_feature_extractor.cc'],
    hdrs = ['syntaxnet_link_feature_extractor.h'],
    deps = [
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:embedding_feature_extractor',
        '//syntaxnet:parser_transitions',
        '//syntaxnet:task_context',
    ],
)
    
    from tensorflow.python.platform import gfile
    
        # Compute the pair, source, and target potentials.
    pairs_bxnxl = digraph_ops.LabelPotentialsFromTokenPairs(sources_bxnxs,
                                                            targets_bxnxt,
                                                            weights_pair)
    sources_bxnxl = digraph_ops.LabelPotentialsFromTokens(sources_bxnxs,
                                                          weights_source)
    targets_bxnxl = digraph_ops.LabelPotentialsFromTokens(targets_bxnxt,
                                                          weights_target)
    
    from dragnn.python import component
from dragnn.python import dragnn_ops
from dragnn.python import network_units
from syntaxnet.util import check
    
        # Check that the loss op is present.
    op_names = [op.name for op in tf.get_default_graph().get_operations()]
    self.assertTrue('train_test/compute_loss/'
                    'sigmoid_cross_entropy_with_logits' in op_names)
    
      This method exports a master_spec and associated files into the SavedModel's
  'assets.extra' directory (which is unmanaged). All resources are added to the
  'assets.extra' directory using sanitized paths. The master spec itself is
  located at the base of the assets.extra directory.
    
        # Export the graph via SavedModel. (Here, we maintain a handle to the graph
    # for comparison, but that's usually not necessary.)  Note that the export
    # path must not already exist.
    export_path = os.path.join(test_flags.temp_dir(), 'export2')
    dragnn_model_saver_lib.clean_output_paths(export_path)
    saver_graph = tf.Graph()
    
    numeric_range = r'''
    \[
        (?:[0-9]+:[0-9]+)               # numeric begin:end
        (?::[0-9]+)?                    # numeric :step (optional)
    \]
'''
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
            shuge = '12345' * 120
        huge = 1 << 30000
        mhuge = -huge
        namespace = {'huge': huge, 'mhuge': mhuge, 'shuge': shuge, 'math': math}
        for test in ['float(huge)', 'float(mhuge)',
                     'complex(huge)', 'complex(mhuge)',
                     'complex(huge, 1)', 'complex(mhuge, 1)',
                     'complex(1, huge)', 'complex(1, mhuge)',
                     '1. + huge', 'huge + 1.', '1. + mhuge', 'mhuge + 1.',
                     '1. - huge', 'huge - 1.', '1. - mhuge', 'mhuge - 1.',
                     '1. * huge', 'huge * 1.', '1. * mhuge', 'mhuge * 1.',
                     '1. // huge', 'huge // 1.', '1. // mhuge', 'mhuge // 1.',
                     '1. / huge', 'huge / 1.', '1. / mhuge', 'mhuge / 1.',
                     '1. ** huge', 'huge ** 1.', '1. ** mhuge', 'mhuge ** 1.',
                     'math.sin(huge)', 'math.sin(mhuge)',
                     'math.sqrt(huge)', 'math.sqrt(mhuge)', # should do better
                     # math.floor() of an int returns an int now
                     ##'math.floor(huge)', 'math.floor(mhuge)',
                     ]:
    
        print('n = %d\n' % n)
    
        objects = []
    libs = ['shell32.lib', 'comdlg32.lib', 'wsock32.lib', 'user32.lib', 'oleaut32.lib']
    for moddefn in moddefns:
        print('# Module', moddefn.name)
        for file in moddefn.sourceFiles:
            base = os.path.basename(file)
            base, ext = os.path.splitext(base)
            objects.append(base + '.obj')
            print(r'$(temp_dir)\%s.obj: '%s'' % (base, file))
            print('\t@$(CC) -c -nologo /Fo$* $(cdl) $(c_debug) /D BUILD_FREEZE', end=' ')
            print(''-I$(pythonhome)/Include'  '-I$(pythonhome)/PC' \\')
            print('\t\t$(cflags) $(cdebug) $(cinclude) \\')
            extra = moddefn.GetCompilerOptions()
            if extra:
                print('\t\t%s \\' % (' '.join(extra),))
            print('\t\t'%s'' % file)
            print()
    
    class IssuesTestCase(BaseTestCase):
    '''Test fixed bdb issues.'''
    
    @dataclass
class CV:
    T_CV4 = ClassVar
    cv0: ClassVar[int] = 20
    cv1: ClassVar = 30
    cv2: T_CV2
    cv3: T_CV3
    not_cv4: T_CV4  # When using string annotations, this field is not recognized as a ClassVar.
    
    
Package = Union[str, ModuleType]
Resource = Union[str, os.PathLike]
    
            g = gen()
        try:
            raise ValueError
        except Exception:
            self.assertEqual(next(g), 'done')
        self.assertEqual(sys.exc_info(), (None, None, None))