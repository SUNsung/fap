
        
                # This contains all the provider plugins by name, and returns
        # the provider class and options.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :providers
    
            # This returns all the registered communicators.
        #
        # @return [Hash]
        def communicators
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.communicator)
            end
          end
        end
    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
        def type_from_file_command
      @type_from_file_command ||=
        FileCommandContentTypeDetector.new(@filepath).detect
    end
  end
end

    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end