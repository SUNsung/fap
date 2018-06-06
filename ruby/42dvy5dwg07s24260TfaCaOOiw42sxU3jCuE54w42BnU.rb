
        
            # Override of method_missing to check in @data for the key.
    def method_missing(method, *args, &blck)
      if docs.respond_to?(method.to_sym)
        Jekyll.logger.warn 'Deprecation:',
                           '#{label}.#{method} should be changed to #{label}.docs.#{method}.'
        Jekyll.logger.warn '', 'Called by #{caller(0..0)}.'
        docs.public_send(method.to_sym, *args, &blck)
      else
        super
      end
    end
    
            msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
            def html?
          @response['Content-Type'] =~ %r!text/html!
        end
      end
    
          def matches(ext)
        extname_list.include?(ext.downcase)
      end
    
        # Read the YAML frontmatter.
    #
    # base - The String path to the dir containing the file.
    # name - The String filename of the file.
    # opts - optional parameter to File.read, default at site configs
    #
    # Returns nothing.
    # rubocop:disable Metrics/AbcSize
    def read_yaml(base, name, opts = {})
      filename = File.join(base, name)
    
            expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
            # This returns all synced folder implementations.
        #
        # @return [Registry]
        def synced_folders
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.synced_folders)
            end
          end
        end
    
                  # An IO::WaitReadable means there may be more IO but this
              # IO object is not ready to be read from yet. No problem,
              # we read as much as we can, so we break.
              breakable = true
            elsif e.is_a?(Errno::EAGAIN)
              # Otherwise, we just look for the EAGAIN error which should be
              # all that IO::WaitReadable does in Ruby 1.9.
              breakable = true
            end
    
            # If we're just checking, then just return exit codes
        if options[:check]
          return 0 if cap_host.capability?(name)
          return 1
        end
    
          ::Sass.load_paths << stylesheets_path