
        
            def subpath
      @subpath ||= subpath_to(current_url)
    end
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
        def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
            css('th h3').each do |node|
          node.name = 'span'
        end
    
          private
    
          def right_diff_line_number(id, line)
        if line =~ /^@@/
          m, ri                   = *line.match(/\+(\d+)/)
          @right_diff_line_number = ri.to_i
          @current_line_number    = @right_diff_line_number
          ret                     = '...'
        elsif line[0] == ?-
          ret = ' '
        elsif line[0] == ?+
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        else
          ret                     = @right_diff_line_number.to_s
          @right_diff_line_number += 1
          @current_line_number    = @right_diff_line_number - 1
        end
        ret
      end
    end
  end
end

    
          def formats
        super(:markdown)
      end
    
          def css # custom css
        @css
      end
    
          def editable
        @editable
      end
    
        # Reset base path
    Precious::App.set(:wiki_options, { :base_path => nil })
  end
=end
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
    # external
require 'github/markup'
require 'sanitize'