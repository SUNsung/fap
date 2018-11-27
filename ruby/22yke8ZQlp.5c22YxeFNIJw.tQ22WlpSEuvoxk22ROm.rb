
        
        def docs_folder
  'docs'
end
    
    # Test https://github.com/jekyll/jekyll/pull/6735#discussion_r165499868
# ------------------------------------------------------------------------
def check_with_regex(content)
  !content.to_s.match?(%r!{[{%]!)
end
    }
    }
    
    # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
            def initialize(_opts)
          # If EventMachine SSL support on Windows ever gets better, the code below will
          # set up the reactor to handle SSL
          #
          # @ssl_enabled = opts['ssl_cert'] && opts['ssl_key']
          # if @ssl_enabled
          #   em_opts[:tls_options] = {
          #   :private_key_file => Jekyll.sanitized_path(opts['source'], opts['ssl_key']),
          #   :cert_chain_file  => Jekyll.sanitized_path(opts['source'], opts['ssl_cert'])
          #   }
          #   em_opts[:secure] = true
          # end