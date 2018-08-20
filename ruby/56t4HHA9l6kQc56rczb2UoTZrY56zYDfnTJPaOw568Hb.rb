
        
              # Run ::process method in a given set of Jekyll::Command subclasses and suggest
      # re-running the associated command with --trace switch to obtain any additional
      # information or backtrace regarding the encountered Exception.
      #
      # cmd     - the Jekyll::Command to be handled
      # options - configuration overrides
      # klass   - an array of Jekyll::Command subclasses associated with the command
      #
      # Note that all exceptions are rescued..
      # rubocop: disable RescueException
      def process_with_graceful_fail(cmd, options, *klass)
        klass.each { |k| k.process(options) if k.respond_to?(:process) }
      rescue Exception => e
        raise e if cmd.trace
    
            def collect_urls(urls, things, destination)
          things.each do |thing|
            dest = thing.destination(destination)
            if urls[dest]
              urls[dest] << thing.path
            else
              urls[dest] = [thing.path]
            end
          end
          urls
        end
    
          def html_pages
        @site_html_pages ||= @obj.pages.select do |page|
          page.html? || page.url.end_with?('/')
        end
      end
    
      included do
    self.validate :validate_email_options
  end
    
      def destroy
    @event.destroy
    
      def user_credential_params
    params.require(:user_credential).permit(:credential_name, :credential_value, :mode)
  end
end

    
        #
    # Instance Methods
    #
    
    # Copyright (C) 2008 Rapid7, Inc.
    
                end
    
          when :login_fail
        if(s[:user] and s[:pass])
          report_auth_info(s.merge({:active => false}))
          print_status('Failed FTP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]}')
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
        # margin: a -b
    # LESS: sets 2 values
    # Sass: sets 1 value (a-b)
    # This wraps a and -b so they evaluates to 2 values in Sass
    def replace_calculation_semantics(file)
      # split_prop_val.call('(@navbar-padding-vertical / 2) -@navbar-padding-horizontal')
      # #=> ['(navbar-padding-vertical / 2)', '-navbar-padding-horizontal']
      split_prop_val = proc { |val|
        s         = CharStringScanner.new(val)
        r         = []
        buff      = ''
        d         = 0
        prop_char = %r([\$\w\-/\*\+%!])
        while (token = s.scan_next(/([\)\(]|\s+|#{prop_char}+)/))
          buff << token
          case token
            when '('
              d += 1
            when ')'
              d -= 1
              if d == 0
                r << buff
                buff = ''
              end
            when /\s/
              if d == 0 && !buff.strip.empty?
                r << buff
                buff = ''
              end
          end
        end
        r << buff unless buff.empty?
        r.map(&:strip)
      }
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
          private
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy
