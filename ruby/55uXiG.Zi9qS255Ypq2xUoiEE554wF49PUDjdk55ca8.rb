
        
            # An entry in the MachineIndex.
    class Entry
      # The unique ID for this entry. This is _not_ the ID for the
      # machine itself (which is provider-specific and in the data directory).
      #
      # @return [String]
      attr_reader :id
    
            protected
    
            # This contains all the registered guest capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :guest_capabilities
    
              format('% e', 109.52).should == ' 1.095200e+02'
          format('% E', 109.52).should == ' 1.095200E+02'
          format('% f', 10.952).should == ' 10.952000'
          format('% g', 12.1234).should == ' 12.1234'
          format('% G', 12.1234).should == ' 12.1234'
          format('% a', 196).should == ' 0x1.88p+7'
          format('% A', 196).should == ' 0X1.88P+7'
        end
    
            if tap_path = CaskLoader.tap_paths(token).first
          CaskLoader::FromTapPathLoader.new(tap_path).load
        elsif caskroom_path = Pathname.glob(path.join('.metadata/*/*/*/*.rb')).first
          CaskLoader::FromPathLoader.new(caskroom_path).load
        else
          CaskLoader.load(token)
        end
      end
    end
  end
end

    
          # If the `:filename` option is passed in without an importer,
      # assume it's using the default filesystem importer.
      options[:importer] ||= options[:filesystem_importer].new('.') if options[:filename]
    
          super
      input = @options[:input]
      if File.directory?(input)
        raise 'Error: '#{input.path}' is a directory (did you mean to use --recursive?)'
      end
      output = @options[:output]
      output = input if @options[:in_place]
      process_file(input, output)
    end
    
          # Find a Sass file, if it exists.
      #
      # This is the primary entry point of the Importer.
      # It corresponds directly to an `@import` statement in Sass.
      # It should do three basic things:
      #
      # * Determine if the URI is in this importer's format.
      #   If not, return nil.
      # * Determine if the file indicated by the URI actually exists and is readable.
      #   If not, return nil.
      # * Read the file and place the contents in a {Sass::Engine}.
      #   Return that engine.
      #
      # If this importer's format allows for file extensions,
      # it should treat them the same way as the default {Filesystem} importer.
      # If the URI explicitly has a `.sass` or `.scss` filename,
      # the importer should look for that exact file
      # and import it as the syntax indicated.
      # If it doesn't exist, the importer should return nil.
      #
      # If the URI doesn't have either of these extensions,
      # the importer should look for files with the extensions.
      # If no such files exist, it should return nil.
      #
      # The {Sass::Engine} to be returned should be passed `options`,
      # with a few modifications. `:syntax` should be set appropriately,
      # `:filename` should be set to `uri`,
      # and `:importer` should be set to this importer.
      #
      # @param uri [String] The URI to import.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` that's currently being resolved.
      #   This is safe for subclasses to modify destructively.
      #   Callers should only pass in a value they don't mind being destructively modified.
      # @return [Sass::Engine, nil] An Engine containing the imported file,
      #   or nil if it couldn't be found or was in the wrong format.
      def find(uri, options)
        Sass::Util.abstract(self)
      end
    
        # Check requiring libraries successfully.
    # See https://github.com/rubocop-hq/rubocop/pull/4523#issuecomment-309136113
    def check_requiring_libraries
      sh!('ruby -I lib -r rubocop -e 'exit 0'')
    end
    
        it 'when using an explicit early return from a block' do
      expect_no_offenses(<<-RUBY.strip_indent)
        objects.each do |object|
          next object.#{method} if do_the_save
          do_something_else
        end
      RUBY
    end