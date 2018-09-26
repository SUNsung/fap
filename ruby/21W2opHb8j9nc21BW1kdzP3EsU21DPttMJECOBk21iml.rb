
        
        puts 'Deduping #{links.size} links...'
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is truthy.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the truthy branch node of the `if` node
      # @return [nil] if the truthy branch is empty
      def if_branch
        node_parts[1]
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end
