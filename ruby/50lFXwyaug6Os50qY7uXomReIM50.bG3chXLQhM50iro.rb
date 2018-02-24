
        
              it 'does not process payload if invalid signature exists' do
        payload['signature'] = {'type' => 'RsaSignature2017'}
    
        respond_to do |format|
      format.html do
        serializable_resource = ActiveModelSerializers::SerializableResource.new(InitialStatePresenter.new(initial_state_params), serializer: InitialStateSerializer)
        @initial_state_json   = serializable_resource.to_json
      end
    
        def process_file(input, output)
      input_path, output_path = path_for(input), path_for(output)
      if input_path
        @options[:from] ||=
          case input_path
          when /\.scss$/; :scss
          when /\.sass$/; :sass
          when /\.less$/; raise 'sass-convert no longer supports LessCSS.'
          when /\.css$/; :css
          end
      elsif @options[:in_place]
        raise 'Error: the --in-place option requires a filename.'
      end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end