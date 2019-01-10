
        
            def initialize(content)
      @content = content
      @html = document? ? parse_as_document : parse_as_fragment
    end
    
        def path
      @path ||= url.path
    end
    
        module FixInternalUrlsBehavior
      def self.included(base)
        base.extend ClassMethods
      end
    
          def other
        css('#example', '.example', '#description_source', '#description_demo', '[id$='example']', 'hr').remove
    
    DEPRECATION
    
              def set_local_#{name}(name, value)
            @#{name}s ||= {}
            @#{name}s[name.tr('_', '-')] = value
          end
    
        # Tells optparse how to parse the arguments.
    #
    # @param opts [OptionParser]
    def set_opts(opts)
      opts.banner = <<END
Usage: sass-convert [options] [INPUT] [OUTPUT]
    
        puts('Generated at #{target_file}')
  end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
        def valid_format?(local_file)
      ::File.extname(local_file).downcase == PACK_EXTENSION
    end
  end
end end end
