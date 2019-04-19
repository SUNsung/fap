
        
            private
    
        weeks
  end
    
      def available_locales
    I18n.available_locales.reverse
  end
end

    
      private
    
      def session_needs_update?
    !current_session.nil? && current_session.updated_at < UPDATE_SIGN_IN_HOURS.hours.ago
  end
end

    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          # Calls the given block for each `key` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_key
        return pairs.map(&:key).to_enum unless block_given?
    
            def keyword_splat?
          [first, second].any?(&:kwsplat_type?)
        end
      end
    
    module RuboCop
  module AST
    # Common functionality for nodes that are parameterized:
    # `send`, `super`, `zsuper`, `def`, `defs`
    module ParameterizedNode
      # Checks whether this node's arguments are wrapped in parentheses.
      #
      # @return [Boolean] whether this node's arguments are
      #                   wrapped in parentheses
      def parenthesized?
        loc.end && loc.end.is?(')')
      end