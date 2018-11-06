
        
              unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        delegate :empty?, :blank?, to: :pages
    
        def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
          if dest.end_with? '/'
        dest_dir.relative_path_from(base_dir).to_s.tap do |result|
          result << '/' if result != '.'
        end
      else
        dest_dir.parent.relative_path_from(base_dir).join(dest.split('/').last).to_s
      end
    end
    
            title = at_css('h1').content.strip
        if root_page?
          at_css('h1').content = 'Angular 2 Documentation'
        elsif title == 'Index'
          at_css('h1').content = result[:entries].first.name
        elsif title == 'Angular'
          at_css('h1').content = slug.split('/').last.gsub('-', ' ')
        elsif at_css('.breadcrumbs') && title != result[:entries].first.name
          at_css('h1').content = result[:entries].first.name
        end
    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
      it 'does not raise an error on a tainted, frozen object' do
    o = Object.new.taint.freeze
    o.taint.should equal(o)
  end
    
    describe 'Kernel#trace_var' do
  before :each do
    $Kernel_trace_var_global = nil
  end
    
        def pos
      byte_to_str_pos @s.pos
    end
    
          less.gsub /&:extend\((#{SELECTOR_RE})(?: all)?\)/ do
        selector = $1
        selector =~ /\.([\w-]+)/
        mixin    = $1
        if mixin && mixin_names.include?(mixin)
          '@include #{mixin}'
        else
          '@extend #{selector}'
        end
      end
    end
    
      it 'ignores single-line arrays' do
    expect_no_offenses('[a, b, c]')
  end
    
          # Returns the keyword of the `if` statement as a string. Returns an empty
      # string for ternary operators.
      #
      # @return [String] the keyword of the `if` statement
      def keyword
        ternary? ? '' : loc.keyword.source
      end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end