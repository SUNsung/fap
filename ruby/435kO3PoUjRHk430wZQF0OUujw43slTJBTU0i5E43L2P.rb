
        
        Description:
  Converts SCSS or Sass files to CSS.
END
    
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
    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
    module RuboCop
  module Cop
    module Layout
      # Checks for unnecessary additional spaces inside array percent literals
      # (i.e. %i/%w).
      #
      # @example
      #
      #   # bad
      #   %w(foo  bar  baz)
      #   # good
      #   %i(foo bar baz)
      class SpaceInsideArrayPercentLiteral < Cop
        include MatchRange
        include PercentLiteral
    
            def autocorrect(node)
          redundant_regex?(node) do |receiver, regex_str|
            receiver, regex_str = regex_str, receiver if receiver.is_a?(String)
            regex_str = regex_str[0..-3] # drop \Z anchor
            regex_str = interpret_string_escapes(regex_str)
    
            def literal_at_start?(regex_str)
          # is this regexp 'literal' in the sense of only matching literal
          # chars, rather than using metachars like . and * and so on?
          # also, is it anchored at the start of the string?
          # (tricky: \s, \d, and so on are metacharacters, but other characters
          #  escaped with a slash are just literals. LITERAL_REGEX takes all
          #  that into account.)
          regex_str =~ /\A\\A(?:#{LITERAL_REGEX})+\z/
        end
    
    module RuboCop
  module Cop
    module Lint
      # In math and Python, we can use `x < y < z` style comparison to compare
      # multiple value. However, we can't use the comparison in Ruby. However,
      # the comparison is not syntax error. This cop checks the bad usage of
      # comparison operators.
      #
      # @example
      #
      #   # bad
      #
      #   x < y < z
      #   10 <= x <= 20
      #
      # @example
      #
      #   # good
      #
      #   x < y && y < z
      #   10 <= x && x <= 20
      class MultipleCompare < Cop
        MSG = 'Use the `&&` operator to compare multiple values.'.freeze
    
        if as == :json
      if api_error?(data)
        data = generate_error_hash(data)
      else
        selected_fields = extract_fields(filter.to_s.strip)
        data.select! { |k,v| selected_fields.include?(k) } unless selected_fields.empty?
        unless options.include?(:exclude_default_metadata)
          data = data.to_hash
          if data.values.size == 0 && selected_fields.size > 0
            raise LogStash::Api::NotFoundError
          end
          data = default_metadata.merge(data)
        end
      end
    
      def _nt_regexp_expression
    start_index = index
    if node_cache[:regexp_expression].has_key?(index)
      cached = node_cache[:regexp_expression][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end