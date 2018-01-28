
        
              configure_sass
    end
    
        # @import 'file.less' to '#{target_path}file;'
    def replace_file_imports(less, target_path = '')
      less.gsub %r([@\$]import ['|']([\w\-/]+).less['|'];),
                %Q(@import '#{target_path}\\1';)
    end
    
      def _log(level, message)
    @messages << [level, message]
  end
end

    
      Sass::Plugin.options.merge!(config)
    
        # Starts the read-eval-print loop.
    def run
      environment = Environment.new
      @line = 0
      loop do
        @line += 1
        unless (text = Readline.readline('>> '))
          puts
          return
        end