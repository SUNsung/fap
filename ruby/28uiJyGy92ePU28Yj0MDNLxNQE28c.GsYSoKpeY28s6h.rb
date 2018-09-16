
        
              def save
        @changed = identity.save
      end
    
          def find_user_from_access_token
        return unless access_token
    
      desc 'Generate Documentation'
  task :doc => [:yard, 'doc:add_ids']
  task :redoc => [:yard, 'doc:add_ids']
rescue LoadError
  desc 'Generate Documentation'
  task :doc => :rdoc
  task :yard => :rdoc
end
    
          # Backwards compatibility
      options[:property_syntax] ||= options[:attribute_syntax]
      case options[:property_syntax]
      when :alternate; options[:property_syntax] = :new
      when :normal; options[:property_syntax] = :old
      end
      options[:sourcemap] = :auto if options[:sourcemap] == true
      options[:sourcemap] = :none if options[:sourcemap] == false
    
        # Returns a string representation of the Sass backtrace.
    #
    # @param default_filename [String] The filename to use for unknown files
    # @see #sass_backtrace
    # @return [String]
    def sass_backtrace_str(default_filename = 'an unknown file')
      lines = message.split('\n')
      msg = lines[0] + lines[1..-1].
        map {|l| '\n' + (' ' * 'Error: '.size) + l}.join
      'Error: #{msg}' +
        sass_backtrace.each_with_index.map do |entry, i|
          '\n        #{i == 0 ? 'on' : 'from'} line #{entry[:line]}' +
            ' of #{entry[:filename] || default_filename}' +
            (entry[:mixin] ? ', in `#{entry[:mixin]}'' : '')
        end.join
    end
    
          # Almost any real Unix terminal will support color,
      # so we just filter for Windows terms (which don't set TERM)
      # and not-real terminals, which aren't ttys.
      return str if ENV['TERM'].nil? || ENV['TERM'].empty? || !STDOUT.tty?
      '\e[#{COLORS[color]}m#{str}\e[0m'
    end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
          @klass.send :define_method, @name do |*args|
        ivar = '@attachment_#{name}'
        attachment = instance_variable_get(ivar)