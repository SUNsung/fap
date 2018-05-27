
        
        def kikaku(a)
  a.collect {|x| x - a[0]}
end
def ud(a)
  kikaku(a.collect {|x| ((x+NP)%ROW)-ROW*((x+NP)/ROW) }.sort)
end
def rl(a)
  kikaku(a.collect {|x| ROW*((x+NP)/ROW)+ROW-((x+NP)%ROW)}.sort)
end
def xy(a)
  kikaku(a.collect {|x| ROW*((x+NP)%ROW) + (x+NP)/ROW }.sort)
end
    
            attr_writer :log_levels
    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
            Readline::HISTORY << text
        parse_input(environment, text)
      end
    end
    
        # Converts a script node into a corresponding string interpolation
    # expression.
    #
    # @param node_or_interp [Sass::Script::Tree::Node]
    # @return [Sass::Script::Tree::StringInterpolation]
    def to_string_interpolation(node_or_interp)
      unless node_or_interp.is_a?(Interpolation)
        node = node_or_interp
        return string_literal(node.value.to_s) if node.is_a?(Literal)
        if node.is_a?(StringInterpolation)
          return concat(string_literal(node.quote), concat(node, string_literal(node.quote)))
        end
        return StringInterpolation.new(string_literal(''), node, string_literal(''))
      end