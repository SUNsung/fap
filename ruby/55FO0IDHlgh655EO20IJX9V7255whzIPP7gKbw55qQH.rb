
        
              # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
        # Returns a deep copy of this query list and all its children.
    #
    # @return [QueryList]
    def deep_copy
      QueryList.new(queries.map {|q| q.deep_copy})
    end
  end
    
      if defined? config.symbolize_keys!
    config.symbolize_keys!
  end