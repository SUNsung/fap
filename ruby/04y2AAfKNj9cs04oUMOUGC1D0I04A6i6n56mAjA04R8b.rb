
        
        begin
  error_pipe = UNIXSocket.open(ENV['HOMEBREW_ERROR_PIPE'], &:recv_io)
  error_pipe.fcntl(Fcntl::F_SETFD, Fcntl::FD_CLOEXEC)
    
      # True if a {Formula} is being built in C++11 mode.
  def cxx11?
    include?('c++11') && option_defined?('c++11')
  end
    
      def describe_java
    java_xml = Utils.popen_read('/usr/libexec/java_home', '--xml', '--failfast')
    return 'N/A' unless $?.success?
    javas = []
    REXML::XPath.each(REXML::Document.new(java_xml), '//key[text()='JVMVersion']/following-sibling::string') do |item|
      javas << item.text
    end
    javas.uniq.join(', ')
  end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
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
    
        if !updated
      puts 'Already up-to-date.'
    elsif hub.empty?
      puts 'No changes to formulae.'
    else
      hub.dump
      hub.reporters.each(&:migrate_tap_migration)
      hub.reporters.each(&:migrate_formula_rename)
      Descriptions.update_cache(hub)
    end
    
      def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
          @class_name = (options[:class_name] || name.to_s.classify).to_s
      @klass = Devise.ref(@class_name)
    
            # Find a user by its unlock token and try to unlock it.
        # If no user is found, returns a new user with an error.
        # If the user is not locked, creates an error for the user
        # Options must have the unlock_token
        def unlock_access_by_token(unlock_token)
          original_token = unlock_token
          unlock_token   = Devise.token_generator.digest(self, :unlock_token, unlock_token)
    
          new_user = 'Homebrew'
      new_repo = (repo == 'cask') ? repo : 'cask-#{repo}'