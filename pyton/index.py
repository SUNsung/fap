
        
        cc_library(
    name = 'dragnn_ops_cc',
    srcs = [
        'ops/dragnn_op_kernels.cc',
        'ops/dragnn_ops.cc',
    ],
    deps = [
        ':compute_session',
        ':compute_session_op',
        ':compute_session_pool',
        ':resource_container',
        ':shape_helpers',
        '//dragnn/core/util:label',
        '//dragnn/protos:data_proto_cc',
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
        '@org_tensorflow//third_party/eigen3',
    ],
    alwayslink = 1,
)
    
    tf_proto_library_py(
    name = 'spec_pb2',
    srcs = ['spec.proto'],
)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      # The one-hot argmax is a subgradient of max.  Convert the batch of maximal
  # spanning trees into 0/1 indicators, then scale them by the relevant output
  # gradients from |d_loss_d_max_scores|.  Note that |d_loss_d_max_scores| must
  # be reshaped in order for it to broadcast across the batch dimension.
  indicators_bxmxm = tf.one_hot(argmax_sources_bxm, input_dim, dtype=dtype)
  d_loss_d_max_scores_bx1 = tf.expand_dims(d_loss_d_max_scores, -1)
  d_loss_d_max_scores_bx1x1 = tf.expand_dims(d_loss_d_max_scores_bx1, -1)
  d_loss_d_scores_bxmxm = indicators_bxmxm * d_loss_d_max_scores_bx1x1
  return None, d_loss_d_scores_bxmxm
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
            # Method command
        self.sendCommand(self.factory.method, self.factory.path)
        # Headers
        for key, values in self.factory.headers.items():
            for value in values:
                self.sendHeader(key, value)
        self.endHeaders()
        # Body
        if self.factory.body is not None:
            self.transport.write(self.factory.body)