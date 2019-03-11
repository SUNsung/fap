
        
                # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def guests
          result = {}
    
            # This unregisters a plugin so that its components will no longer
        # be used. Note that this should only be used for testing purposes.
        def unregister(plugin)
          if @registered.include?(plugin)
            @logger.info('Unregistered: #{plugin.name}')
            @registered.delete(plugin)
          end
        end
      end
    end
  end
end

    
        # Iterate over the keyspace.
    def each(&block)
      @items.each do |key, _|
        yield key, get(key)
      end
    end
    
      context 'brew' do
    subject { HOMEBREW_LIBRARY_PATH.parent.parent/'bin/brew' }
    
          its(:env) { is_expected.to use_userpaths }
    end
    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
          def initialize(app, options = {})
        @app, @options = app, default_options.merge(options)
      end
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'