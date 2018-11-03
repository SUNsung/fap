
        
                def left_whole_line_range(loc_begin)
          if range_by_whole_lines(loc_begin).source.strip == '{'
            range_by_whole_lines(loc_begin, include_final_newline: true)
          else
            loc_begin
          end
        end
    }
    
    RSpec.describe RuboCop::Cop::Layout::MultilineArrayBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
            def delimiter_delta
          return 0 if first.same_line?(second)
          return 0 if first.delimiter != second.delimiter
    
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