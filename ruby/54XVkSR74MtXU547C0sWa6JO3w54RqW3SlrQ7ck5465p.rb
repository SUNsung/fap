
        
            # [Boolean] Set if the variable is to be converted to a shell-escaped String when provided as a Hash or Array
    # Allows items expected to be strings used in shell arguments to be alternatively provided as a Hash or Array for better readability and auto-escaped for us.
    attr_accessor :allow_shell_conversion
    
              it 'asks if no other option' do
            allow(FastlaneCore::Helper).to receive(:test?).and_return(false)
            allow(FastlaneCore::UI).to receive(:interactive?).and_return(true)
            allow(FastlaneCore::Helper).to receive(:ci?).and_return(false)
    
            self
      end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
          # Calls the given block for each condition node in the `when` branch.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_condition
        return conditions.to_enum(__method__) unless block_given?
    
        def options_config=(options_config)
      loaded_config = ConfigLoader.load_file(options_config)
      @options_config = ConfigLoader.merge_with_default(loaded_config,
                                                        options_config)
    end