
        
            options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        options[:attribution] = <<-HTML
      &copy; 1997&ndash;2018 The PHP Documentation Group<br>
      Licensed under the Creative Commons Attribution License v3.0 or later.
    HTML
  end
end

    
        delegate :empty?, :blank?, to: :pages
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
        prune
  end
    
        # Returns a deep copy of this query and all its children.
    #
    # @return [Query]
    def deep_copy
      Query.new(
        modifier.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.deep_copy : c},
        type.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.deep_copy : c},
        expressions.map {|e| e.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.deep_copy : c}})
    end
  end
    
      # GET /books/1/edit
  def edit
  end
    
            def on_def(node)
          _method, arguments, = *node
          arguments = *arguments
    
          # Checks whether this node is an `unless` statement. (This is not true
      # of ternary operators and `if` statements.)
      #
      # @return [Boolean] whether the node is an `unless` statement
      def unless?
        keyword == 'unless'
      end
    
        def blank_name?
      @filepath.nil? || @filepath.empty?
    end
    
        # Returns the larger of the two dimensions
    def larger
      [height, width].max
    end
    
            def failure_message
          '#{expected_attachment}\n'.tap do |message|
            message << accepted_types_and_failures.to_s
            message << '\n\n' if @allowed_types.present? && @rejected_types.present?
            message << rejected_types_and_failures.to_s
          end
        end
    
            if record.errors.include? attribute
          record.errors[attribute].each do |error|
            record.errors.add base_attribute, error
          end
        end
      end
    
          def validate_whitelist(record, attribute, value)
        if allowed.present? && allowed.none? { |type| type === value }
          mark_invalid record, attribute, allowed
        end
      end