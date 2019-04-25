
        
        
    {      # Checks whether the `hash` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `hash` literal is enclosed in braces
      def braces?
        loc.end && loc.end.is?('}')
      end
    end
  end
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

    
          # Returns the delta between this element's value and the argument's.
      #
      # @note Keyword splats always return a delta of 0
      #
      # @return [Integer] the delta between the two values
      def value_delta(other)
        HashElementDelta.new(self, other).value_delta
      end
    
          # Checks whether the `when` node has a `then` keyword.
      #
      # @return [Boolean] whether the `when` node has a `then` keyword
      def then?
        loc.begin && loc.begin.is?('then')
      end
    
          dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
          def initialize(department, cop_name)
        @department = department.to_sym if department
        @cop_name   = cop_name
      end