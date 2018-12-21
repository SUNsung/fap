
        
        FORWARD_SLASH = '/'.freeze
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
            # If our highlighter is CodeRay we go in to merge the CodeRay defaults
        # with your 'coderay' key if it's there, deprecating it in the
        # process of you using it.
        def modernize_coderay_config
          unless @config['coderay'].empty?
            Jekyll::Deprecator.deprecation_message(
              'You are using 'kramdown.coderay' in your configuration, ' \
              'please use 'syntax_highlighter_opts' instead.'
            )
    
        brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
    module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
        def self.prune?(path, options = {})
      @time ||= Time.now
    
      def describe_python
    python = which 'python'
    return 'N/A' if python.nil?
    python_binary = Utils.popen_read python, '-c', 'import sys; sys.stdout.write(sys.executable)'
    python_binary = Pathname.new(python_binary).realpath
    if python == python_binary
      python
    else
      '#{python} => #{python_binary}'
    end
  end
    
    class PrettyListing
  def initialize(path)
    Pathname.new(path).children.sort_by { |p| p.to_s.downcase }.each do |pn|
      case pn.basename.to_s
      when 'bin', 'sbin'
        pn.find { |pnn| puts pnn unless pnn.directory? }
      when 'lib'
        print_dir pn do |pnn|
          # dylibs have multiple symlinks and we don't care about them
          (pnn.extname == '.dylib' || pnn.extname == '.pc') && !pnn.symlink?
        end
      else
        if pn.directory?
          if pn.symlink?
            puts '#{pn} -> #{pn.readlink}'
          else
            print_dir pn
          end
        elsif Metafiles.list?(pn.basename.to_s)
          puts pn
        end
      end
    end
  end
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
    task :gemspec => 'rack-protection.gemspec'
task :default => :spec
task :test    => :spec

    
    desc 'Run integration test'
Cucumber::Rake::Task.new do |t|
  t.cucumber_opts = %w{--format progress}
end
    
        def self.definitions_for(klass)
      instance.definitions_for(klass)
    end
    
        def initialize(filepath)
      @filepath = filepath
    end
    
        # True if the dimensions represent a square
    def square?
      height == width
    end
    
        def define_getters
      define_instance_getter
      define_class_getter
    end
    
        # Returns the extension of the file. e.g. 'jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension.
    def extension attachment, style_name
      ((style = attachment.styles[style_name.to_s.to_sym]) && style[:format]) ||
        File.extname(attachment.original_filename).sub(/\A\.+/, ''.freeze)
    end