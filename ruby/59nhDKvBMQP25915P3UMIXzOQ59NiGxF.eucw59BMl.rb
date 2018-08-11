
        
              https://pip.readthedocs.org/en/stable/installing/#install-pip
    EOS
  when 'pil' then <<-EOS.undent
    Instead of PIL, consider `pip install pillow` or `brew install Homebrew/python/pillow`.
    EOS
  when 'macruby' then <<-EOS.undent
    MacRuby works better when you install their package:
      http://www.macruby.org/
    EOS
  when /(lib)?lzma/
    'lzma is now part of the xz formula.'
  when 'xcode'
    if MacOS.version >= :lion
      <<-EOS.undent
      Xcode can be installed from the App Store.
      EOS
    else
      <<-EOS.undent
      Xcode can be installed from https://developer.apple.com/xcode/downloads/
      EOS
    end
  when 'gtest', 'googletest', 'google-test' then <<-EOS.undent
    Installing gtest system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'gmock', 'googlemock', 'google-mock' then <<-EOS.undent
    Installing gmock system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'sshpass' then <<-EOS.undent
    We won't add sshpass because it makes it too easy for novice SSH users to
    ruin SSH's security.
    EOS
  when 'gsutil' then <<-EOS.undent
    Install gsutil with `pip install gsutil`
    EOS
  when 'clojure' then <<-EOS.undent
    Clojure isn't really a program but a library managed as part of a
    project and Leiningen is the user interface to that library.
    
      def caveats
    caveats = []
    begin
      build, f.build = f.build, Tab.for_formula(f)
      s = f.caveats.to_s
      caveats << s.chomp + '\n' if s.length > 0
    ensure
      f.build = build
    end
    caveats << keg_only_text
    caveats << bash_completion_caveats
    caveats << zsh_completion_caveats
    caveats << fish_completion_caveats
    caveats << plist_caveats
    caveats << python_caveats
    caveats << app_caveats
    caveats << elisp_caveats
    caveats.compact.join('\n')
  end
    
      def describe_ruby
    ruby = which 'ruby'
    return 'N/A' if ruby.nil?
    ruby_binary = Utils.popen_read ruby, '-rrbconfig', '-e', \
      'include RbConfig;print'#{CONFIG['bindir']}/#{CONFIG['ruby_install_name']}#{CONFIG['EXEEXT']}''
    ruby_binary = Pathname.new(ruby_binary).realpath
    if ruby == ruby_binary
      ruby
    else
      '#{ruby} => #{ruby_binary}'
    end
  end
    
      def filtered_list
    names = if ARGV.named.empty?
      Formula.racks
    else
      ARGV.named.map { |n| HOMEBREW_CELLAR+n }.select(&:exist?)
    end
    if ARGV.include? '--pinned'
      pinned_versions = {}
      names.each do |d|
        keg_pin = (HOMEBREW_LIBRARY/'PinnedKegs'/d.basename.to_s)
        if keg_pin.exist? || keg_pin.symlink?
          pinned_versions[d] = keg_pin.readlink.basename.to_s
        end
      end
      pinned_versions.each do |d, version|
        puts '#{d.basename}'.concat(ARGV.include?('--versions') ? ' #{version}' : '')
      end
    else # --versions without --pinned
      names.each do |d|
        versions = d.subdirs.map { |pn| pn.basename.to_s }
        next if ARGV.include?('--multiple') && versions.length < 2
        puts '#{d.basename} #{versions*' '}'
      end
    end
  end
end
    
        names = @@remote_tap_formulae['#{user}/#{repo}']
    user = user.downcase if user == 'Homebrew' # special handling for the Homebrew organization
    names.select { |name| rx === name }.map { |name| '#{user}/#{repo}/#{name}' }
  rescue GitHub::HTTPNotFoundError => e
    opoo 'Failed to search tap: #{user}/#{repo}. Please run `brew update`'
    []
  rescue GitHub::Error => e
    SEARCH_ERROR_QUEUE << e
    []
  end
    
          it 'with non-nil values' do
        ary = [1, 2]
        eval 'if (a, b = ary); ScratchPad.record [a, b]; end'
        ScratchPad.recorded.should == [1, 2]
      end
    
      describe 'RTYPEDATA' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_rdata(a).should == 1024
    end
    
        prefix = ''
    if name.bytesize > 100 then
      parts = name.split('/', -1) # parts are never empty here
      name = parts.pop            # initially empty for names with a trailing slash ('foo/.../bar/')
      prefix = parts.join('/')    # if empty, then it's impossible to split (parts is empty too)
      while !parts.empty? && (prefix.bytesize > 155 || name.empty?)
        name = parts.pop + '/' + name
        prefix = parts.join('/')
      end
    
    end
    
        Object.send :remove_const, :RUBY_ENGINE if defined?(RUBY_ENGINE)
    Object.send :const_set,    :RUBY_ENGINE, 'vroom'
    
              http.request(post) do |res|
            assert_equal('401', res.code, log.call)
            res['www-authenticate'].scan(DIGESTRES_) do |key, quoted, token|
              params[key.downcase] = token || quoted.delete('\\')
            end
             params['uri'] = 'http://#{addr}:#{port}#{path}'
          end
    
          ##
      # Creates a new BasicAuth instance.
      #
      # See WEBrick::Config::BasicAuth for default configuration entries
      #
      # You must supply the following configuration entries:
      #
      # :Realm:: The name of the realm being protected.
      # :UserDB:: A database of usernames and passwords.
      #           A WEBrick::HTTPAuth::Htpasswd instance should be used.
    
            if (gv | lv | iv | cv).include?(receiver) or /^[A-Z]/ =~ receiver && /\./ !~ receiver
          # foo.func and foo is var. OR
          # foo::func and foo is var. OR
          # foo::Const and foo is var. OR
          # Foo::Bar.func
          begin
            candidates = []
            rec = eval(receiver, bind)
            if sep == '::' and rec.kind_of?(Module)
              candidates = rec.constants.collect{|m| m.to_s}
            end
            candidates |= rec.methods.collect{|m| m.to_s}
          rescue Exception
            candidates = []
          end
        else
          # func1.func2
          candidates = []
          to_ignore = ignored_modules
          ObjectSpace.each_object(Module){|m|
            next if (to_ignore.include?(m) rescue true)
            candidates.concat m.instance_methods(false).collect{|x| x.to_s}
          }
          candidates.sort!
          candidates.uniq!
        end
        select_message(receiver, message, candidates, sep)
    
        def stylesheets_path
      File.join assets_path, 'stylesheets'
    end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
    task default: :test

    
    class LogStash::PluginManager::Generate < LogStash::PluginManager::Command
    
        if as == :json
      if api_error?(data)
        data = generate_error_hash(data)
      else
        selected_fields = extract_fields(filter.to_s.strip)
        data.select! { |k,v| selected_fields.include?(k) } unless selected_fields.empty?
        unless options.include?(:exclude_default_metadata)
          data = data.to_hash
          if data.values.size == 0 && selected_fields.size > 0
            raise LogStash::Api::NotFoundError
          end
          data = default_metadata.merge(data)
        end
      end
    
      module Array2
    def _1
      elements[1]
    end