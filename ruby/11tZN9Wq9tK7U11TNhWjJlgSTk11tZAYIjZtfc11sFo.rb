
        
          def persisted?
    id.present?
  end
    
              @scrolls.each do |scroll|
            feed.entry(scroll) do |entry|
              entry.title(scroll.title)
              entry.content(scroll.body, :type => 'html')
    
        def did_show_message?
      file_name = '.did_show_opt_info'
    
          if error_info
        error_info = error_info.join('\n\t') if error_info.kind_of?(Array)
    
          it 'handles the exclude_dirs parameter with multiple  elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle', 'Packages/'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle --exclude-dir Packages/')
      end
    end
  end
end

    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
        context 'only newlines' do
      let(:keywords) { 'One\nTwo\r\nThree\nFour Token\n' }
    
        # LibreSSL: libcrypto-##.lib and libssl-##.lib, where ## is the ABI version
    # number. We have to find the version number out by scanning libpath.
    libpath = $LIBPATH.dup
    libpath |= ENV['LIB'].split(File::PATH_SEPARATOR)
    libpath.map! { |d| d.tr(File::ALT_SEPARATOR, File::SEPARATOR) }
    
    # call-seq:
#   Digest(name) -> digest_subclass
#
# Returns a Digest subclass by +name+ in a thread-safe manner even
# when on-demand loading is involved.
#
#   require 'digest'
#
#   Digest('MD5')
#   # => Digest::MD5
#
#   Digest(:SHA256)
#   # => Digest::SHA256
#
#   Digest(:Foo)
#   # => LoadError: library not found for class Digest::Foo -- digest/foo
def Digest(name)
  const = name.to_sym
  Digest::REQUIRE_MUTEX.synchronize {
    # Ignore autoload's because it is void when we have #const_missing
    Digest.const_missing(const)
  }
rescue LoadError
  # Constants do not necessarily rely on digest/*.
  if Digest.const_defined?(const)
    Digest.const_get(const)
  else
    raise
  end
end

    
    $defs << '-DHAVE_CONFIG_H'
    
    $defs << '-DNDEBUG' << '-DHAVE_CONFIG_H'
    
      # A DSL that provides the means to dynamically load libraries and build
  # modules around them including calling extern functions within the C
  # library that has been loaded.
  #
  # == Example
  #
  #   require 'fiddle'
  #   require 'fiddle/import'
  #
  #   module LibSum
  #   	extend Fiddle::Importer
  #   	dlload './libsum.so'
  #   	extern 'double sum(double*, int)'
  #   	extern 'double split(double)'
  #   end
  #
  module Importer
    include Fiddle
    include CParser
    extend Importer
    
        # Returns the size needed for the union with the given +types+.
    #
    #   Fiddle::CUnionEntity.size(
    #     [ Fiddle::TYPE_DOUBLE,
    #       Fiddle::TYPE_INT,
    #       Fiddle::TYPE_CHAR,
    #       Fiddle::TYPE_VOIDP ]) #=> 8
    def CUnionEntity.size(types)
      types.map { |type, count = 1|
        PackInfo::SIZE_MAP[type] * count
      }.max
    end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          private
    
          def keys
        values.keys
      end
    
    set_if_empty :format, :airbrussh
set_if_empty :log_level, :debug
    
      namespace :release do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Release #{gem} as a package'
      task gem => 'package:#{gem}' do
        sh <<-SH
          gem install #{package(gem, '.gem')} --local &&
          gem push #{package(gem, '.gem')}
        SH
      end
    end
    
              begin
            lineno = frame.lineno-1
            lines = ::File.readlines(frame.filename)
            frame.pre_context_lineno = [lineno-CONTEXT, 0].max
            frame.pre_context = lines[frame.pre_context_lineno...lineno]
            frame.context_line = lines[lineno].chomp
            frame.post_context_lineno = [lineno+CONTEXT, lines.size].min
            frame.post_context = lines[lineno+1..frame.post_context_lineno]
          rescue
          end
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          def report(env)
        warn env, 'attack reported by #{self.class}'
        env[options[:report_key]] = true
      end
    
          def call(env)
        request  = Request.new(env)
        get_was  = handle(request.GET)
        post_was = handle(request.POST) rescue nil
        app.call env
      ensure
        request.GET.replace  get_was  if get_was
        request.POST.replace post_was if post_was
      end
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
      context 'with custom session key' do
    it 'denies requests with duplicate session cookies' do
      mock_app do
        use Rack::Protection::CookieTossing, :session_key => '_session'
        run DummyApp
      end
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
          IGNORE_GEMS_IN_PACK.each do |gem_name|
        packet_gem.ignore(gem_name)
      end
    
      # We compare the before the update and after the update
  def display_updated_plugins(previous_gem_specs_map)
    update_count = 0
    find_latest_gem_specs.values.each do |spec|
      name = spec.name.downcase
      if previous_gem_specs_map.has_key?(name)
        if spec.version != previous_gem_specs_map[name].version
          puts('Updated #{spec.name} #{previous_gem_specs_map[name].version.to_s} to #{spec.version.to_s}')
          update_count += 1
        end
      else
        puts('Installed #{spec.name} #{spec.version.to_s}')
        update_count += 1
      end
    end
    
          context 'when the plugin doesnt exist' do
        it 'fails to install and report an error' do
          command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-output-impossible-plugin')
          expect(command.stderr).to match(/Plugin not found, aborting/)
        end
      end
    end
  end
end

    
    RunnerTool.configure
    
          dir = if File.directory?(file_or_dir)
              file_or_dir
            else
              File.dirname(file_or_dir)
            end
      @path_cache[dir] ||= ConfigLoader.configuration_file_for(dir)
      path = @path_cache[dir]
      @object_cache[path] ||= begin
                                print 'For #{dir}: ' if ConfigLoader.debug?
                                ConfigLoader.configuration_from_file(path)
                              end
    end
  end
end

    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        def get_cached_gist(gist, file)
      return nil if @cache_disabled
      cache_file = get_cache_file_for gist, file
      File.read cache_file if File.exist? cache_file
    end
    
    # Add a script to run after install (should be in the current directory):
package.scripts[:after_install] = 'my_after_install_script.sh'
    
        # If the package output (-p flag) is a directory, write to the default file name
    # but inside that directory.
    if ! package.nil? && File.directory?(package)
      package_file = File.join(package, output.to_s)
    else
      package_file = output.to_s(package)
    end
    
      # What architecture is this package for?
  attr_accessor :architecture
    
            # If it's not a null record, do extension hash.
        if(typeflag != '\0')
          extension_header = header.dup()
    
        # Query details about our now-installed package.
    # We do this by using 'npm ls' with json + long enabled to query details
    # about the installed package.
    npm_ls_out = safesystemout(attributes[:npm_bin], 'ls', '--json', '--long', *npm_flags)
    npm_ls = JSON.parse(npm_ls_out)
    name, info = npm_ls['dependencies'].first
    
        cwd = ::Dir.pwd
    ::Dir.chdir(staging_path)
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']
    
            next if attributes[:python_disable_dependency].include?(name)
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb
    
        # Unpack the tarball to the staging path
    args = ['-cf', output_path, '-C', staging_path]
    tar_compression_flag(output_path).tap do |flag|
      args << flag unless flag.nil?
    end
    args << '.'