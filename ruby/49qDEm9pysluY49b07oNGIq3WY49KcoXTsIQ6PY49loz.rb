
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
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
    
            def initialize(config)
          @main_fallback_highlighter = config['highlighter'] || 'rouge'
          @config = config['kramdown'] || {}
          @highlighter = nil
          setup
        end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        if res[1] == IAX_SUBTYPE_REGREJ
      reason = res[2][IAX_IE_REGREJ_CAUSE] || 'Unknown Reason'
      dprint('REGREJ: #{reason}')
      return
    end
    
              res
        end
    
                k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
            k3 = OpenSSL::HMAC.digest('MD5', k1, checksum)
    
              def initialize(options = {})
            self.class.attributes.each do |attr|
              if options.has_key?(attr)
                m = (attr.to_s + '=').to_sym
                self.send(m, options[attr])
              end
            end
          end