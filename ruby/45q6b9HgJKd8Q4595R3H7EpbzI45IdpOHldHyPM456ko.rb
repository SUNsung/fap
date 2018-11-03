
        
            initializer 'action_view.form_with_generates_ids' do |app|
      ActiveSupport.on_load(:action_view) do
        form_with_generates_ids = app.config.action_view.delete(:form_with_generates_ids)
        unless form_with_generates_ids.nil?
          ActionView::Helpers::FormHelper.form_with_generates_ids = form_with_generates_ids
        end
      end
    end
    
        # Direct access to template rendering.
    def render_template(context, options) #:nodoc:
      TemplateRenderer.new(@lookup_context).render(context, options)
    end
    
          @options = options.merge(:_convert => true)
      # Backwards compatibility
      @options[:old] = true if @options[:alternate] == false
      @template = template
      @checked_encoding = false
    end
    
          # Almost any real Unix terminal will support color,
      # so we just filter for Windows terms (which don't set TERM)
      # and not-real terminals, which aren't ttys.
      return str if ENV['TERM'].nil? || ENV['TERM'].empty? || !STDOUT.tty?
      '\e[#{COLORS[color]}m#{str}\e[0m'
    end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
    require 'rake/testtask'
Rake::TestTask.new(:test) do |test|
  test.libs << 'lib' << 'test' << '.'
  test.pattern = 'test/**/test_*.rb'
  test.verbose = true
end