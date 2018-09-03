
        
        def normalize_bullets(markdown)
  markdown.gsub(%r!\n\s{2}\*{1}!, '\n-')
end
    
    def run_jekyll(args)
  args = args.strip.split(' ') # Shellwords?
  process = run_in_shell('ruby', Paths.jekyll_bin.to_s, *args, '--trace')
  process.exitstatus.zero?
end
    
            # Build your Jekyll site.
        #
        # site - the Jekyll::Site instance to build
        # options - A Hash of options passed to the command
        #
        # Returns nothing.
        def build(site, options)
          t = Time.now
          source      = options['source']
          destination = options['destination']
          incremental = options['incremental']
          Jekyll.logger.info 'Source:', source
          Jekyll.logger.info 'Destination:', destination
          Jekyll.logger.info 'Incremental build:',
                             (incremental ? 'enabled' : 'disabled. Enable with --incremental')
          Jekyll.logger.info 'Generating...'
          process_site(site)
          Jekyll.logger.info '', 'done in #{(Time.now - t).round(3)} seconds.'
        end
    
            def urls_only_differ_by_case(site)
          urls_only_differ_by_case = false
          urls = case_insensitive_urls(site.pages + site.docs_to_write, site.dest)
          urls.each_value do |real_urls|
            next unless real_urls.uniq.size > 1
            urls_only_differ_by_case = true
            Jekyll.logger.warn 'Warning:', 'The following URLs only differ' \
              ' by case. On a case-insensitive file system one of the URLs' \
              ' will be overwritten by the other: #{real_urls.join(', ')}'
          end
          urls_only_differ_by_case
        end
    
        if keys.empty?
      raise ArgumentError, 'Range unspecified. Specify the :within, :maximum, :minimum, or :is option.'
    end
    
              @coverage.to_f.round(2)
        end
    
              if @box
            entry.extra_data['box'] = {
              'name'     => @box.name,
              'provider' => @box.provider.to_s,
              'version'  => @box.version.to_s,
            }
          end
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Machine] machine Access to the machine that is being
        #   validated.
        # @return [Hash]
        def validate(machine)
          return { self.to_s => _detected_errors }
        end
    
            # Defines additional configuration keys to be available in the
        # Vagrantfile. The configuration class should be returned by a
        # block passed to this method. This is done to ensure that the class
        # is lazy loaded, so if your class inherits from any classes that
        # are specific to Vagrant 1.0, then the plugin can still be defined
        # without breaking anything in future versions of Vagrant.
        #
        # @param [String] name Configuration key.
        def self.config(name, scope=nil, &block)
          scope ||= :top
          components.configs[scope].register(name.to_sym, &block)
          nil
        end